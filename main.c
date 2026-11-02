#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);

    // 0未満、または10以上の場合はOKを表示する
    if (input < 0 || input >= 10)
    {
        printf("OK");
    }

    // 0以上10未満の場合はNGを表示する
    if (input >= 0 && input < 10)
    {
        printf("NG");
    }

    return 0;
}