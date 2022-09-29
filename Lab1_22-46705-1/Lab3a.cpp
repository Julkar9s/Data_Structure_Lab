#include<iostream>
using namespace std;

void func(int x,int y)
{
    int arr[]={1,2,3,4,21,23,25,27,29};
    cout<<"Odd:";

    for(int i=0;i<9;i++){
        for(int j=x;j<=y;j++){
            if(arr[i]==j&&j%2!=0) cout<<j<<" ";
        }
    }

}
int main()
{

    int x,y;
    cin>>x>>y;
    func(x,y);
}
