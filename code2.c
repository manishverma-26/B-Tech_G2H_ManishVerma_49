//WAP that calculates the simple interest and compund interest. the principal,amount,rate of interest and time are entered through the keyboard.

#include<stdio.h>
#include<math.h>
int main(){
    
    float p,a,r,t;  //p=principal,a=amount,r=rate,t=time
    printf("ente the principal ---> ");
    scanf("%f",&p);
    printf("enter the rate ---> ");
    scanf("%f",&r);
    printf("enter the time --->");
    scanf("%f",&t);

    float si=(p*r*t)/100;
    printf("the simple interest is =%f",si);

    a=p*(pow((1+r/100),t));

    float ci=a-p;
    printf("\n the compound interest is =%f",ci);
    return 0;

}