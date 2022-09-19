#include <stdio.h>
 void gcd(int number1,int number2); 
 
 int main()
 {
 int number1, number2, i, m;
 printf("Enter two integers: "); 
 scanf("%d %d", &number1, &number2);
 gcd(number1,number2);
    return 0; }
void gcd(int number1,int number2){
 int i,m;
 for(i=1; i <= number1 && i <= number2; ++i)
  { if(number1%i==0 && number2%i==0) m = i; }
   printf("G.C.D of %d and %d is %d", number1, number2, m);
}

