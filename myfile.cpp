#include <iostream>
#include <cmath>
int main(){
    using namespace std;
    struct Point{
        Point(int x,int y,int z)
        :x(x),y(y),z(z)
        {}
        int x;
        int y;
        int z;
    };

    Point a(1,2,3);
    Point b(3,4,5);
    float k=sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2)+pow(a.z-b.z,2));
    cout<<"The distance between the points A and B is: "<<k<<endl;

}