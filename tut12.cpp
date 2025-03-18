//pointers
#include<iostream>
using namespace std;
int main(){
int a=3;
int* b= &a;
cout<<b;
//  (value at) Dereference operator    
cout<<"The value at address b is " << *b<<endl;                                                      

    return 0;
}