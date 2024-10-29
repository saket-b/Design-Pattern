#ifndef vehicleFactor_hpp
#define vehicleFactory_hpp
#include<iostream>
#include "vehicle.hpp"

using namespace std;

class vehicleFactory{

    public :
    static Vehicle * getVehicle (string inp) ;
};

#endif