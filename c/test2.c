#include <stdio.h>

    int main() {
        char var[3] = "50";
        char *var_pointer;
        char *var_pointer2;
        var_pointer = var;
        var_pointer2 = var_pointer;
        
        printf(var);
        printf(var_pointer);
        printf(var_pointer2);
        
}