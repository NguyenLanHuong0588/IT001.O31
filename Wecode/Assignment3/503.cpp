#include <iostream>
using namespace std;

int largest_input(){
    int n;
    cin >> n;
    if (n == 0) return 0; // Nếu người dùng nhập 0 ngay từ đầu, trả về 0
    int next = largest_input(); // Đệ quy để nhập các số tiếp theo
    return max(n, next); // So sánh first và next để tìm số lớn nhất
}

int main(){
	cout << largest_input();
}
