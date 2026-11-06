#include <stdio.h>

int strcmp(const char word1[], const char word2[]) {
    int diff = 0;
    for (int i = 0;  word1[i] != '\0' && !diff; diff |= word1[i] !=word2[i], i++);
        return diff;
}

int main()
{
    const char secret[] = "EGOOVEROBSESSION";
    const int len = sizeof(secret) - 1;
    char guessed[sizeof(secret) - 1];
    char guess;
    int hits;
    int fails = 0;

    // variable initialisieren: _
    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }
   
while (fails < 7) {
    printf("Buchstabe:");
    if (scanf(" %c", &guess) !=1) {
        printf("Ungültige Eingabe\n");
        return 1;
    }

    else
    {
        fails++;
    }

    for (int i = 0; i < len; i++) {
        secret[i] == guess;
        hits++;
        guessed[i] = guess;
        printf(" %c", guessed[i]);
    
    }

    printf("\n");
    printf("Treffer: %d\n", hits);

    fails += (hits == 0);

    }
    return 0;
}