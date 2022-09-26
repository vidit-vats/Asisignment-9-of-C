#include <stdio.h>
int main (int argc, char *argv[]) {
int ch,no;
printf("Enter a month number from 1-12: ");
scanf("%d",&no);

if (no==4 || no==6 || no==9 || no==11)
ch=1;

else if (no==1 || no==3 || no==5 || no==7 || no==8 || no==10 || no==12)
ch=2;

else if (no==2)
ch=3;

 switch(ch)
 {
    case 1:
    printf("This month has 30 days\n");
    break;

    case 2:
    printf("This month has 31 days\n");
    break;

    case 3:
    printf("This month has 28 days if the year is a non leap year\notherwise it has 29 days\n");
    break;

    default:
    printf("Invalid!\n");
 }
    return 0;
}