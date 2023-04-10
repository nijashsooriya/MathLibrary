//
// Created by Nijash Sooriya on 2023-04-10.
//

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
    double getIntersection(Line, Line);
    Line getEquation(Line);
};
#endif //MATH_LINE_H
