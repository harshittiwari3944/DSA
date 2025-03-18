#include<iostream>
using namespace std;
int ModifyValue(int x){
    x=1;
}
int main(){
int num=53;
cout<<"before function call "<<num<<endl;
ModifyValue(num);
cout<<"After function call "<<num<<endl;
 return 0;
}