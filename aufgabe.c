#include <stdio.h>

int main()
{
    srand(time(NULL));
    int max_zahl = 100;
    const int loesung = (rand() % max_zahl);
    int zahl;
    int loesung = 20;
    int versuche = 10;
    int richtig = 0;
    for (int i = 0;((i < 10)&&(richtig == 0)); i++)
    {
        printf("Gib zahl an: ");
        scanf("%d", & zahl);

        printf("zahl betraegt %d: ).", zahl);

        if (zahl > loesung)
        {
            printf(" Deine Zahl ist groeser!");
        }
        else if (zahl < loesung)
        {
            printf(" Deine Zahl ist kleiner!");
        }
        else
        {
            printf(" Die beiden Zahlen sind gleich groes!"); 
            richtig = 1;
        }
    }    
    return 0;
}
