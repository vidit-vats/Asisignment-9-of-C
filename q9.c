#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
 int no,ch,res;

 printf("Enter an even number: ");
 scanf("%d",&no);

 if (no%2==0)
 {
     printf("Even Number Entered\n");
     ch=1;

 }
 else 
 {
     printf("Odd Number Entered\n");
     ch=2;
 }

 switch(ch)
 {
    case 1:
    no=no+1;
    printf("Upper Nearest Odd Number to Entered Even Number is: %d\n",no);
    break;

    case 2:
    exit(1);

    default:
    printf("Invalid Option!\n");
 }
    return 0;
}