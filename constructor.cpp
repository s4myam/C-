#include<iostream>
using namespace std;
class Distance{
int feet; int inches;
public:
Distance(){
    feet=0;inches=0;
}
Distance(int x,int y){
    feet=x;inches=y;
}

void shortDistance(){
    cout<<"feet:"<<feet;
    cout<<"inches:"<<inches<<endl;
}
void addDistance(Distance d1, Distance d2){
    feet=d1.feet+d2.feet;
    inches=d1.inches+d2.inches;
}
};
int main(){
    Distance d1(3,3),d3,d4;
    d1.shortDistance();
    

}