// program to delete an element from the end
#include<iostream>
#include<stdlib.h>
using namespace std;
void delete_from_end(int arr[],int &n)
{  n--;
}
int main(){
    int arr[10],n;
    cout<<"enter size of array";
    cin>> n;
    cout<<"enter array elements";
    for (int i=0;i<n;i++){
      cin >>arr[i];
      cout<< arr[i]<< " ";
    }
    cout<< endl;
    delete_from_end(arr, n);
    cout<<"array after deletion "<< endl;
    for (int i=0;i<n;i++){
      cout<< arr[i]<< " ";
    }
}