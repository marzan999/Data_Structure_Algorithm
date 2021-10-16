#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j;

    cout<<"How many numbers you want: ";
    cin>>n;

    int list[n];

    cout<<"Enter the numbers: "<<endl;
    for(i=0; i<n; i++)
    {
        printf("Index[%d", i);
        cout<<"]= ";
        cin>>list[i];
    }

    for(i=0; i<=n-1; i++)
    {
        for(j=0; j<=i; j++)
        {
            int temp;
            if(list[j]>list[j+1])

            {
                temp=list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    cout<<endl<<"sorted list"<<endl;
    for(i=0; i<n; i++)
    {
        cout<<" "<<list[i];
    }
    return 0;
}
