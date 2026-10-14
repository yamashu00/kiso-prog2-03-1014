#include <stdio.h>
#include <limits.h>

int main(void)
{
    int a = 0b00000011;   /* 10進数で3 */

    printf("%d\n", a << 1);
    printf("%d\n", a << 2);
    printf("%d\n", a << 3);

    a = 5;
    printf("%d\n", a << 4);  /* ① 80 */

    /* ② 非負整数を入力して、左シフトで8倍する */
    int input;
    printf("整数=");
    if (scanf("%d", &input) != 1) {
        printf("整数を入力してください\n");
        return 1;
    }
    if (input < 0 || input > INT_MAX / 8) {
        printf("0以上で8倍してもintの範囲内になる値を入力してください\n");
        return 1;
    }
    printf("%d\n", input << 3);
    return 0;
}
