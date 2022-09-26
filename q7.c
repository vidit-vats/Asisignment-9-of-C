#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
 float fin_bill;
 int u,ch;
 printf("Enter the number of units consumed: ");
 scanf("%d",&u);

 if (u<=50)
 ch=1;

 else if (u<=150)
 ch=2;

 else if (u<=250)
 ch=3;

 else if (u>250)
 ch=4;

 switch(ch)
 {
    case 1:
    fin_bill= (u*0.5)*1.2;
    printf("Bill: Rs %.2f\n",fin_bill);
    break;

    case 2:
    fin_bill=((50*0.5)+(u-50)*0.75)*1.2;
    printf("Bill: Rs %.2f\n",fin_bill);
    break;

    case 3: 
    fin_bill=((50*0.5)+(100*0.75)+(u-150)*1.2)*1.2;
    printf("Bill: Rs %.2f\n",fin_bill);
    break;

    case 4:
    fin_bill=((50*0.5)+(100*0.75)+(100*1.2)+(u-250)*1.5)*1.2;
    printf("Bill: Rs %.2f\n",fin_bill);
    break;

    default: 
    printf("Invalid!\n");
    exit(1);
 }
    return 0;
}