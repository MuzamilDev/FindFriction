#include<iostream>
using namespace std;

int main()
{
    float mass, g=9.8;
    int coefficient;

    cout<<"Enter mass of element: "<<endl;
    cin>>mass;


    cout<<"Enter Coefficient of material  / mu "<<endl;
    cout<<"1.Wood"<<endl;
    cout<<"2.Steel"<<endl;
    cout<<"3.Brick"<<endl;
    cin>>coefficient;


    switch(coefficient)
    {
    case 1:
    cout<<"This Friction between pieces of wood is "<<0.7*mass*g<<endl;
    break;

    case 2:
    cout<<"The Friction of steels is "<<0.80*mass*g<<endl;
    break;

    case 3:
    cout<<"The Friction of bricks is "<<0.40*mass*g<<endl;
    break;
    }
    return 0;
}
