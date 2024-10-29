#include "carFactory.cpp"

//#define SIMPLECAR 1
#define LUXURYCAR 2
int main()
{
    #ifdef SIMPLECAR
        CarFactory *factory = new SimpleCarFactory();
    #elif LUXURYCAR
        CarFactory *factory = new LuxuryCarFactory();

    #endif 

    Car *car = factory->buildWholeTree();
    car->PrintDetails();
}