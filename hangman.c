# include <stdio.h>

int main() 
{
    const char secret = 'x';
    const char guess = 'y';
    
    if(guess == secret) {
        printf("Treffer %c", secret);
    } else {
        printf("Fail");
    };

    printf("Hello World");
    return 0;
}
