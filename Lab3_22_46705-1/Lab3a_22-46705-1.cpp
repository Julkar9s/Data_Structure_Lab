#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<<"Input your Row & Column : \n";
    cin>>n>>m;

    int arr[n][m];
    cout<<"Input your Array : \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Array : \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }


    cout<<"Transpose of the Array : \n";
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

