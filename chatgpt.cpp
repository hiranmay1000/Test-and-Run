#include <bits/stdc++.h>
using namespace std;

class Engine {
private:
    int horsepower;

public:
    Engine(int horsepower) : horsepower(horsepower) {}

    int getHorsepower() {
        return horsepower;
    }
};

class Body {
private:
    std::string color;

public:
    Body(std::string color) : color(color) {}

    std::string getColor() {
        return color;
    }
};

class Car : public Engine, public Body {
private:
    std::string make;
    std::string model;

public:
    Car(std::string make, std::string model, std::string color, int horsepower) : 
        Engine(horsepower), Body(color), make(make), model(model) {}

    std::string getMake() {
        return make;
    }

    std::string getModel() {
        return model;
    }
};

int main() {
    Car car("Toyota", "Camry", "Red", 180);
    std::cout << "Make: " << car.getMake() << std::endl;
    std::cout << "Model: " << car.getModel() << std::endl;
    std::cout << "Color: " << car.getColor() << std::endl;
    std::cout << "Horsepower: " << car.getHorsepower() << std::endl;
    return 0;
}