#include <stdio.h>

int main(void)
{
    double score;

    /* Begin */
    scanf("%lf", &score);

    if (score < 0 || score > 100) {
        printf("Score is error!\n");
    } else if (score >= 90) {
        putchar('A');
    } else if (score >= 80) {
        putchar('B');
    } else if (score >= 70) {
        putchar('C');
    } else if (score >= 60) {
        putchar('D');
    } else {
        putchar('E');
    }
    /* End */

    return 0;
}