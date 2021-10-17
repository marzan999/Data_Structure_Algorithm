#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, temp, choise;
    cout << "Enter how many numbers you want to insert: ";
    cin >> n;

    int a[n];


    cout << "Enter the numbers: ";
    for(i = 1; i <= n; i++)
        cin >> a[i];
    for(i = 2; i <= n; i++)
    {
        temp = a[i];
        j = i - 1;
        while(j > 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;

    }
    cout <<".................Menu................" << endl;
    cout << "Press 1 for Ascending order sorting" << endl << "Press 2 for Descending order sorting";
    cout << endl << "Enter your choice: ";
    cin >> choise;
    if(choise == 1)
    {
        cout << "You have chosen ascending order sorting." << endl << "sorted list: ";
        for(i = 1; i <= n; i++)
            cout << a[i] << " " ;
            for(k=0; k<n; k++)
                {
                    cout<<" "<<a[k];
                }
                cout<<endl;
    }
    else if(choise == 2)
    {
        cout << "You have chosen descending order sorting." << endl << "sorted list: ";
        for(i = n ; i > 0; i--)
            cout << a[i] << " " ;
    }
    else
    {
        cout << "Wrong choice";
    }
    return 0;
}




