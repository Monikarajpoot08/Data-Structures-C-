// program to delete the first element of array
#include<iostream>
#include<stdlib.h>
using namespace std;
void delete_from_begin(int arr[], int &n)
{ for (int i=0;i<n-1;i++)
    { arr[i]=arr[i+1];
    }
    n--;

}
int main()
{
    int arr[10], n;
    cout<<"enter size of array";
    cin>> n;
    cout<<" enter array elements ";
    for (int i=0;i<n;i++){
      cin >>arr[i];
    }
    delete_from_begin(arr ,n);
    cout<<"size of array is now: "<< n<<endl;
    for (int i=0;i<n;i++){
      cout<< arr[i]<< " ";
    }
  
}