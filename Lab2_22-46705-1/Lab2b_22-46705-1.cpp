#include<iostream>
using namespace std;

int main()
{
    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
   int arr2[10] = {5,6,7,8,9,10,11,12,13,14};
   int arr3[10], i, j, k=0, l, flag;

   for(i=0; i<10; i++)
   {
      for(j=0; j<10; j++)
      {
         if(arr1[i]==arr2[j])
         {
            flag = 0;
            for(l=0; l<k; l++)
            {
               if(arr1[i]==arr3[l])
                  flag++;
            }
            if(flag==0)
            {
               arr3[k] = arr1[i];
               k++;
            }
         }
      }
   }

   for(i=0; i<k; i++)
      cout<<arr3[i]<<" ";

   cout<<endl;
   return 0;



}
