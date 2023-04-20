#include <stdio.h>

int main() {
    int int_var = 5;
    int *int_ptr;

    int_ptr = &int_var;

    printf("int_ptr = 0x%08x\n", int_ptr);
    printf("&int_ptr = 0x%08x\n", &int_ptr);
    printf("*int_ptr = 0x%08x\n", *int_ptr);

    printf("int_var находится по адресу 0x%08x и содержит значение %d\n ", &int_var, int_var);
    printf("int_ptr находится по адресу 0x%08x и содержит значение %d\n ", &int_ptr, int_ptr, *int_ptr  );

}