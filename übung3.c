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

init(int sz, char* c) {
    char* wort = malloc(sz + 1);

    for (int i = 0; i < sz; i++){
        wort[i] = c;
    }
    wort[sz] = '\0';
    return wort;
}

int main() {
    char* wort = "WORT";
    const int n = strlen(wort);
    char wort2[n];
    for (int i = 0; i < n; i++) {
        wort2[i] = '_';
    }

    dump(wort);
    free(wort2);
    return 0;
}