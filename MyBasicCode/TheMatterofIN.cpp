//这一个小程序是用来解释说明关于“输入”问题的
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]){
cout<<"Please enter your First name"<<endl;
string first_name;     //定义这个玩意儿是一个字符串常量
cin>>first_name;      //读取字符串到这个玩意儿中
cout<<"Hello,"<<first_name<<""<<endl;

return 0;

}