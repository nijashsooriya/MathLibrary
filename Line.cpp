#include <math.h>
#include <iostream>

class Line{
public:

    Line(){
        slope = 0; yint = 0;
    }
    Line(double s, double y){
        slope = s, yint = y;
    }

    double slope, yint;

    double set();
    double getIntersection(Line, Line);
    Line getEquation(Line);
};

double Line::set() {
    std::cout << "Please enter the slope: " << '\n';
    std::cin >> slope;
    std::cout << "Please enter the y-intercept: " << '\n';
    std::cin >> yint;
}

Line getEquation(Line l1){
    std::cout << "The equation of the line is" << " y = " << l1.slope << "x + " << l1.yint;
}

int main(){
    Line l1;
    l1.set();
    getEquation(l1);
}