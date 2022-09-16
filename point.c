
#include <stdio.h>

int main()

{

    int x = 0;
    __UINT32_TYPE__ y = 1;
    int z = 1;

    __UINT32_TYPE__ a = z + y;

    printf("\n\n%u\n\n", a += 1);

    return 0;
}