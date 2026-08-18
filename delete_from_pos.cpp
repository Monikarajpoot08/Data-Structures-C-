// program to delete an element from any pos in an array
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int arr[10],n,ele,pos,item;
    cout<<"enter size of array";
    cin>> n;
    cout<<"enter the pos";
    cin>> pos;
    if (pos<0 || pos>n)
    {   cout<< " invalid position";  
    }
    else{
        cout<<"enter elements of array";
        for (int i=0; i<n; i++)
         {
          cin>> arr[i];
         }
    for (int i=pos-1;i< n-1;i++)
          { 
            arr[i]=arr[i+1];
          }
        n--;
    cout<< " array elements after deletion";
       for (int i=0; i<n; i++)
    {
        cout<< arr[i]<< " ";
    }
    }
}