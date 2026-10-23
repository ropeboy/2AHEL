# include <stdio.h>

int main()
{
    const char secret[] = "PETARR";
    const int len = sizeof(secret) - 1;
    char guessed[sizeof(secret) - 1];
    char guess;
    int hits = 0;

    // variable initialisieren: _ _ _ _ _ _ _
    for (int i = 0; i < len; i+= 2) {
        guessed[i] = '_';
    }

    printf("Buchstabe:");
    if (scanf(" %c", &guess) !=1) {
        printf("Ungültige Eingabe\n");
        return 1;
    }

    for (int i = 0; i < sizeof(secret) - 1; i++) {
        if (guess == secret[i]) {
            hits++;
            guessed[i] = guess;
        }
    }

    for (int i = 0; i < len; i++) {
        printf("%c ", guessed[i]);
    }

    printf("Treffer: %d", hits);
    return 0;
}