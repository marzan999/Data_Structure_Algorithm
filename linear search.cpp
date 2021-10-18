#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, key, i, loc=0;
    cout<<" how many numbers do you want: ";
    cin>>n;
    int l[n];
    cout<<" Enter the numbers: "<<endl;
    for(i=0; i<n; i++)
    {
        printf(" Index[%d", i);
        cout<<"] = ";
        cin>>l[i];
    }
    cout<<" Enter the number you want to search: ";
    cin>>key;
    for(i=0; i<n; i++)
    {
        if(l[i]==key)
        {
            cout<<"Item found"<<endl;
            loc=1;
            break;
        }
    }
    if(loc==0)
    {
        cout<<" Item not found"<<endl;
    }
    return 0;
}


