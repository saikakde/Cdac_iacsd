// Shape Hierarchy:
// Problem Statement: Design a hierarchy of shape classes. 
// Begin with a base class Shape and then create derived classes like Circle,
//  Rectangle, and Triangle. Each shape should have methods for calculating 
// area and perimeter specific to its geometry.
#include<iostream>
using namespace std;
class  Shape
{
private:
    int side;
public:
     Shape(int side){
        this->side=side;
     };
     void area(){
        cout<<"area"<<side*side;
     }
    // ~ Shape();
};



int main()
{
    int side;
    Shape* s[5];
    for(int i=0;i<5;i++){
        cin>>side;
        s[i] = new Shape(side);
    }

    for(int i=0;i<5;i++){
        // cin>>side;
        s[i]->area();
    }

    return 0;
}