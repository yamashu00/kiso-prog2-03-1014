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

void switch_on(unsigned char *leds, int point){
    *leds = *leds | (1 << point);
}

void switch_off(unsigned char *leds, int point){
    *leds = *leds & ~(1 << point);
}

int main(void)
{
    unsigned char leds = 0;
    int point;

    switch_on(&leds, 0);    /* 0番目を点ける */
    show(leds);
    switch_on(&leds, 2);    /* 2番目を点ける */
    show(leds);
    switch_off(&leds, 0);   /* 0番目を消す */
    show(leds);
    switch_on(&leds, 7);
    show(leds);
    scanf("%d", &point);
    switch_on(&leds, point);
    show(leds);
    leds = leds ^ (1 << 3); //n=3
    show(leds);
    
    return 0;
}
