//bubbble sort
//(n-1 loop  iteration ) time complexity(on^2)
#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            swap(arr[j],arr[j+1]);
        }
    }
}
 void printArray(int arr[],int n){
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    

        }
}
int main (){
    int n=5;
int arr[]={4,1,5,2,3};


return 0;
}