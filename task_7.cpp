// C, C++ program demonstrate functionality of strncat()
#include <stdio.h>
#include <string.h>
int main()
{

	char src[50] = "efghijkl";
	char dest[50] = "abcd";

	strncat(dest, src, 5);

	printf("Source string : %s\n", src);
	printf("Destination string : %s", dest);

	return 0;
}

