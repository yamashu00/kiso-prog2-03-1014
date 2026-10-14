#include <stdio.h>

int main(void)
{
    int num = 0b00000011;
    printf("%d\n", num);           /* 確認：3 */

    num = 0b00001010;
    printf("%d\n", num);           /* ① 10 */

    /* ② 出席番号：35 */
    int attendance_number = 0b00100011;
    printf("%d\n", attendance_number);
    return 0;
}
