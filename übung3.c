#include <stdio.h>

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
    char wort[sz];

    for (int i = 0; i < sz; i++)
        wort[i] = c;
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
    return 0;
}