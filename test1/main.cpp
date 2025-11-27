#include <iostream>
using namespace std;

// 華氏轉攝氏
int main() {
    double fahrenheit;
    double celsius;

    cout << "請輸入華氏溫度:\n";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    cout << "攝氏溫度是: " << celsius << endl;

    return 0;
}
