#include<bits/stdc++.h>
void linear_search();
using namespace std;
int main()
{
    while(true)
    {


        cout<<"Choose your algorithm: "<<endl;
        cout<<"1 for binary search"<<"2 for linear Search";
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            break;
        case 2:
            linear_search();
            break;
        default:
            cout<<" ";
        }
    }
    return 0;
}
void linear_search()
{
    //code
}
