#include<stdio.h>  

 int main()    
{    
int n=123, reverse=0, rem;    
printf("Enter a number: ");    
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  printf("Reversed Number: %d",reverse);    
return 0;  
}   
