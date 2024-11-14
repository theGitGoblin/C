#include <stdio.h>

int main(){
    float fahr,celsius;
    int step,upper,lower;

    fahr = 0;
    lower = 0;
    upper = 300;

    
    step = 20;

    while (fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
       
        printf(" fahrenheit: %3.2f     | celsius: %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

}