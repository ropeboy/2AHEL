#include <stdio.h>
#include <stdlib.h>

int strlen(char* wort) {
    int sz = 0;
    for (; wort[sz] != '\0'; sz++)
        ;
    return sz;
}

void dump(char* wort) {
    for (int i = 0; wort[i] != '\0'; i++) {
        printf("%c ", wort[i]);
    }
    printf("\n");
}

int check(char* wort1, char* wort2, char c) {
    for (int i = 0; wort1[i] != '\0'; i++) {
        if (wort1[i] == c);
            wort2[i] = c;

    }

    return 0;
}

char *init(int sz, char c) {
    char* wort = malloc(sz + 1);

    for (int i = 0; i < sz; i++){
        wort[i] = c;
    }
    wort[sz] = '\0';
    return wort;
}

int main() {
    char* wort1 = "WORT";
    const int n = strlen(wort1);
    char wort2[n];
    for (int i = 0; i < n; i++) {
        wort2[i] = '_';
    }
    dump(wort2);
    check(wort1, wort2, '0');
    dump(wort2);

    dump(wort1);
    free(wort2);
    return 0;
}