%language "c"

%{
#include <math.h>
int yylex();
void yyerror(const char *);
void run_command(int, double);
%}

%define api.value.type union
%token <double> NUM
%token IDENT
%token READ WRITE ADDR DUMP
%nterm <double> expr

%left '-' '+'
%left '*' '/'
%precedence NEG
%right '^'

%%

input
    : %empty
    | input line
    ;

line
    : '\n' 
    | expr '\n'         { run_command(NUM, $1); }
    | READ '\n'         { run_command(READ, 0); }
    | WRITE expr '\n'   { run_command(WRITE, $2); }
    | ADDR expr '\n'    { run_command(ADDR, $2); }
    | DUMP '\n'         { run_command(DUMP, 0); }
    ;

expr
    : NUM
    | expr '+' expr { $$ = $1 + $3; }
    | expr '-' expr { $$ = $1 - $3; }
    | expr '*' expr { $$ = $1 * $3; }
    | expr '/' expr { $$ = $1 / $3; }
    | '-' expr %prec NEG { $$ = -$2; }
    | expr '^' expr { $$ = pow($1, $3); }
    | '(' expr ')' { $$ = $2; }
    ;

%%

