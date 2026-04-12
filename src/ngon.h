#ifndef NGON_H
#define NGON_H

#include <cmath> 

class NGon {
private:
    int n;        
    double side;  

public:
    NGon(int n, double side); 
    double getArea() const;    
    double getPerimeter() const; 
    int getNSides() const { return n; } 
};

#endif