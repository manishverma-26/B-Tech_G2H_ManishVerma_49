//WAP that tells whether a given year is leap year or not.

#include<stdio.h>
int main(){

    int year;
    
    printf("Enter year ---> ");
    scanf("%d",&year);

    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("%d is a leap year.\n", year);
    }
    else{
        printf("Year is not leap year.", year);
    }
    return 0;
}