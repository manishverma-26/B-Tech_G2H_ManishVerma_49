#include<stdio.h>
int main()
{

 float c,f;   //c=centigrade  f=fahrenheit

 printf("Enter temperature in centigrade ---> ");
 scanf("%f",&c);

 f=(9*c)/5+32;
 printf("fahrenheit is ---> %f",f);
 return 0;

}