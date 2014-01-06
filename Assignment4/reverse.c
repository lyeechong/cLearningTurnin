#include <stdio.h>
#include <string.h>

void reverse(char *cstr);

int main(void)
{
	char buf[20]; 
	char *ptr = buf;
	printf("Type in a word less than 20 characters: ");
	scanf("%s", ptr); //reads in a string and stores it in ptr
	reverse(ptr);
	printf("%s\n", ptr);
}

void reverse(char *p)
{
	int length = strlen(p);
	int x;
	for( x = 0 ; x < length/2; x++)
	{
		char temp = p[x];
		p[x] = p[length-x-1];
		p[length-x-1] = temp;
	}
}
