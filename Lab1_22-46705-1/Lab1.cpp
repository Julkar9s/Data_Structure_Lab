#include<iostream>
using namespace std;



int main()
{
    int n = 13;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

}
