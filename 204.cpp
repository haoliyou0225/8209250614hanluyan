#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    // 输入第一个数
    cout << "请输入第一个数: ";
    cin >> num1;

    // 输入运算符
    cout << "请输入运算符(+、-、*、/、%): ";
    cin >> op;

    // 输入第二个数
    cout << "请输入第二个数: ";
    cin >> num2;

    double result;
    bool valid = true;

    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        // 处理除数为 0 的情况
        if (num2 == 0) {
            cout << "错误：除数不能为 0！" << endl;
            valid = false;
        }
        else {
            result = num1 / num2;
        }
        break;
    case '%':
        // 取余运算要求操作数为整数
        if ((int)num1 != num1 || (int)num2 != num2) {
            cout << "错误：取余运算要求操作数为整数！" << endl;
            valid = false;
        }
        else if ((int)num2 == 0) {
            cout << "错误：除数不能为 0！" << endl;
            valid = false;
        }
        else {
            result = (int)num1 % (int)num2;
        }
        break;
    default:
        // 处理非法运算符的情况
        cout << "错误：非法运算符！" << endl;
        valid = false;
    }

    // 如果运算有效，输出结果
    if (valid) {
        cout << "结果: " << num1 << " " << op << " " << num2 << " = " << result << endl;
    }

    return 0;
}
