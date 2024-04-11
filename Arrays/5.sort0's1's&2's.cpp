#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   int count0 = 0, count1 = 0, count2 = 0;
   for(int i = 0; i < n; i++){
      if(arr[i] == 0) count0++;
      else if(arr[i] == 1) count1++;
      else count2++;
   }
   for(int i = 0; i < count0; i++){
      arr[i] = 0;
   }
   for(int i = count0; i < count0+count1; i++){
      arr[i] = 1;
   }
   for(int i = count0+count1; i < n; i++){
      arr[i] = 2;
   }
}



void sort012(int *arr, int n)
{
   //   Write your code here
   int i = 0;
   int j = 0;
   int k = n-1;
   while(j <= k){
      if(arr[j] == 0){
         swap(arr[i], arr[j]);
         i++;
         j++;
      }else if(arr[j] == 1){
         j++;
      }else{
         swap(arr[j], arr[k]);
         k--;
      }


   }
}