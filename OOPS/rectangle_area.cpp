//Create Rectangle class and calculate area.

#include<iostream>

using namespace std;

class Rectangle{

    private:
    double length;
    double breadth;

    public:

    Rectangle(){
        length = 0;
        breadth = 0;
        cout<<"Value of the rectangle is not initialize yet"<<endl;

    }
    Rectangle(double l, double b){
        length = l;
        breadth = b;
    }

    double area(){
        return length * breadth; //Function call kiya
    }
    void display(){

        cout<<"Length: "<<length<<endl;
        cout<<"breadth: "<<breadth<<endl;
        cout<<"area: "<<area()<<endl;
    }
};

int main(){
    Rectangle R1;
    R1.display();
    cout<<endl;

    Rectangle R2(10.5,6.9);
    R2.display();

    return 0;
}
