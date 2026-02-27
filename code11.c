// WAP that takes two operands and one operator from the user, perform the operation and prints the result by using switch statement.

#include<stdio.h>
int main(){
    int a,b,select;

    printf("select your choice : \n");
    printf("1-ADD : \n");
    printf("2-SUB : \n");
    printf("3-MUL : \n");
    printf("4-DIV : \n");
    printf("5-MOD : \n");
    printf("Enter the value of a ---> ");
    scanf("%d",&a);
    printf("Enter the value of b ---> ");
    scanf("%d",&b);
    printf("Enter your choice=");  
    scanf("%d",&select);

    switch (select)
    {
    case 1:
       printf("ADD of a and b %d",(a+b));
        break;
    case 2:
       printf("SUB of a and b %d",(a-b));
       break;
    case 3:
       printf("MUL of a and b %d",(a*b));
       break;
    case 4:
       printf("DIV of a and b %d",(a/b));
       break;
    case 5:
       printf("MOD of a and b %d",(a%b));
       break;

    default:
         printf("you select wrong option.");
        break;
    }

    return 0;
}


