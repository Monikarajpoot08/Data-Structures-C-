// Program to insert an element at any position of an array
#include<iostream>
#include<stdlib.h>
using namespace std;
void insert_at_pos(int arr[], int &n, int ele, int pos)
{ 
     for(int i=n-1; i>=pos-1 ;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]= ele;
    n++;

}
int main()
{
    int arr[10],n,ele,pos;
    cout<<"enter size of array";
    cin>> n;
    cout<<"enter the element you want to insert";
    cin>> ele;
    cout<<"enter the pos ";
    cin>> pos;
    
    if(pos >= 1 && pos <= n+1)
    {    cout<<"enter elements of array";
         for(int i=0; i<n ;i++)
         {cin>> arr[i];
         }
    
        insert_at_pos(arr, n, ele, pos);

        cout << "Array after insertion: ";
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "Invalid position";
    }
  
}