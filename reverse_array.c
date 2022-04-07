#include <iostream>

using namespace std;

int main()
 {
     int arr[30],size,i,start,end;
     cout<<"enter the size of array";
     cin>>size;
     cout<<"enter the elements of array";
     for(i=0;i<size;i++)
     {
         cin>>arr[i];
     }
     start=0;
     end=size-1;
     for(i=0;i<size;i++)
     {
         if(start<=end)
         {
            swap(arr[start],arr[end]);
            start++;
            end--;
     }
     cout<<arr[i];
     }
     return 0;
}
