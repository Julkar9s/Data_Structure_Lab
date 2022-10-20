#include<iostream>
using namespace std;

int main()
{
    int n,target;
    cout<<"Input the Size of the Array : ";
    cin>>n;

    int a[n];
    cout<<"Take Array Input : ";
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Input the element you want to find : ";
    cin>>target;
    for(int i = 0; i<n; i++){
        if(a[i] == target)
            cout<<target<<" is found in index "<<i<<endl;
    }
}
