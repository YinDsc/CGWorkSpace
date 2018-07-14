#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int pipipi;
    cin>>pipipi;
    while(pipipi>=10)
      {
          pipipi-=2;
        cout<<"pipipipipipipipipipip"<<endl;
      }
    return 0;
}
//这里使用了While循环，即当满足While括号里面的条件时，则执行大括号里面的循环体，否则跳出大括号
//关于*****-=2之类的问题，则是等价于*****=*****-2
//如果是--或者++,那就是-1与+1。