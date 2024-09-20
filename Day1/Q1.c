//A five digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.
#include<stdio.h>
int main(){
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  int ReverseNumber=0;
  for(int i = a;i>0;i=i/10){
    int rn = i%10;
    ReverseNumber=ReverseNumber*10+rn;
  }
  if(a==ReverseNumber){
    printf("%d is palindrome",a);
  }else{
    printf("%d is not palindrome",a);
  }
}
