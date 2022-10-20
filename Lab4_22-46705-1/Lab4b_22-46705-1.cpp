#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int target){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(target == arr[mid]){ return mid;}
        else if(target < arr[mid]) {high = mid-1;}
        else {low = mid +1;}
    }
    return -1;
}


int main()
{
    int arr[] = { 2, 5, 6,7, 8, 9, 10 };
    int target;
    cin>>target;

    int n = sizeof(arr)/sizeof(arr[0]);
    int index = binarySearch(arr, n, target);
    if(index != -1)
        cout<<"The element is found in : "<<index<<endl;
    else
        cout<<"The element didn't found in the array"<<endl;
}
