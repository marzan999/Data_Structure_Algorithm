//C Program to illustrate the
//strcpy() function in C/C++
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "Bangladesh";

	char dest[14];

	strncpy(dest, src, 14);
	printf("Copied string: %s\n", dest);

	return 0;
}
