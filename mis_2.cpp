#include<iostream>

class SimpleCircle{
private:
    double radius;

public:
    SimpleCircle():radius(5.0){}

    void Set_radius(double new_radius){
        radius = new_radius;
    }

    ~SimpleCircle();

};


int main(){
    
    return 0;
}
