#include<iostream>
using namespace std;

int main()
{
    int count;
    int size;
    cin>>size;
    int arr[size],arr2[100];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
        arr2[i] = -1;
    }

    for(int i = 0; i<size; i++){
            count = 1;
        for(int j = i+1; j<size; j++){
            if(arr[i] == arr[j]){
                count++;
                arr2[j] = 0;
            }
        }
        if(arr2[i] != 0) arr2[i] = count;
    }

    for(int i = 0; i<size;i++){
        if(arr2[i] != 0)
            cout<<arr[i]<<" occurs "<<arr2[i]<<" times \n";
    }

}
