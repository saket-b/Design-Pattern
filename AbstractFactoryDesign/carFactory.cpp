#ifndef CarFactory2
#define CarFactory2
#include<iostream>
#include "car.cpp"  // Ensure this includes proper header guards

using namespace std;

class CarFactory {
    protected:
        virtual Tire *buildTire() = 0;
        virtual Body *buildBody() = 0;

    public:
        virtual Car *buildWholeTree() = 0;
        virtual ~CarFactory() {}  // Virtual destructor to avoid memory leaks
};

class SimpleCarFactory : public CarFactory {
    public:
        Tire *buildTire() {
            return new SimpleTire();
        }

        Body *buildBody() {
            return new SimpleBody();
        }

        Car *buildWholeTree() {
            Car *obj = new Car("SimpleCar");
            obj->setTire(buildTire());  // Corrected
            obj->setBody(buildBody());  // Corrected
            return obj;
        }
};

class LuxuryCarFactory : public CarFactory {
    public:
        Tire *buildTire() {  // Corrected typo
            return new LuxuryTire();
        }

        Body *buildBody() {
            return new LuxuryBody();
        }

        Car *buildWholeTree() {  // Corrected method name
            Car *obj = new Car("LuxuryCar");
            obj->setTire(buildTire());  // Corrected
            obj->setBody(buildBody());  // Corrected
            return obj;
        }
};

#endif


