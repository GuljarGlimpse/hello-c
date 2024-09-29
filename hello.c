#include <stdio.h>

int main(){
   short a;
   long b;
   long long c;
   long double d;
   char g;

   printf("the size of short = %d byte \n", sizeof(a));
   printf("the size of long = %d byte \n", sizeof(b));
   printf("the size of long long = %d byte \n", sizeof(c));
   printf("the size of long double = %d byte \n", sizeof(d));
   printf("the size of char = %d byte \n", sizeof(g));
   return 0;
}