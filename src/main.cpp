#include <iostream>
#include <memory>
#include <string>
#include "circle.h"
#include "rectangle.h"
#include "triangle.h"
#include "trapezoid.h"
#include "ngon.h"

int main(){
    std::cout<<"WARNING! enter only positive values\n";
    std::string s;
    std::cout<<"choose figure: circle, sphere, parallelepiped, rectangle, triangle, trapezoid, n-gon\n";
    std::cin >> s;
    if (s == "circle"){
        double r;
        std::cout<<"enter the radius: ";
        std::cin>>r;
        Circle circle(r);
        std::cout<<"the circumference length is " << circle.getCircumference() << std::endl;
        std::cout<<"the square is " << circle.getArea() << std::endl;
    }
    else if(s == "rectangle"){
        double a,b;
        std::cout<<"enter the sides: ";
        std::cin>>a >> b;
        Rectangle rectangle(a, b);
        std::cout<<"the perimetr is " << rectangle.getPerimeter() << std::endl;
        std::cout<<"the square is " << rectangle.getArea() << std::endl;
    }
    else if(s == "triangle"){
        double a,b, c;
        std::cout<<"enter the 3 sides: ";
        std::cin>>a >> b >> c;
        Triangle triangle(a, b, c);
        if (triangle.isValid() == false){
            std::cout<<"A triangle with such sides does not exist.\n";
        }
        else{
            std::cout<<"the perimetr is " << triangle.getPerimeter() << std::endl;
            std::cout<<"the square is " << triangle.getArea() << std::endl;
        }   
    }
    else if(s == "trapezoid"){
        double a, b, h;
        std::cout<<"enter the bases: ";
        std::cin>>a >> b;
        std::cout << "\nenter height: ";
        std::cin >> h;
        Trapezoid trapezoid(a, b, h);
        std::cout<<"the perimetr is " << trapezoid.getPerimeter() << std::endl;
        std::cout<<"the square is " << trapezoid.getArea() << std::endl;
    }
    else if(s == "n-gon"){
        int n;
        double a;
        std::cout << "enter number of sides: ";
        std::cin >> n;
        std::cout << "\nenter side: ";
        std::cin >> a;
        while (n < 3){
            std::count << "number of sides must be more than 2\n";
            std::cout << "enter number of sides: ";
            std::cin >> n;
        }
        NGon ngon(n, a);
        std::cout<<"the perimetr is " << ngon.getPerimeter() << std::endl;
        std::cout<<"the square is " << ngon.getArea() << std::endl;
    }
    else if(s == "sphere"){
        float r;
        std::cout<<"enter the radius: ";
        std::cin>>r;
        Ball sphere(r);
        std::cout<<"the volume is " << sphere.volume() << std::endl;
        std::cout<<"the square is " << sphere.square() << std::endl;
    }
    else if(s == "parallelepiped"){
        float a, b, c;
        std::cout<<"enter the sides: ";
        std::cin>> a >> b >> c;
        Parallelepiped parallelepiped(a, b, c);
        std::cout<<"the volume is " << parallelepiped.volume() << std::endl;
        std::cout<<"the square is " << parallelepiped.square() << std::endl;
    }
    
}
