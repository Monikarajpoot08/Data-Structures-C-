// Program to insert an element at the beginning of an array
#include <iostream> 
#include<stdlib.h>
using namespace std;
int main()
{
    int a[10],n,i,ele;
    cout<<"enter size of array";
    cin>> n;
    cout<<"enter elements of array";
    for(i=0; i<n; i++)
    {
     cin>>a[i];
    }
    cout<<"enterthe element you want to insert";
    cin>> ele;
    for (i=n-1; i>=0; i--){
        a[i+1]=a[i];
    }
    a[0]=ele;
    n++;
    
    for(i=0; i<n; i++)
    {
     cout<<  a[i]<< " ";
    }

}