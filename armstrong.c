#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = 0;
    int temp = num;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
  
    while (temp != 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return (sum == originalNum);
}

int main() {
    printf("Armstrong numbers from 1 to 100 are:\n");

    for (int i = 1; i <= 100; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
