// WAP that check whether the two numbers entered by the user are equal or not.

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number ---> ");
    scanf("%d",&a);
    printf("Enter second number ---> ");
    scanf("%d",&b);

    if (a==b){
        printf("a is equal to b");
    }
    else{
        printf("a is not equal to b ");
    }
     return 0;
}