#include<iostream>
using namespace std;

class Circle{
    float radius;
    const float PI=3.14;

    public:
      static int count;

      Circle(){
        radius = 0.0;
       }
      Circle(float r){
        radius = r;
      }  
      float circleArea() const{
        return PI * radius * radius;
      }
};
int main(){
    Circle obj(7);
    return 0;
}
