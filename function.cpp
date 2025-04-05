//function is ablock of code which perform specific task .
//function is used for make code reusble and readable and can be used multiple time just by calling function name 
#include<iostream>
using namespace std;
void print(string name){
    for (int i= 1; i<5;i++){
        cout<<name<<endl;
    }
}
int main (){
//for (int i = 0; i<=5;i++){
  /*  cout<<" harshit tiwari "<<endl;
}

for (int i =0 ; i<5;i++){
    cout<<" ramesh ";*/

    print("harshit");
    print ("sonu");

    return 0;
}