#include<iostream>
using namespace std; 

int main(){
    int n;
    cout << "Enter the digit: ";
    cin >> n;
    
    int sum = 0;
    int digit = 0;
    
    while (n > 0) {
        digit = n % 10;
        if (digit % 2 == 0) {  
            sum += digit;
        }
        n = n / 10;
    }
    
    cout << "Sum of even digits: " << sum;

    return 0;
}
