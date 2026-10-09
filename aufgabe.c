#include <stdio.h>

int main()

{
    float a;
    float b = 20;

    printf("Gib a an: ");
    scanf("%f", & a);

    printf("a betraegt %f und die b betraegt %f:).", a, b);

    if(b == a)
    (
        printf(" Die beiden Zahlen sind gleich groes!")
    );
    if(a > b)
    (
        printf(" Deine Zahl ist groeser!")
    );
    if(a < b)
    (
        printf(" Deine Zahl ist kleiner!")
    );
    return 0;
}