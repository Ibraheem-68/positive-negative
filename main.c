#include <stdio.h>
int main()
{
   int number, sign;
   printf("please input number\n");
   scanf("%i", &number);
   if (number < 0)
       sign = -1;
       else if (number==0)
           sign = 0;
           else 
               sign = +1;
               printf("Number is positive\n");
printf("Sign = %i", sign);
	return 0;
}
