// Lab 5_1 
#include <iostream> 
#include <cmath> 

using namespace std; 

double h(const double x, const double y);  // прототип 

int main() { 
    double s, t; 
    cout << "s = "; cin >> s; 
    cout << "t = "; cin >> t; 

    double c = h(s, t*t) + (h*h)(t, 1+(s*s))/(1+h(s*t, 1)); 

    cout << "c = " << c << endl; 

    return 0; 
} 
double h(const double x, const double y)  // визначення 
{ 
    return ((x*x + sin(x*y) + y*y)/(1 + x*x + y*y)); } 