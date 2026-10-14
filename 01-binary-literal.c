// ==================================================
// 【種類】確認（そのまま実行する）
// 【内容】0b で始まる書き方で、2進数の 0000 0011 を変数に入れて10進数で表示する
// 【まずやること】
//   ・そのまま実行して「3」と表示されることを確認する
// 【やってみよう】
//   ① 0b00000011 を 0b00001010 に変える。表示される数を予想してから実行する
//   ② 自分の出席番号を2進数で書いて入れ、正しく表示されるか確かめる
// ==================================================
#include <stdio.h>

int main(void)
{
    int num = 0b00001010;
    printf("%d\n", num);

    unsigned int attendance;
    printf("出席番号=");
    if (scanf("%u", &attendance) != 1) {
        return 1;
    }
    printf("2進数では0b");
    unsigned int bit = 1;
    while (bit <= attendance / 2) {
        bit <<= 1;
    }
    for (; bit != 0; bit >>= 1) {
        printf("%d", (attendance & bit) != 0);
    }
    printf("、10進数では%uです。\n", attendance);
    return 0;
}
