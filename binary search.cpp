#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, key, i, loc=0;
    cout<<"How many numbers you want: ";
    cin>>n;
    int l[n];
    cout<<"Enter the numbers in sorted order (eg. 1,2,3,4,.... or 8,7,6,5....) "<<endl;
    for(i=0; i<n; i++)
    {
        printf("Index[%d", i);
        cout<<"]= ";
        cin>>l[i];
    }
    cout<<"Enter the number to be searched: ";
    cin>>key;
    int beg=0, End=n-1, mid;
    mid=(beg+End)/2;

    while(beg<=End)
    {
        if(key<l[mid])
        {
            End=mid-1;
        }
        else if(key==l[mid])
        {
            loc=1;
            printf("Item found at index %d", mid);
            break;
        }
        else if(key>l[mid])
        {
            beg=mid+1;
        }
        mid=(beg+End)/2;
    }

    if(loc==0)
    {
        cout<<"Item not found"<<endl;
    }
    return 0;
}


