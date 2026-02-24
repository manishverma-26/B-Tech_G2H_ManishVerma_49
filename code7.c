//WAP to find the greatest of three number.

#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter first number  ---> ");
    scanf("%d",&a);

    printf("Enter second number ---> ");
    scanf("%d",&b);

    printf("Enter third number  ---> ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("First number is greater than second and third number.", a);
    }
    else if(b>c && b>a){
        printf("Second number is greater than first and third number.",b);
    }
    else{
        printf("Third number is greate than first and second number.",c);
    }
    return 0;
}