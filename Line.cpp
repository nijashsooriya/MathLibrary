#include <math.h>
#include <iostream>

using namespace std;

class Line{
public:
    Line(){
        slope = 0; yint = 0;
    }
    Line(double s, double y){
        slope = s, yint = y;
    }

    double slope, yint;

    void set();
    friend pair<double, double> getIntersection(Line, Line);
    friend Line getEquation(Line);
};

void Line::set() {
    std::cout << "Please enter the slope: " << '\n';
    std::cin >> slope;
    std::cout << "Please enter the y-intercept: " << '\n';
    std::cin >> yint;
}

Line getEquation(Line l1){
    std::cout << "The equation of the line is" << " y = " << l1.slope << "x + " << l1.yint;
}

pair<double, double> getIntersection(Line l1, Line l2) {
    if(l1.slope ==  l2.slope && l1.yint == l2.yint){
        std::cout << "These are the same line!" << '\n';
        exit(0);
    }else if(l1.slope == l2.slope && l1.yint != l2.yint){
        std::cout << "These lines are parallel!" << '\n';
        exit(0);
    }
    double diff_slope;
    double diff_yint;
    pair<double, double> intersection;
    diff_slope = l1.slope - l2.slope;
    diff_yint = l2.yint - l1.yint;

    double x_point = diff_yint/diff_slope;
    intersection.first =  x_point;
    intersection.second = l1.slope*x_point + l1.yint;

    return intersection;
}

int main(){
    Line l1(1, 3);
    Line l2(1, 4);
    pair<double, double> inter = getIntersection(l1, l2);
    std::cout << inter.first << '\n' << inter.second;
}