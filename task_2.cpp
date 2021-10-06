// C code to demonstrate the working of
// strrchr()

#include <stdio.h>
#include <string.h>
int main()
{

    char st[] = "GeeksforGeeks";
    char ch = 'e';
    char* val;

    val = strrchr(st, ch);

    printf("String after last %c is : %s \n",
           ch, val);

    char ch2 = 'm';

    val = strrchr(st, ch2);

    printf("String after last %c is : %s ",
           ch2, val);

    return (0);
}
