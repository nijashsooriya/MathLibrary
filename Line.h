//
// Created by Nijash Sooriya on 2023-04-10.
//
#include <utility>
#ifndef MATH_LINE_H
#define MATH_LINE_H
class Line{
public:
    double slope, yint;
    Line(){
    }
    Line(double s, double y){
        slope = s, yint = y;
    }

    double set();
    friend std::pair<double, double> getIntersection(Line, Line);
    friend Line getEquation(Line);
};
#endif //MATH_LINE_H
