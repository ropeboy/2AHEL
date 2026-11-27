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
    if (strlen(wort1) == 0 || strlen(wort1) != strlen(wort2))
        return -1;
    for (int i = 0; wort1[i] != '\0'; i++) {
        if (wort1[i] == c) {
            wort2[i] = c;
        }
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

char normalize(char c) {
    if (is_upper(c) && is_lower(c)) // !if (is_upper(c) || is_lower(c)) -> De Morgan
        return -1;
    if (is_upper(c))
        return c + ('a' - 'A');
    else
        return c;
}

int is_upper(char c) {
    return c >= 'A' && c<= 'Z';
}

int is_lower(char c) {
    return c >= 'a' && c<= 'z';
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