// Program to insert an element at any position of an array
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[10],i,n,ele,pos;
    cout<<"enter size of array";
    cin>> n;
    cout<<"enter elements of array";
    for(i=0;i<n;i++)
    {
        cin>> a[i];
    }
    cout<<"enter the position you want to insert in array";
    cin>> pos;
    cout<<"enter the element";
    cin>> ele;
    for(i=n-1; i>=pos-1; i--)
    {
        a[i+1]= a[i];
    }
    a[pos-1]=ele;
    n++;
     for(i=0;i<n;i++)
    {
        cout<< a[i]<< " ";
    }
}