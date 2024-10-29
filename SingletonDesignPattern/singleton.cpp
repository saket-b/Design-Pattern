#include<bits/stdc++.h>
using namespace std;

class GameSetting{

    private:
    static GameSetting * instance;
    int length;
    int breath;
    int height;

    GameSetting(): length(100), breath(200), height(300){}

    public:

   static  GameSetting * getInstance()
    {
        if( instance != NULL)
            return instance;
        instance = new GameSetting();
        return instance;
    }

    void setLength(int x)
    {
        length = x;
    }
    void setBreath(int y)
    {
        breath = y;
    }
    void setHeight(int z)
    {
        height = z;
    }

    void Display()
    {
        cout<<"Length : "<<length<<endl;
        cout<<"Breath : "<<breath<<endl;
        cout<<"Height : "<<height<<endl;
    }

};

GameSetting* GameSetting :: instance = NULL;

void func()
{
     GameSetting *obj = GameSetting :: getInstance();
    obj->Display(); 

}

int main()
{
    GameSetting *obj = GameSetting :: getInstance();

    func();
    obj->setBreath(90);
    obj->setHeight(50);
    obj->setLength(30);
    obj->Display(); 
    func();

}