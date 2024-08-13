#include <iostream>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    int total = 0; // Tổng số thùng hàng trong kho
    int minb = 100; // Số thùng tối thiểu cần khiêng (khởi tạo với giá trị lớn)

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            int boxes;
            cin >> boxes;
            total += boxes;
            minb = min(minb, boxes);
        }
    }

    // Số thùng tối thiểu cần khiêng qua nhà kho kế bên
    cout << total - minb * H * W << endl;

    return 0;
}
