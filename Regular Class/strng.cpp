#include<iostream>
using namespace std;
int main(){
 string name;
cout<<"enter ur name:";
   getline(cin,name,'^');
   cout<<name;
   return 0;
}