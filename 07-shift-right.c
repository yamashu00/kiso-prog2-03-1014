#include <stdio.h>

int main(void)
{
    signed char s = -4;      /* 1111 1100 */
    unsigned char u = 252;   /* 1111 1100 */

    printf("%d %d\n", s >> 2, u >> 2);  /* 確認：多くの環境で -1 63 */

    s = -5;
    printf("%d %d\n", s >> 1, s / 2);
    /* ① 多くの環境では -3 -2。負の数の右シフトは処理系依存 */
    return 0;
}
