#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
 
while(1)
{
    int x;
    int a,b;
printf("1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Exit\n");
printf("Enter your choice: ");
scanf("%d",&x);

    switch(x)
 {
    case 1: 
    
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Result: %d\n\n",a+b);
    break;

    case 2:
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Result: %d\n\n",a-b);
    break;

    case 3:
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Result: %d\n\n",a*b);
    break;

    case 4:
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("Result: %d\n\n",a/b);
    break;

    case 5:
    exit(1);

    default:
    printf("Error!\n\n");
    
 }
}
    return 0;
}