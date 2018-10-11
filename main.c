#include <stdio.h>
#include <stdint.h>

int main()
{
    // bytes substitution
    printf("Changing first 2 bytes of uint32_t:\n");
    uint32_t res = 0xABCD1234;
    printf("before %08X \n",res);
    res &= 0x00FFFFFF;
    res |= 0x25000000;
    printf("after %08X \n",res);

    printf("\n");

    // c string example
    printf("Printing \"hello\" string as char array:\n");
    char hello_string[5] = "hello";
    for (int i=0; i<(sizeof(hello_string)/sizeof(char)); i++) 
    {
      printf("char[%d] = %c\n",i,hello_string[i]);
    }

    return 0;
};

