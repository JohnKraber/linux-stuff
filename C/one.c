#include <stdio.h>
#include <string.h>

int main() {
    int i;
    for(i=0;i<10;i++) {
            char str_a[20];

            strcpy(str_a, "Hello, world!\n");
            printf(str_a);
    }
}