#include<bits/stdc++.h>
#include "vehicle.hpp"
#include "car.hpp"
#include "bike.hpp"
#include "vehicleFactory.hpp"

using namespace std;

int main()
{
   
    string vehicleType;
    cin>>vehicleType;
    Vehicle *obj = vehicleFactory::getVehicle(vehicleType);

    obj->createVehicle();
    
    
    

    
}
