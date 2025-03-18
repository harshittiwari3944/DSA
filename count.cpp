#include<iostream>
using namespace std;


int count_num(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n = n / 10;
    }
    return count;
}

int main() {
   

    
    int num_to_count = 56789;
    cout << "The number of digits in " << num_to_count << " is: " << count_num(num_to_count) << endl;

    return 0; 
}
