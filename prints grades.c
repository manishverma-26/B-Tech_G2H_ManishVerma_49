/* WAP that accepts marks of five subjects and finds percentage and prints grades according to the following criteria:
Between 90-100% ------- print'A'
 80-90%- ----------------- print'B'
 60-80% ------------------ print'C'
 Below 60% --------------- print'D' */

 #include<stdio.h>
 int main(){
    int PHY,maths2,BEE,PPS,EVS;
    printf("Enter the marks of physics ---> ");
    scanf("%d",&PHY);
    printf("Enter the marks of maths2 ---> ");
    scanf("%d",&maths2);
    printf("Enter the marks of BEE ---> ");
    scanf("%d",&BEE);
    printf("Enter the marks of PPS ---> ");
    scanf("%d",&PPS);
    printf("Enter the marks of EVS ---> ");
    scanf("%d",&EVS);

    int sum = PHY+maths2+BEE+PPS+EVS;
    printf("The sum of marks is %d",sum);

    float percentage = sum/5;
    printf("\nThe percentage of marks is %f",percentage);

    if(percentage<=100 && percentage>90){
        printf("\nThe grade is A.");
    }
    else if(percentage<=90 && percentage>80){
        printf("\nThe grade is B.");
    }
    else if(percentage<=80 && percentage>60){
        printf("\nThe grade is C.");
    }
    else{
        printf("\nThe grade is D.");
    }
    return 0;

    }
