//This is the code on the bus
#include <iostream>
using namespace std; 
int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;
    cin>>a>>b>>c;

    if(a>b and b>c and a>c){
        cout<<"A is the biggest number"<<a<<endl;
        cout<<"B is the seond biggest number"<<b<<endl;
        cout<<"C is the third biggest number"<<c<<endl;
        
    }
    if(b>a && b>c && c>a){
        cout<<"B is the biggest number"<<b<<endl;
        cout<<"C is the second biggest number"<<c<<endl;
        cout<<"A is the smallest number"<<a<<endl;

    }
    
    
    return 0;
}
//I really don't want to write at all!!!!!!!!
//What I leaarn is little,so I want to have a good improve!

