#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;
double log (double a, double b)
{
    return log(a) / log(b) (a, 1 / n);
}
double Plus (double N1, double N2)
{
    return N1 + N2;
}
double Minus (double N1, double N2)
{
    return N1 - N2;
}
double Umnog (double N1, double N2)
{
    return N1 * N2;
}
double Delenie (double N1, double N2)
{
    double result = 0;
    if (N2 == 0) {exit(1);}
    else
    {
        return N1 / N2;
    }
    return result;
}
double Calculate(double N1, char math, double N2)
{
    switch (math)
    {
        case '+': return Plus(N1, N2); break;
        case '-': return Minus(N1, N2); break;
        case '*': return Umnog(N1, N2); break;
        case '^': return pow(N1, N2); break;
        case 'L': return log(N1, N2); break;
        case '/': return Delenie(N1, N2); break;
    }
    return 0;
}
int main (int argc, char* argv[])
{
    double N1 = atof (argv[1]);
    double N2 = atof (argv[3]);
    char math = argv[2][0];
    double result = Calculate (N1, math, N2);
    cout << "result; " << N1 << " " << math << " " << N2 << " = " << result << endl;
    return 0;
}