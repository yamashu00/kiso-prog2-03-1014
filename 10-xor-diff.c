#include <stdio.h>

int main(void)
{
    int a = 0b00000011;
    int b = 0b00000110;

    int c = a ^ b;   /* 異なるビットだけ1にする */

    printf("%d\n", c);
    printf("%d\n", c ^ b);  /* bで再度XORするとaに戻る */
    return 0;
}
