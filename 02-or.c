#include <stdio.h>

int main(void)
{
    int a = 0b00000011;   /* 10進数で3 */
    int b = 0b00000110;   /* 10進数で6 */
    int c = a | b;

    printf("%d\n", c);    /* 確認：7 */

    b = 0b00001100;
    c = a | b;
    printf("%d\n", c);    /* ① 15 */

    c = a ^ b;
    printf("%d\n", c);    /* ② 15（bを12に変更した場合） */

    b = 0b00000110;
    c = a ^ b;
    printf("%d\n", c);    /* 元のb=6に対するXOR：5 */
    return 0;
}
