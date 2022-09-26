#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
 int yr,ch;

 printf("Enter a year: ");
 scanf("%d",&yr);

 printf("Select from following: -\n");
 printf("1) Check whether entered year is leap or not\n");
 printf("2) Exit the program\n\n");
 scanf("%d",&ch);

 switch(ch)
 {
    case 1:
    if (yr%4==0)
    {
        if (yr%100==0)
        {
            if (yr%400==0)
            printf("Leap Year\n");

            else
            printf("Not Leap Year\n");
        }
        else
        printf("Leap Year\n");
    }
    else
    printf("Not Leap Year\n");

    break;

    case 2:
    exit(1);

    default:
    printf("Invalid Option!\n\n");
 }
    return 0;
}