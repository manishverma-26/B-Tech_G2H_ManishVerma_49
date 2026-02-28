//WAP to print the sum of all numbers up to a given number.


#include<stdio.h>
int main(){
    int n,sum=0,c,value;
    printf("Enter how many number you want to add ?\n");  
    scanf("%d",&n);

    printf("Enter %d integer : \n",n);

    for(c=1;c<=n;c++){
        scanf("%d",&value);
        sum=sum+value;
    }
    printf("Sum of the integer = %d\n",sum);

    return 0;
}