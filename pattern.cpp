#include<iostream>
using namespace std;

    void print(int n){
        int i = 0 ; 
        int j = 0 ;

          while(i<n ){
            while(j<=i){
            cout<<"*";
                j++;
            }
            j = 0 ; 

            i++;

            cout<< endl; 
        }
     }
int main (){
    int n ;
    cout<<" enter the value of n :";
    cin >> n ;
    print(n);

    return 0 ; 
}