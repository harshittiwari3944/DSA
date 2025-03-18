#include<iostream>
#include<math.h>
using namespace std;


int main (){

    int radius;
    double pi = 3.14;
    cout<<" Enter the radius: ";

    
    cin>> radius;
    double circumference = 2* pi* radius;
    double area = pi*radius*radius;

    cout<<" The circumference of circle is "<<circumference<<endl;
    cout<<" The area of circle is  "<<area<<endl;


    if( area > circumference){

        cout<< " area is greater by : " <<area - circumference<< endl;

    }
    else{
        cout<< " circumference is greater by :"<<circumference - area <<endl;
    }


    return 0 ;
}