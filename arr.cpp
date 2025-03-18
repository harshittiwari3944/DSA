#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,3,4};
 //  cout<<sizeof(arr)<<endl;
   
   int size=sizeof(arr)/sizeof(arr[0]);

   //traversing array
   for (int i=0;i<size;i++){
    cout<<(arr[i])<<endl;
   }
//for each loop
for (int ele: arr){
    cout<<ele<<endl;
}


    return 0;
}