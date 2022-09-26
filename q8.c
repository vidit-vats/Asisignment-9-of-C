#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
 int n1,n2,ch;
 printf("Enter a number: ");
 scanf("%d",&n1);

 if (n1>0)
 {
   printf("A positive no is entered\n");
   ch=1;
 }
 
 else if (n1==0)
 {
 printf("Neither positive nor negativen\n\n");
 ch=3;
 }
 

 else if (n1<0)
 {
    printf("A negative no is entered\n\n");
    ch=2;
 }
 
 switch(ch)
 {
    case 1:
    n2=-n1;
    n1=n2;
    printf("After conversion, number is: %d\n\n",n1);
    break;

    case 2:
    n2=-n1;
    n1=n2;
    printf("After conversion, number is: %d\n\n",n1);

    case 3:
    exit(1);

    default:
    printf("Invalid Option!\n");
 }
    return 0;
}