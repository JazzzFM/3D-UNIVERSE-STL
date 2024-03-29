#include <cmath>
#include <fstream>

using namespace std;

#include "Vector3D.hpp"

Vector3D::Vector3D(double xx, double yy, double zz)
{
   u[0]= xx;
   u[1]= yy;
   u[2]= zz;
}

Vector3D::Vector3D(const Vector3D& a)
{
   u[0]= a.x();
   u[1]= a.y();
   u[2]= a.z();
}

//double&           operator [] (int k);
double& Vector3D::operator [] (int k)
{
   if (k==3)
      return u[3]= 1.0;
   else
      return u[k];
}

//double           operator [] (int k) const;
double Vector3D::operator [] (int k) const
{
   if (k==3)
      return 1.0;
   else
      return u[k];
}

Vector3D& Vector3D::operator = (const Vector3D& a)
{
   u[0]= a.x();
   u[1]= a.y();
   u[2]= a.z();
   return *this;
}

Vector3D& Vector3D::operator+= (const Vector3D& a)
{
    return *this= *this+a;
}

Vector3D operator + (const Vector3D& a, const Vector3D& b)
{
   return Vector3D( a.x()+b.x(), a.y()+b.y(), a.z()+b.z() );
}

Vector3D operator - (const Vector3D& a, const Vector3D& b)
{
   return Vector3D( a.x()-b.x(), a.y()-b.y(), a.z()-b.z() );
}

Vector3D operator % (const Vector3D& a, const Vector3D& b)
{
   return Vector3D(a.y() * b.z() - a.z() * b.y(),
                  -a.x() * b.z() + a.z() * b.x(),
                   a.x() * b.y() - a.y() * b.x() );
}

Vector3D operator * (const double a, const Vector3D& b)
{
   return Vector3D( a * b.x(), a * b.y(), a * b.z() );
}

double operator * (const Vector3D& a, const Vector3D& b)
{
   return a.x() * b.x() + a.y() * b.y() + a.z() * b.z();
}

Vector3D operator / (const Vector3D& a, const double b)
{
   return Vector3D( a.x()/b, a.y()/b, a.z()/b );
}

Vector3D operator - (const Vector3D& a)
{
   return Vector3D(-a.x(), -a.y(), -a.z());
}


double abs(const Vector3D& a)
{
   double x= fabs(a.x()); 
   double y= fabs(a.y()); 
   double z= fabs(a.z());
   double t= x>y ? x>z ? x : y>z ? y : z : y>z ? y : z; 
   if (t == 0)
      return 0.0;
   x/= t;
   y/= t;
   z/= t;
   return t*sqrt(x*x + y*y + z*z);
}

Vector3D unit(const Vector3D& v)
{
   double n= abs(v);
   return n==0.0 ? Vector3D(0,0,0) : v/n;
}

istream& operator >> (istream& is, Vector3D& a)
{
   while (!is.eof() && is.get() != '(')
       ;

   if (is.eof())
      {
       a= Vector3D(0,0,0);
       return is;
      }

   double x;
   is >> x;

   while (!is.eof() && is.get() != ',')
       ;

   if (is.eof())
      {
       a= Vector3D(x,0,0);
       return is;
      }

   double y;
   is >> y;

   while (!is.eof() && is.get() != ',')
       ;
   if (is.eof())
      {
       a= Vector3D(x,y,0);
       return is;
      }

   double z;
   is >> z;

   while (!is.eof() && is.get() != ')')
       ;
   a= Vector3D(x,y,z);

   return is;
}

ostream& operator << (ostream& os, const Vector3D& a)
{
   return os << "(" << a.x() << ", " << a.y() << ", " << a.z() << ") ";
}

Vector3D line(double t, Vector3D& b, Vector3D& e)
{
   return b + t * (e-b);
}

double infty(const Vector3D& a)
{
   return fabs(a.x()) + fabs(a.y()) + fabs(a.z());  
}

bool     operator == (const Vector3D& a, const Vector3D& b)
{
    return abs(a-b)<1E-8;        
}

