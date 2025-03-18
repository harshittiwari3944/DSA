#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int kalgo(const vector<int>&arr){
    int current_max= arr[0];
    int global_max= arr[0];


    for (size_t i =1 ; i <arr.size();i++){
        current_max = max(arr[i],current_max + arr[i]);
        global_max = max(global_max,current_max);
    }
    return global_max;
}

int main(){
    vector<int>array= {4,6,9,10,-1,5};


    int result = kalgo(array);
    cout<<" the maximum sub array is:"<<result<<endl;

    return 0 ;
}