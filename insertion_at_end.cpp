// Program to insert an element at the end of an array
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[10],i,ele,n;
    cout<<" enter the size of array";
    cin>> n;
    cout<< " enter the array elements";
    for(i=0; i<n ;i++){
    cin>> a[i];
    }
    cout<<" enter the element you want to insert";
    cin>> ele;
    a[n]=ele;
    n++;
    for(i=0; i<n ;i++){
    cout<< a[i]<< " ";
    }

}