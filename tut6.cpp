//system header files

#include <iostream>
//user defined header file
//#include "this .h"
//for referncece cpp reference in google
using namespace std;
int main (){
    cout<<"this is a system generated code"<<endl;
    //Airthmetic Operator
    int a=4, b=2;
    cout<< "the value of a+b is " <<a+b <<endl;
     cout<< "the value of a-b is " <<a-b <<endl;
      cout<< "the value of a*b is " <<a*b <<endl;
       cout<< "the value of a/b is " <<a/b <<endl;
        cout<< "the value of a++ is " <<a++ <<endl;
        cout<< endl;
    //Assignment operators: use to assign value to variable
    //int a=3,b=6;
    //char d ='d'
    //these are assignment operators


    //comparison operators   
    cout<< "the value of a==b is " <<(a==b) <<endl;
     cout<< "the value of a!=b is " <<(a!=b) <<endl;
      cout<< "the value of a>=b is " <<(a>=b )<<endl;
       cout<< "the value of a<=b is " <<(a<=b) <<endl;
        cout<< "the value of a<b is " <<(a<b)<<endl;
        cout<< endl;
        //logical operators
        cout<<"the value of this logical and operator((a==b) && (a<b)) is"<<((a==b) && (a<b));
        

    return 0;
}