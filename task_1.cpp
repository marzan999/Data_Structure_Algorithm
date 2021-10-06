//cpp program to demonstrate
//strcat
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    char dest[50] = "This is an";
    char src[50] = " example.";

    strcat(dest, src);
    cout << dest <<endl;
    return 0;
}
