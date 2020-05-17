#include <corona.h>

extern uint32_t __sbss, __ebss;
extern uint32_t __sdata, __edata;
extern uint32_t __sidata;
extern uint32_t __estack;

extern void system_init(void);
extern int main(void);

template<> void handler<interrupt::RESET>()
{
    uint32_t *bss = &__sbss;
    uint32_t *data = &__sdata;
    uint32_t *idata = &__sidata;

    while (data < &__edata)
        *data++ = *idata++;

    while (bss < &__ebss)
        *bss++ = 0;

    system_init();

    main();

    while (1)
        ;
}

extern "C" void __reset() __attribute__ ((alias("_Z7handlerILN9interrupt11interrupt_tEn15EEvv")));

extern void __default_handler(void) {}

#include <device/vector.h>

