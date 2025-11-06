#include <iostream>
using namespace std;

int main() {
    int stack[5];  // 宣告堆疊陣列
    int top = -1;  // 指向堆疊頂端的指標

    // ---- 推入(push)元素 ----
    top++;
    stack[top] = 10;
    top++;
    stack[top] = 20;
    top++;
    stack[top] = 30;

    // ---- 顯示目前堆疊內容 ----
    cout << "目前堆疊內容: " << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl << endl;

    // ---- 彈出(pop)元素 ----
    if (top >= 0) {
        cout << "彈出元素: " << stack[top] << endl;
        top--;
    } else {
        cout << "堆疊是空的，不能彈出！" << endl;
    }

    // ---- 顯示彈出後堆疊內容 ----
    cout << endl << "彈出後堆疊內容: " << endl;
    for (int i = 0; i <= top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;

    return 0;
}
