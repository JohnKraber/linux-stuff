#include <stdio.h>

int main() {

    unsigned int a,b;
    float c,d;
    a = 9; b = 2;
    
    c = a / b;
    d = (float) a / (float) b; // Временно меняем тип данных int переменных a,b на float

    printf("[int] a = %d, b = %d\n",a,b);
    printf("[float] c = %f, d = %f\n",c,d);

}