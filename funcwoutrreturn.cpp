#include<iostream>
using namespace std;
 
int area(int,int);

int main(){
    int length,breadth;
    cout<<"Enter length and breadth :";
cin>>length>>breadth;
cout<<"Area is:"<< area(length, breadth);
return 0;
}
int area(int length,int breadth){
    return length*breadth;
}