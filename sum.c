#include<stdio.h>
int sumOfDigits(int num){
  int sum=0;
  int originalNum = num;
  
  while (num != 0) {
    int digit = num % 10;
    sum += digit;
    printf("Adding digit %d to the sum. Current sum: %d\n", digit,sum);
    num /= 10;
  }
  printf("Sum of digits of %d is: %d\n",originalNum, sum);
}
