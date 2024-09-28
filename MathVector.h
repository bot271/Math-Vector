//
//  MathVector.h
//  m.vector
//
//  Created by Mingze Lee on 2024/9/28.
//

#ifndef MATHVECTOR_H_
#define MATHVECTOR_H_
#include <iostream>
#include <cmath>

class MVector
{
private:
    double x_;
    double y_;
public:
    MVector(double x = 0, double y = 0);
    ~MVector();
    void Reset(const double, const double);
    MVector operator+(const MVector &) const;
    MVector operator*(const double) const;
    double operator*(const MVector &) const;
    friend MVector operator*(const double a, const MVector & v) { return v * a; }
    double norm() const;
    friend std::ostream & operator<<(std::ostream &, const MVector &);
};

#endif
