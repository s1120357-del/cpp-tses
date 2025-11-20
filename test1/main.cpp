#include <iostream>
using namespace std;

int accumulate(int n);

int main() {
    int number = 100;  // Set the upper limit of the sum
    cout << "從1加到" << number << "總合為: " << accumulate(number);  // Display the result
    return 0;
}

// Recursive function to calculate the sum
int accumulate(int n) {
    if (n == 1) {
        return 1;  // Base case: return 1 when n reaches 1
    }
    return n + accumulate(n - 1);  // Recursive case: sum up the numbers
}
