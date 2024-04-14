#include<stdio.h>

int factorial(int n){
  if(n==0 || n==1){
    printf("Factorial of %d is %d\n",n,1);
    return 1;
  }else{
    int result = n*factorial(n-1);
    printf("Factorial of %d is %d\n",n,result);
    return result;
  }
}
  
  
