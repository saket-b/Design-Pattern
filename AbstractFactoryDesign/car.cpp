#ifndef Car2
#define Car2
#include<bits/stdc++.h>
using namespace std;



class Body{
    private:
    string name;
    int strength;
    public:

    Body(string n, int s):name(n), strength(s){}
    string getName(){
        return  name;
    } 
    int getStrength()
    {
        return strength;
    }

};
class SimpleBody: public Body{

    public:
    SimpleBody(): Body("SimpleBody", 30){}
};
class LuxuryBody: public Body{

    public:
    LuxuryBody(): Body("LuxuryBody", 200){}
};


class Tire{
    private:
    string name;
    int pressure;
    public:

    Tire(string n, int p):name(n), pressure(p){}
    string getName(){
        return  name;
    } 
    int getPressure()
    {
        return pressure;
    }



};

class SimpleTire: public Tire{

    public:
    SimpleTire(): Tire("SimpleTire", 40){}
};
class LuxuryTire: public Tire{

    public:
    LuxuryTire(): Tire("LuxuryTre", 60){}
};

class Car{

    protected:
    string name;
    Body *body;
    Tire *tire;

    public:
    Car(string n1){ name = n1;}
    void setTire(Tire *t){tire = t;}
    void setBody(Body *b){body = b;}
    void PrintDetails(){
        cout<<"Car :"<<name<<endl;
        cout<<"Tire: "<<tire->getName()<<" Pressure : "<< tire->getPressure()<<endl;
        cout<<"Body: "<<body->getName()<<" Stregth : "<<body->getStrength()<<endl;
    }

};

#endif