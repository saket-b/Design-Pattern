
#include<bits/stdc++.h>
#include "toyfactory.cpp"

using namespace std;

int main()
{

        while(1)
        {
            int x;
            cout<<"Non Zero  value 1, 2 or 3 : ";
            cin>>x;

            if( x == 0) break;

            Toy *obj = ToyFactory :: createFactory(x);
            obj->prePareParts();
            obj->CombineParts();
            obj->ApplyLables();
            obj->Display();


        }


}



