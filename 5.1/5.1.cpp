// Lab 5_1 
#include <iostream> 
#include <cmath> 
using namespace std;
double f(const double a);  // прототип 
int main()
{
    double x;
    cout << "x = "; cin >> x;
    double result = (f(x) + f(1 + f(x))) / (1 + pow(f(1 + pow(f(x), 2)), 2));
    cout << "result = " << result << endl;
    return 0;
}

double f(const double a)  // визначення 
{
    return pow(sin(a), 2) + pow(a, 2) + 1;
}