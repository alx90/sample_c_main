#include <stdio.h>
#include <stdint.h>

int main()
{
    // changing first 2 bytes of uint32_t
    uint32_t res = 0xABCD1234;
    printf("before %lX \n",res);
    res &= 0x00FFFFFF;
    res |= 0x25000000;
    printf("after %lX \n",res);

    return 0;
};

