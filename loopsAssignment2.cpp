#include<iostream>
#include<math.h>

using namespace std; 

int main (){
int n ;
int a = 3;
int r= 4;
cout<<" Enter n :";
cin >> n ;
int an = a*pow(r,(n-1));
for (int i = 3; i<=an ; i= i*4){

cout<<i<<" ,";
}

    return 0 ; 
}