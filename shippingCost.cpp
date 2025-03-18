#include<iostream>
using namespace std; 

int main (){
    double weight;
    cout<<" Enter the weight : ";
    cin>> weight;

    double shipping_Cost;

    if(weight<= 5){
        shipping_Cost=0.00;
    }
    else if (weight<=20){
        shipping_Cost = 10.00;

    }
    else{
        shipping_Cost = 30.00;
    }


    cout<<" The shipping cost of your delivery is "<<shipping_Cost<<endl;


    return 0; 
}