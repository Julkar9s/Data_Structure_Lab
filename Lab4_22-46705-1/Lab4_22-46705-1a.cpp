#include<iostream>
using namespace std;

void bubbleSort(int x[],int n){

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-i-1; j++){
            if(x[j]>x[j+1]){
                int temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            }
        }
    }
}


int main()
{
    int n;
    cin>>n;
    int a[n];

    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Unsorted Array: ";
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }

    bubbleSort(a,n);
    cout<<"Sorted Array: ";
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
