#include <stdio.h>

int main(void)
{
	int x, max;
	max = 100;
   	for(x = 1; x <= max ; x++)
	{
		if(x%3 == 0)	{
			printf("%s\n","Fizz");
		}
		if(x%5 == 0){
			printf("%s\n","Buzz");
		}
		if(x%5 != 0 && x%3 != 0){
			printf("%d\n",x);
		}
	}
   	return 0;
}
