#include<iostream>
using namespace std;
namespace namespace1{
    int x =10;
}
namespace namespace2{
    int x=20;
}
using namespace namespace1;


int main(){
    cout<<namespace2::x;
    return 0;
}
