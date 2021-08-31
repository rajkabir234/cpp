#include <stdio.h>
float linear(float a, float b)
{
   float c;
   if(a == 0)
   {
      printf("ERROR\n");
   }
   else
   {
      c = -b / a;
   }
   return c;
}

int main()
{
	printf("To calculate values of linear equation of one variable Ax+B=0");
  	float a, b, c;
   	printf("\nEnter A Value:");
   	scanf("%f", &a);
   	printf("Enter B Value:");
   	scanf("%f", &b);
   	c = linear(a, b);
   	printf("Value of x is %0.2f, if a=%0.2f, b=%0.2f",c,a,b);
}
