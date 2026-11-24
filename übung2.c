#include <stdio.h>

leet(char* wort) {
    int i = 0;
    int n = 0;
    for (; wort[i] != '\0'; i++) {
        if (wort[i] == 'e') {
            wort[i] = '3';
            n++;
        }
    }
    return n;
}

int main(int argc, char* argv) {
    if(argc != 2) {
        return -1;
    }

    return 0;
}