#include <stdio.h>
int main()
{
    printf("Hello");
    printf(",");
    printf("world.\n");

    printf("hi my name is \a oh and im going to keep going");
    
    int fahr, celsius;
    int lower, upper, step;
    
    lower = 0; /* lower level of the tabel */
    upper = 300; /* upper level*/
    step = 20; /*step size*/

    fahr  = lower;
    while (fahr <= upper){
        celsius = 5 * (fahr -32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;

           }


}
