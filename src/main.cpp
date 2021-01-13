//
// Created by 刘超智 on 2021/1/12.
//
#include <iostream>
#include <cmath>
#include <climits>
#define ZERO 0

using namespace std;

void xxx(int xx);

int main(){
    short sam=SHRT_MAX;
    unsigned short sue=sam;

    int intLength=INT_MAX;
    cout<<intLength<<endl;
    cout<< sizeof(int)<<endl;
    cout<<"xxx"<<endl;
    int aa;
    cin>>aa;
    cout<< aa+1;
    cout<<endl;
    double aDouble = sqrt(1);
    cout<<aDouble;
    xxx(1);

    //十进制
    int simple=10;
    //0开头 8进制
    int unix=042;
    //0X或0x 16进制
    int hex1=0X11;
    int hex2=0x11;


    // dec oct hex
    //cout 默认输出10进制， 可以用 dec oct hex 切换输出的进制 分别对应十进制 八进制 十六进制
    int xxxx=54;

    cout<<"dec "<<xxxx<<endl;
    cout<<oct;
    cout<<"oct "<<xxxx<<endl;
    cout<<hex;
    cout<<"hex "<<xxxx<<endl;
    cout<<xxxx<<endl;

    cout<<dec;
    cout<<xxxx<<endl;

    return 0;
}

void xxx(int aa){
    cout<<"test 函数";
    cout<<endl;
    cout<<aa<<endl;
}