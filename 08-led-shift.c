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

    leds = leds | (1 << 0);    /* 0番目を点ける */
    show(leds);
    leds = leds | (1 << 2);    /* 2番目を点ける */
    show(leds);
    leds = leds & ~(1 << 0);   /* 0番目を消す */
    show(leds);

    leds = leds | (1 << 7);    /* 7番目（一番左）を点ける */
    show(leds);

    printf("点灯させるLED番号（0～7）=");
    if (scanf("%d", &n) != 1 || n < 0 || n > 7) {
        fprintf(stderr, "0から7までの整数を入力してください。\n");
        return 1;
    }

    leds = leds | (1 << n);    /* 入力された番号のLEDを点ける */
    show(leds);
    leds = leds ^ (1 << n);    /* 同じ番号のLEDを反転する */
    show(leds);
    return 0;
}
