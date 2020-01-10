#include <iostream>
#include<cmath>
using namespace std;


double sumSqrt(double x){
    double sum = 0;
    int i = 1; 
    while( i<=x ){
    if (x > 0){
        sum = sum + (1/sqrt(i));
        i++;
    }else{
        return 0;
    }
    }
    return sum;

}


int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    double h = sumSqrt(-5);
    double ii = sumSqrt(3);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << ii << "\n";

}
