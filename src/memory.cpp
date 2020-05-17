#include <cstddef>
#include <cstdlib>

void *operator new(size_t n)
{
    void *const p = malloc(n);
    // FIXME: handle failure
    return p;
}

void operator delete(void * p)
{
    free(p);
}

void operator delete(void * p, size_t n)
{
    free(p);
}

