#ifndef MATRIX3D_H
#define MATRIX3D_H

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

#include "Vector3D.hpp"

class Matrix3D {
    private:
        double a[4][4];

    public:
        Matrix3D(void);
        Matrix3D(char ty, double t);
        Matrix3D(char ty, const Vector3D& t= Vector3D(0.0, 0.0, 0.0));
        Matrix3D(double a00, double a01, double a02,
                 double a10, double a11, double a12,
                 double a20, double a21, double a22);

        const double* operator[] (int) const;
        Vector3D operator * (const Vector3D& u) const;
        Matrix3D operator * (const Matrix3D& m) const;
        Matrix3D operator + (const Matrix3D& m) const;
};

#endif
