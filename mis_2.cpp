#include<iostream>

class SimpleCircle{
private:
    double radius;

public:
    SimpleCircle():radius(0.0){}

    void Set_radius(double new_radius){
        radius = new_radius;
    }

    ~SimpleCircle();

};


int main(){
    SimpleCircle MyCircle;
    MyCircle.Set_radius(5.0); //задаем радиус


    return 0;
}
