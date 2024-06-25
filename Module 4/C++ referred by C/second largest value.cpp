//Write a C++ Program To Print Second Largest Value Of Array
#include<iostream>

using namespace std;
int main()
{
   int i, arr[10], large, l;
   cout<<"Enter 10 Array Elements: ";
   for(i=0; i<10; i++)
      cin>>arr[i];
   large = arr[0];
   for(i=0; i<10; i++)
   {
      if(large<arr[i])
         large = arr[i];
   }
   l = arr[0];
   for(i=0; i<10; i++)
   {
      if(l<arr[i])
      {
         if(arr[i]!=large)
            l = arr[i];
      }
   }
   cout<<"\nSecond Largest Element = "<<l;
   cout<<endl;
   return 0;
}
