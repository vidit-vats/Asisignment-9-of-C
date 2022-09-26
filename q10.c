#include <stdio.h>
#include <math.h>
int main (int argc, char *argv[]) {
 float a,b,c,dis;
 int ch;
 float r1,r2;
 printf("Enter values of a,b and c: ");
 scanf("%f%f%f",&a,&b,&c);
 dis=b*b-4*a*c;

 if (dis==0)
 ch=1;
 
 else if (dis<0)
 ch=2;

 else if (dis>0)
 ch=3;

switch(ch)
{
    case 1:
    printf("Roots are Real and Equal\n");
    r1=((-b)+sqrt(dis))/2*a;
    r2=((-b)-sqrt(dis))/2*a;
    printf("Roots are %.1f and %.1f\n\n",r1,r2);
    break;

    case 2:
    printf("Roots are imaginary and roots can't be obtained\n");
    break;

    case 3:
    printf("Roots are Real and Unequal\n");
    r1=((-b)+sqrt(dis))/2*a;
    r2=((-b)-sqrt(dis))/2*a;
    printf("Roots are %.1f and %.1f\n\n",r1,r2);
    break;

    default:
    printf("Invalid Option Choosen!\n");
}
    return 0;
}