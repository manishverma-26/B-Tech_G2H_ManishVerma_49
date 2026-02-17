#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5;
    printf("enter marks of sub1 ---> ");
    scanf("%f",&sub1);
    printf("enter the marks of sub2 ---> ");
    scanf("%f",&sub2);
    printf("enter the marks of sub3 ---> ");
    scanf("%f",&sub3);
    printf("enter the marks of sub4 ---> ");
    scanf("%f",&sub4);
    printf("enter the marks of sub5 ---> ");
    scanf("%f",&sub5);

    float sum=sub1+sub2+sub3+sub4+sub5;
    printf("the sum is ---> %f", sum);
    
    float percent=sum/5;
    printf("the percentage is ---> %f",percent);

    return 0;

}