#include<iostream>
using namespace std;

int main()
{
    int i,j;
    int arr1[5] = {2,3,4,5,6};
    int arr2[6] = {1,3,4,7,8,9};
    int arr3[11];
    for(int i = 0; i<5; i++){
        arr3[i] = arr1[i];
    }

    for(int i = 0; i<6; i++){
        arr3[i] = arr2[i];
    }


    for( int i = 0; i<5; i++){
        if(arr1[i] == arr2[i])
            cout<<arr3[i]<<" ";
    }



}
