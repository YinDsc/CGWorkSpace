//用来理解输入操作对类型的敏感度
#include <iostream>
using namespace std; 
int main(int argc, char const *argv[])
{
    cout<<"Please enter your name and age"<<endl;
    string Yname;
    int Yage;
    cin>>Yname;
    cin>>Yage;
    cout<<"Hello,"<<Yname<<"(age"<<Yage<<")"<<endl;
    
    return 0;
}
