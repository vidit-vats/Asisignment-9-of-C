#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
 int a,b,c,ch;

while(1)
{
 printf("Enter three lengths of a triangle: ");
 scanf("%d%d%d",&a,&b,&c);

 if ((a+b)>c && (a+c)>b && (b+c)>a)
 printf("Triangle is a valid triangle\n");

 else
 {
 printf("Triangle is not valid\n");
 exit(1); 
 }

 printf("Select the following:-\n");
 printf("1) Check whether given 3 nos are side of isoceles triangle or not\n");
 printf("2) Check whether given 3 nos are sides of right angled triangle or not\n");
 printf("3) Check whether given 3 nos are sides of equilateral triangle or not\n");
 printf("4) Exit the program\n\n");

 scanf("%d",&ch);   

 switch(ch)
 {
    case 1:
    if (a==b || a==c || b==c)
    printf("Triangle is Isosceles triangle\n");
    break;

    case 2:
    if ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==b*b+a*a))
    printf("Triangle is Right Angled\n");
    break;

    case 3:
    if (a==b && a==c && b==c)
    printf("Triangle is equilateral\n");
    break;

    case 4:
    exit(1);

    default:
    printf("Invalid Option Selected\n");
 }
}
return 0;
}
 
 
 
 
 
 
 
 
 
 
 
 
 