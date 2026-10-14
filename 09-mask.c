#include <stdio.h>

int main(void)
{
    int a = 0b01101100;
    int filter = 0b00001111;

    printf("%d\n", a & filter);   /* 確認：12 */

    filter = 0b11110000;
    printf("%d\n", a & filter);   /* ① 上位4ビット：96 */

    filter = 0b00000001;
    printf("%d\n", a & filter);   /* ② 最下位ビット：0（偶数） */
    printf("%s\n", (a & filter) ? "奇数" : "偶数");

    a = 0b01101101;
    printf("%d\n", a & filter);   /* 奇数の例：1 */
    printf("%s\n", (a & filter) ? "奇数" : "偶数");
    return 0;
}
