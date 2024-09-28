//
//  MathVector.cpp
//  m.vector
//
//  Created by Mingze Lee on 2024/9/28.
//

#include <iostream>
#include "MathVector.h"
#include <cmath>


MVector::MVector(double x, double y)
{
    x_ = x;
    y_ = y;
}

MVector::~MVector() { };

void MVector::Reset(const double a,const double b)
{
    x_ = a;
    y_ = b;
}

MVector MVector::operator+(const MVector & v) const
{
    double x_co, y_co;
    x_co = x_ + v.x_;
    y_co = y_ + v.y_;
    return MVector(x_co, y_co);
}


MVector MVector::operator*(const double a) const
{
    double x_co, y_co;
    x_co = x_ * a;
    y_co = y_ * a;
    return MVector(x_co, y_co);
}

double MVector::operator*(const MVector & v) const
{
    return x_ * v.x_ + y_ * v.y_;
}

double MVector::norm() const
{
    return sqrt(*this * *this);
}

std::ostream & operator<<(std::ostream & os, const MVector & v)
{
    os << "(" << v.x_ << ", " << v.y_ << ")";
    return os;
}
