#include<iostream>
using namespace std;

int main (){
    int n;
    cout << "Enter the number n: ";
    cin >> n;

    
    int reverse = 0, original = n;
    while (n > 0) {
        int r = n % 10;
        reverse = reverse * 10 + r;
        n = n / 10;
    }

    
    int sum = original + reverse;
    cout << "Sum of the number and its reverse is: " << sum;

    return 0;
}