#include <stdio.h>
int main (int argc, char *argv[]) {
int ch;
printf("Enter a day no: ");
scanf("%d",&ch);

switch(ch)
{
    case 1:
    printf("Today is Monday,Happy Monday!\n");
    break;

    case 2:
    printf("Today is Tuesday,Happy Tuesday!\n");
    break;

    case 3:
    printf("Today is Wednesday,Happy Wednesday!\n");
    break;

    case 4:
    printf("Today is Thursday,Happy Thursday!\n");
    break;

    case 5:
    printf("Today is Friday,Happy Friday!\n");
    break;

    case 6:
    printf("Today is Saturday,Happy Saturday!\n");
    break;

    case 7:
    printf("Today is Sunday,Happy Sunday!\n");
    break;

    default:
    printf("Wrong number entered\n");
}
return 0;
}