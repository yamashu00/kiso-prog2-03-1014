// ==================================================
// 【種類】確認（予想してから実行する）
// 【内容】左シフトで1ビットずつ左にずらし、値がどう変わるかを確かめる
// 【まずやること】
//   ・実行する前に、3つの表示を予想する
//   ・実行して「6」「12」「24」と表示されることを確認し、法則性を考える
// 【やってみよう】
//   ① a を 5 に変えて、a << 4 の結果を予想してから確かめる
//   ② 整数を scanf で入力し、8倍した値を表示するように書き換える（* は使わない）
// ==================================================
#include <stdio.h>

int main(void)
{
    int a = 0b00000011;   /* 10進数で3 */

    printf("%d\n", a << 1);
    printf("%d\n", a << 2);
    printf("%d\n", a << 3);

    a = 5;
    printf("%d\n", a << 4);

    int num;
    printf("整数=");
    if (scanf("%d", &num) != 1) {
        return 1;
    }
    long long magnitude = num;
    if (magnitude < 0) {
        magnitude = -magnitude;
        printf("8倍した値は%lldです。\n", -(magnitude << 3));
    } else {
        printf("8倍した値は%lldです。\n", magnitude << 3);
    }
    return 0;
}
