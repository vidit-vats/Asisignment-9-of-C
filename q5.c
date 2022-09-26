#include <stdio.h>

int main (int argc, char *argv[]) {
 int no;
 printf("Enter a number from 1 to 3: ");
 scanf("%d",&no);

 switch(no)
 {
    case 1:
    printf("Good\n");
    break;

    case 2:
    printf("Better\n");
    break;

    case 3:
    printf("Best\n");
    break;

    default:
    printf("Invalid!\n");
 }
return 0;
}