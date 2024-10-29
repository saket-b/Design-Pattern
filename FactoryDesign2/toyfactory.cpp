#ifndef toyfactory
#define toyfactory

#include "toy.cpp"

class ToyFactory{

    public :

    static Toy * createFactory( int type)
    {

        Toy *obj = NULL;
        switch (type)
        {
        case 1:
            obj = new Car();
            break;
        case 2: 
            obj = new Bike();
            break;
        case 3:
            obj = new Scooter();
            break;
        
        default:
            break;
        }

        return obj;
    }

};

#endif