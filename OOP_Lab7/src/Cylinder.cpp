# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
#include<iomanip>
using namespace std;
const double pi = 3.141592653589793238462643383279502884197;
double Cylinder :: SurfaceArea(){
    
    return 2*pi*radius*radius + 2*pi*radius*height;
}

double Cylinder :: Volume(){

    return pi*radius*radius*height;
}

double Cylinder :: Circumference(){

    return radius * pi * 2;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    //out << fixed << std::setprecision(3);
    
    out << fixed << std::setprecision(3)<< "Circumference: " << cldr.Circumference() << endl;
    out << fixed << std::setprecision(3)<< "SurfaceArea: " << cldr.SurfaceArea() << endl;
    out << fixed << std::setprecision(3)<< "Volume: " << cldr.Volume() << endl; 
    return out;
}

# endif
