#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    unsigned int testUint = 65534; // 0xfffe
    cout << "output in unsigned int type:" << testUint << endl;
    cout << "output in char type:" << static_cast<char>(testUint) << endl;
    cout << "output in short type:" << static_cast<short>(testUint) << endl;
    cout << "output in int type:" << static_cast<int>(testUint) << endl;
    cout << "output in double type:" << static_cast<double>(testUint) << endl;
    cout << "output in double type:" << setprecision(4) << static_cast<double>(testUint) << endl;
    cout << "output in Hex unsigned int type:" << hex << testUint << endl;
    // 按八进制输出 testUint
    cout << "output in Oct unsigned int type:" << oct << testUint << endl;
    // 将一个实数转换成 int 并输出
    double realNum = 3.14159;
    cout << "real number " << realNum << " cast to int: " << static_cast<int>(realNum) << endl;
    system("pause");
    return 0;
}