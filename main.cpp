#include <iostream>
using namespace std;

int main() {
   
    int sum = 0;

    
    for (int i = 1; i <= 500; i += 3) {
        
        sum += i;
    } 
    cout << "The sum of numbers from 1 to 500 with a difference of 3 is: " << sum << std::endl;

    return 0;
}
