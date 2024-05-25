#include<iostream>

using namespace std;

class SimpleCircle{
private:
    double radius;

public:
    SimpleCircle():radius(0.0){}
    SimpleCircle(double p_radius):radius(p_radius){} //конструктор с параметром

    /*метод для задания значения радиуса*/
    void Set_radius(double new_radius){
        radius = new_radius;
    }

    /*метод для получения значения радиуса*/
    double Get_radius(){
        return radius;
    }

    ~SimpleCircle();

};

SimpleCircle::~SimpleCircle(){};


int main(){
    SimpleCircle MyCircle;
    SimpleCircle MyCircle2(11.5);//задаем радиус

    cout << "Radius default: " << MyCircle.Get_radius() << endl;
    cout << "Parametr radius: " << MyCircle2.Get_radius() << endl;


    return 0;
}
