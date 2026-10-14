// ==================================================
// 【種類】確認＋改造（実行してから、コードを書き足す）
// 【内容】1 << n で「n番目だけ1」のビットを作り、8個のLEDの点灯状態を1つの変数で操作する
// 【まずやること】
//   ・そのまま実行して、次の3行が表示されることを確認する
//       ○○○○○○○●（0番目を点けた）
//       ○○○○○●○●（2番目を点けた）
//       ○○○○○●○○（0番目を消した）
// 【やってみよう】
//   ① 7番目（一番左）のLEDを点ける行を追加する
//   ② 点灯させたい番号を scanf で入力し、そのLEDを点けるようにする
//   ③ 発展：^ を使って「n番目のLEDを反転する（点いていれば消す、消えていれば点ける）」行を追加する
// ==================================================
#include <stdio.h>

void show(unsigned char leds)
{
    for (int i = 7; i >= 0; i--) {
        printf("%s", (leds & (1 << i)) ? "●" : "○");
    }
    printf("\n");
}

int main(void)
{
    unsigned char leds = 0;
    int n;

    // 最初の3つ
    leds = leds | (1 << 0);
    show(leds);

    leds = leds | (1 << 2);
    show(leds);

    leds = leds & ~(1 << 0);
    show(leds);

    // ① 7番目のLEDを点ける
    leds = leds | (1 << 7);
    show(leds);

    // ② scanfで番号を入力して点ける
    printf("点けたいLEDの番号（0〜7）: ");
    if (scanf("%d", &n) != 1 || n < 0 || n > 7) {
        printf("0〜7の番号を入力してください。\n");
        return 1;
    }

    leds = leds | (1 << n);
    show(leds);

    // ③ n番目のLEDを反転する
    leds = leds ^ (1 << n);
    show(leds);

    return 0;
}