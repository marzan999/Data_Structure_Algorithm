//c program to demonstrate
//example of strlen() function.

#include <stdio.h>
#include <string.h>
int main()
{
	char ch[] = { 'm', 'a', 'r',
				'z', 'a', 'n','\0' };

	printf("Length of string is: %lu",
		strlen(ch));

	return 0;
}
