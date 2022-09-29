#include<iostream>
using namespace std;

int main()
{
    int a[10] = {1,2,3,3,3,4,4,5,6,6};
    int x,count=0;
    cin>>x;
    for(int i = 0; i<10; i++){
        if(x == a[i]) count++;
    }

    cout<<count;
}
