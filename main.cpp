#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int N = 5;
    int arr[N];

    srand(time(NULL));

    cout << "Random numbers: ";
    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;  // Random number between 0 and 99
        cout << arr[i] << " ";
    }
    cout << endl;

    // Bubble sort
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "After sorting: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
