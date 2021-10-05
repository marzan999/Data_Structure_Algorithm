#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, temp, min, choise;
    cout << "Enter how many numbers you want to insert: ";
    cin >> n;

    int a[n];


    cout << "Enter the numbers: ";
    for(i = 0; i < n; i++)
        cin >> a[i];
    for(i = 0; i < n; i++)
    {
        min = i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
    cout <<".................Menu................" << endl;
    cout << "Press 1 for Ascending order sorting" << endl << "Press 2 for Descending order sorting";
    cout << endl << "Enter your choise: ";
    cin >> choise;
    if(choise == 1)
    {
        cout << "You have chosen ascending order sorting." << endl << "sorted list: ";
        for(i = 0; i < n; i++)
            cout << a[i] << " " ;
    }
    else if(choise == 2)
    {
        cout << "You have chosen descending order sorting." << endl << "sorted list: ";
        for(i = n - 1; i >= 0; i--)
            cout << a[i] << " " ;
    }
    else
    {
        cout << "Wrong choice";
    }
    return 0;
}

