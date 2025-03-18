#include<iostream>
using namespace std ;
int main (){
      

    int age ;

    int valid_age = 18;
     cout<<"enter your age ";
     cin >> age; 

     if(age > valid_age ){

        cout<<" you are already a voter ";

     }

     else if (age == valid_age){

        cout<<"Now you become a voter";
     }

     else{
        cout<<" Not allowed to give vote";
     }


    return 0;
}