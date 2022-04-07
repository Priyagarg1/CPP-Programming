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
     for(i=0;i<size;i+=2)
     {
         if(i+1<size)
         {
            swap(arr[i],arr[i+1]);
     }
     }
     for(i=0;i<size;i++)
     {
     cout<<arr[i];
     }
     return 0;
}
