<<<<<<< HEAD
#include <iostream>
using namespace std;

void print_hourglass(int rows) {
    if (rows <= 0) {
        return;
    }

    // Top half of the hourglass
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";  // Print leading spaces
        }
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            cout << "*";  // Print stars
        }
        cout << endl;
    }

    // Bottom half of the hourglass
    for (int i = rows - 2; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";  // Print leading spaces
        }
        for (int j = 0; j < 2 * (rows - i) - 1; j++) {
            cout << "*";  // Print stars
        }
        cout << endl;
    }
}

int main() {
    int rows = 5;  // Adjust this value for a larger or smaller hourglass
    print_hourglass(rows);

    return 0;
}
=======
#include<iostream >
using namespace std; 
void print_dream(int rows){
if (rows<=0){
return ;
for (int  i = 0 ; i<2*rows-1;i++){
if (j<i){
cout<<" " ;
}
else{
cout<<"*";
}
}
}
 else{
        for (int j = 0 ; j<1+1; j ++ ){
 if ( j <2*rows- i-2}
                 cout<<"  ";
 }
else{
cout<<" *";
}
}
}
cout<<endl;
}
cout<<endl;
}

int main (){
  int rows = 5;; 

  print_dream(row)
  

return 0 ;
}
>>>>>>> bdc99ce729b4ebe8bf635eb998366211fc016017
