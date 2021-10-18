#include<bits/stdc++.h>
void linear_search();
void binary_search();
void bubble_sort();
void insertion_sort();
using namespace std;
int main()
{
    int choice;
    cout<<"...............Menu.............."<<endl;
    cout<<endl<<"Press 1 for Linear Search"<<endl<<"Press 2 for Binary Search"<<endl;
    cout<<"Press 3 for Bubble Sort"<<endl<<"Press 4 for Insertion Sort"<<endl<<"Press 5 for Selection Sort"<<endl;
    cout<<endl<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
    case 1:
        linear_search();
        break;
    case 2:
        binary_search();
        break;
    case 3:
        bubble_sort();
        break;
    case 4:
        insertion_sort();
        break;
    case 5:
        break;
    default:
        cout<<"Please choose the correct option."<<endl;
    }
    cout<<endl<<"\n  Are you want to go home page?"<<endl;
    cout<<"  1 Yes"<<endl;
    cout<<"  2 No"<<endl;
    cout<<"  Please enter your choice: ";
    cin>>choice;

    if(choice==1)
    {
        system("cls");
        main();
    }

}

void linear_search()
{
    cout<<endl<<" Thank you for choosing Linear Search."<<endl<<endl;
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
            cout<<" Item found"<<endl;
            loc=1;
            break;
        }
    }
    if(loc==0)
    {
        cout<<" Item not found"<<endl;
    }
}

void binary_search()
{
    cout<<endl<<" Thank you for choosing Binary Search."<<endl<<endl;
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
    mid=(beg-End)/2;

    while(beg<=End)
    {
        if(key<l[mid])
        {
            End=mid-1;
        }
        else if(key==l[mid])
        {
            loc=1;
            printf("Item found at index %d", mid+1);
            break;
        }
        else if(key>l[mid])
        {
            beg=mid+1;
        }
        mid=(beg-End)/2;
    }

    if(loc==0)
    {
        cout<<"Item not found"<<endl;
    }
}

void bubble_sort()
{
    cout<<endl<<" Thank you for choosing Bubble sort."<<endl<<endl;
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
}

void insertion_sort()
{
    cout<<endl<<" Thank you for choosing Insertion sort."<<endl<<endl;
    int n, i, j, temp, choise;
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
    cout<<endl<< "Press 1 for Ascending order sorting" << endl << "Press 2 for Descending order sorting"<<endl;
    cout << endl << "Enter your choice: ";
    cin >> choise;
    if(choise == 1)
    {
        cout << "You have chosen ascending order sorting." << endl << "sorted list: ";
        for(i = 1; i <= n; i++)
            cout << a[i] << " ";
    }
    else if(choise == 2)
    {
        cout << "You have chosen descending order sorting." << endl << "sorted list: ";
        for(i = n ; i > 0; i--)
            cout << a[i] << " ";
    }
    else
    {
        cout << "Wrong choice";
    }
}


