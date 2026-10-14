#include <stdio.h>

int main(void)
{
    int a = 0b00000011;   /* 10進数で3 */
    int b = 0b00000110;   /* 10進数で6 */
    int c = a & b;

    printf("%d\n", c);   /* 確認：2 */

    a = 0b00001010;
    b = 0b00001100;
    c = a & b;
    printf("%d\n", c);   /* ① 値を変えたAND：8 */

    c = ~a;
    printf("%d\n", c);   /* ② NOT：一般的な2の補数環境では-11 */
    return 0;
}
