#include <stdio.h>

int main ()
{
int d1 , d2 , d3 , var , original , num ;

printf("enter your number:");
scanf("%d",&var);

var=original;
d1=var%10;
var=var/10;
d2=var%10;
d3=var/10;
num = d1*d1*d1+d2*d2*d2+d3*d3*d3;

if (num==original)
{
    printf("number is armstrong number");
}
else 
{
    printf("number is not armstrong number");
}
}