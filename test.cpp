#include <iostream>
using namespace std;

struct SLNode{
    int data;
    SLNode* next;
};//Node definition

int main(){
    int a, b;
    cin>>a>>b;
    cout<<a+b<<endl;
    return 0;
}