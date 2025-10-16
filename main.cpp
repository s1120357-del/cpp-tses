#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 50; i++) {
        if (i % 7 == 0) {
            cout << i << " ";
            sum += i; // 若你想計算總和
        }
    }
    cout << "\n總和為: " << sum << endl;
    return 0;
}
