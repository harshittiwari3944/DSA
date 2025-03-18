#include<iostream>
using namespace std; 


int main (){

int cost_price;
int selling_price;

cout<<" Enter the cost price ";
cin >> cost_price;

cout<< " Enter the selling price ";
cin>> selling_price;

if (cost_price<selling_price){
    cout<<" profit of :" << selling_price- cost_price;
}

else if (cost_price> selling_price)
{
    cout<<" loss of : "<<cost_price - selling_price;

}
else {
    cout<<"none " << cost_price - selling_price;

}




    return 0;
}