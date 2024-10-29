
#include <iostream>
#include "vehicleFactory.hpp"
#include "car.hpp"
#include "bike.hpp"
using namespace std;

Vehicle * vehicleFactory :: getVehicle(string input)
{
    Vehicle *obj;
    if( input == "car")
        obj = new Car();

    else if( input == "bike")
        obj = new Bike();

    return obj;

}