#include <iostream>

using namespace std;

int main(){
   int arr[5],count;

   cout<<"Array insertion operation"<<endl;
   for (int i = 0; i < count; i++)
   {
      arr[i]=i+1;
      cout << "array items" << arr[i]<<endl;
   }
   cout<<arr[5];
   cout<<"Array deletion operation"<<endl;
   int arr_d[]={1,2,4},n=3,i;
   printf("original array items are: \n");
   for (i=0;i<n;i++)
   {
    cout<<"array item"<<arr_d[i]<<endl;
   }

   return 0;
}