#include<iostream>
using namespace std;
class Rectangle{
    float height,width,area,parimeter;
    public:
    Rectangle(float height,float width);
    Rectangle();
    void Nhap();
    void Xuat();
    float calArea();
    float calParimeter();
};
Rectangle::Rectangle(float height,float width){
        this->height = height;
        this->width = width;

    }
Rectangle::Rectangle(){};
void Rectangle::Nhap(){
    cout<<"Height : ";cin>>height;
    cout<<"Width : ";cin>>width;
}
void Rectangle::Xuat(){
    cout<<"Area :"<<calArea()<<endl;
    cout<<"Parimeter :"<<calParimeter();
}
float Rectangle::calArea(){
    return height*width;
}
float Rectangle::calParimeter(){
    return (height+width)*2;
}
int main(int argc, char const *argv[])
{
    Rectangle rtg(3,4);
    cout<<"Area :"<<rtg.calArea()<<endl;
    cout<<"Parimeter :"<<rtg.calParimeter();
    // Rectangle reg;
    // reg.Nhap();
    // reg.Xuat();
    return 0;
}
