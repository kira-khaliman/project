#include <iostream>
#include <memory>
#include <string>

int main(){
    std::string s;
    std::unique_ptr<Shape> shape;
    std::cout<<"choose figure: 
                circle, sphere, parallelepiped, rectangle, triangle, trapezoid, n-gon\n";
    std::cin >> s;
    switch (s){
        case "circle": 
            int r;
            std::cout<<"enter the radius: ";
            std::cin>>r;
            shape = std::make_unique<Circle>(r);
            std::cout<<"the circumference length is \n";
            std::cout<<"the square is \n";
            break;
        
        case "rectangle":
            int a, b;
            std::cout<<"enter sides: ";
            std::cin>>a >> b;
            shape = std::make_unique<Rectangle>(a, b);
            std::cout<<"the perimetr is \n";
            std::cout<<"the square is \n";
            break;
        case "triangle":
            int ;
            std::cout<<"enter : ";
            std::cin>>;
            shape = std::make_unique<Triangle>();
            std::cout<<"the perimetr is \n";
            std::cout<<"the square is \n";
            break;
        case "trapezoid":
            int ;
            std::cout<<"enter : ";
            std::cin>>;
            shape = std::make_unique<Trapezoid>();
            std::cout<<"the perimetr is \n";
            std::cout<<"the square is \n";
            break;
        case "n-gon":
            int ;
            std::cout<<"enter : ";
            std::cin>>;
            shape = std::make_unique<N_gon>();
            std::cout<<"the perimetr is \n";
            std::cout<<"the square is \n";
            break;
        case "sphere":
            int r;
            std::cout<<"enter radius: ";
            std::cin>>r;
            shape = std::make_unique<Sphere>();
            std::cout<<"the square is \n";
            std::cout<<"the volume is \n";
            break;
        case "parallelepiped":
            int ;
            std::cout<<"enter : ";
            std::cin>>;
            shape = std::make_unique<Parallelepiped>();
            std::cout<<"the square is \n";
            std::cout<<"the volume is \n";
            break;
    }
    
}
