#include<iostream>

using namespace std;

int main(){
    int p=200;
    int &b=p;
    std::cout<<++p<<b;
    return 0;
}
// advantage of pass by reference a single function can return value multiple times
