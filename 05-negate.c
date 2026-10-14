#include <stdio.h>
#include <limits.h>

int main(void)
{
    int num;
    int inverse_num;

    printf("整数=");
    if (scanf("%d", &num) != 1) {
        fprintf(stderr, "整数を入力してください。\n");
        return 1;
    }

    if (num == INT_MIN) {
        fprintf(stderr, "この値はint型では正負を逆転できません。\n");
        return 1;
    }

    inverse_num = ~num + 1;   /* ビット反転して1を足す（2の補数） */

    printf("正負逆転した値は%dです。\n", inverse_num);
    return 0;
}
