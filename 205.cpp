#include <iostream>
using namespace std;

int main() {
    int letters = 0, spaces = 0, digits = 0, others = 0;
    char c;

    cout << "请输入一行字符：" << endl;
    // 循环读取字符，直到遇到换行符'\n'
    while ((c = getchar()) != '\n') {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters++; // 英文字母计数
        }
        else if (c == ' ') {
            spaces++; // 空格计数
        }
        else if (c >= '0' && c <= '9') {
            digits++; // 数字计数
        }
        else {
            others++; // 其他字符计数
        }
    }

    // 输出统计结果
    cout << "英文字母个数：" << letters << endl;
    cout << "空格个数：" << spaces << endl;
    cout << "数字字符个数：" << digits << endl;
    cout << "其他字符个数：" << others << endl;

    return 0;
}
