#include <stdio.h>

const float INCH = 2.54;

int main (void)
{
    float height, inch_height;
    printf("Программа для пересчёта роста\n");
    printf("Введите ваш рост в сантиметрах\n");
    scanf("%f", &height);
    inch_height = height / INCH;
    printf("Ваш рост в дюймах: %.3f\n", inch_height);
    return 0;
}
