#include <stdio.h>
void main()
{
    int t;
    float simple_interest,p,r;
    scanf("\n%f",&p);
    scanf("\n%f",&r);
    scanf("\n%d",&t);
    simple_interest=(p*r*t)/100;
    printf("%f",simple_interest);


}