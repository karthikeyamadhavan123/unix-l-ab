#include<stdio.h>

int CharFreq(char str[1000],char ch){
  int count=0;
  for(int i=0; str[i] != '\0' ; ++i){
    if(ch == str[i])
      ++count;
  }
  
  printf("Frequency of %c = %d", ch,count);
  return 0;
}
