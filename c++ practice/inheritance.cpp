#include <iostream>

class Vehicle
{
protected:
    std::string type;
    std::string color;
    int model;

public:
    // Default constructor
    Vehicle() : type("Bmw"), color("orange"), model(2020)
    {
        std::cout << "Based constructor of vehicle called" << std::endl;
    }

    // parametrized constructor
    Vehicle(std::string t, std::string c, int m) : type(t), color(c), model(m)
    {
    }

    void show()
    {
        std::cout << "type of the vehicle : " << type << std::endl
                  << "Color : " << color << std::endl
                  << "Model : " << model << std::endl;
    }
};

/*is-a Relationship */

/*
Type of inheritance :-
  -single
  -Multilevel inheritance
  -Multible inheritance
*/

class Car : public Vehicle
{
private:
    int no_of_tires;

public:
    // Default constructor
    Car() : no_of_tires(4)
    {
        std::cout << "drived constructor called" << std::endl;
    }

    // parameterized constructor.
    Car(std::string t, std::string c, int m, int n) : Vehicle(t, c, m), no_of_tires(n)
    {
    }

    void show()
    {

        Vehicle::show(); // to call all the details of the mini cooper car
        std::cout << "Number of tires : " << no_of_tires << std::endl;
    }
};
int main()
{
    Vehicle truck;
    Car car;
    car.show();

    return 0;
}