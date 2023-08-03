#include <stdio.h>
#include <string.h>

int main() {
    char str_abc[30];
    char *pointer1;
    char *pointer2;

    strcpy(str_abc,"I'm with the science team!\n");
    pointer1 = str_abc;
    printf(pointer1);

    pointer2 = pointer1 + 6;
    printf(pointer2);
    strcpy(pointer2,"... [REDACTED]");
    printf(pointer2);

}