//
// Created by 刘超智 on 2021/1/12.
//
#include <iostream>
#include <cmath>
#include <climits>

#define ZERO 0

using namespace std;

void xxx(int xx);

int main() {
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    int intLength = INT_MAX;
    cout << intLength << endl;
    cout << sizeof(int) << endl;
    cout << "xxx" << endl;
    int aa;
    cin >> aa;
    cout << aa + 1;
    cout << endl;
    double aDouble = sqrt(1);
    cout << aDouble;
    xxx(1);

    //十进制
    int simple = 10;
    //0开头 8进制
    int unix = 042;
    //0X或0x 16进制
    int hex1 = 0X11;
    int hex2 = 0x11;


    // dec oct hex
    //cout 默认输出10进制， 可以用 dec oct hex 切换输出的进制 分别对应十进制 八进制 十六进制
    int xxxx = 54;

    cout << "dec " << xxxx << endl;
    cout << oct;
    cout << "oct " << xxxx << endl;
    cout << hex;
    cout << "hex " << xxxx << endl;
    cout << xxxx << endl;

    cout << dec;
    cout << xxxx << endl;

    // cout 会根据输出的数据的类型来推断输出 字符还是数值
    // char 类型本质上存储的ascII 码的数值  ， 打印字符实际是 cout 的功能
    //cout.put（）用来打印字符常量
    //在c++ 2.0版本之前  字符常量被存储为int 数值 因此 cout<< 只能打印 常量对应的 ascII数值，
    // 在c++ 2.0后 字符常量被存储为char 因此正确打印
    char ch = 'M';
    int i = ch;

    cout << ch << endl;
    cout << i << endl;

    cout.put(i);
    cout << endl;

    cout.put('x');
    cout << endl;
    cout << 'x';


    //转义字符...
    cout << '\n' << endl;

    cout << '\'' << endl;

    //unicode 字符集 \u \U开头
    cout << " \u00E2";


    // 有符号char 和 unsigned char 可表示数值范围不同 -128-127 , 0-255
    char foo;
    unsigned char fooo;
    cout << endl;
    //wchar_t 有些字符集无法用一个8为字节表示  例如日本汉字 ,L前缀表示 为一个宽字符常量
    //wchar_t无法使用cout  需要wcout和wcin
    wchar_t bob = L'X';
    wcout << bob << endl;
    return 0;
}

void xxx(int aa) {
    cout << "test 函数";
    cout << endl;
    cout << aa << endl;
}