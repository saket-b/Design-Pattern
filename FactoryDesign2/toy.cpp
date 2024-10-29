#ifndef object
#include<bits/stdc++.h>

using namespace std;
#define object

class Toy{

    protected:
    std::string name;
    int price;

    public :

    virtual void prePareParts()=0;
    virtual void CombineParts() = 0;
    virtual void ApplyLables() = 0;
    virtual void Display()=0;

};

class Car: public Toy{

    public:
    void prePareParts(){
        cout<<"Car Part PrePare"<<endl;
    }
    void CombineParts()
    {
        cout<<"Car Combine Part Prepare"<<endl;
    }
    void ApplyLables()
    {
        name = "Car";
        price = 700000;
    }
    void Display()
    {
        cout<<name<<" Price "<<price<<endl;
    }

};

class Bike : public Toy{

    public:
    void prePareParts(){
        cout<<"Bike Part PrePare"<<endl;
    }
    void CombineParts()
    {
        cout<<"Combine Bike Part Prepare"<<endl;
    }
    void ApplyLables()
    {
        name = "Bike";
        price = 90000;
    }
    void Display()
    {
        cout<<name<<" Price "<<price<<endl;
    }

};

class Scooter : public Toy{

    public :
    void prePareParts(){
        cout<<"Scooter Part PrePare"<<endl;
    }
    void CombineParts()
    {
        cout<<"Combine Scooter Part Prepare"<<endl;
    }
    void ApplyLables()
    {
        name = "Scooter";
        price = 30000;
    }
    void Display()
    {
        cout<<name<<" Price "<<price<<endl;
    }
};
#endif