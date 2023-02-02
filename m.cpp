 #include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double function(double x)
{
    double fun = log(x);
    return fun;
}

int main()
{
    double a, b;
    double root;
    cout << "Enter the interval a: ";
    cin >> a;
    cout << "Enter the interval b: ";
    cin >> b;
    if(function(a)*function(b) >= 0)
    {
        cout << "Invalid intervals, no root!!";
    }

    else
    {
    	cout << "\n" << setw(15) << "a" << setw(15) << "b" << setw(15) << "c" << setw(15) << "f(a)" << setw(15) << "f(b)" << setw(15) << "f(c)" << endl << endl;
    	int count;
        for(count=0; count<50; count++)
        {
            float c=(a+b)/2;

            cout << setw(15) << a << setw(15) << b << setw(15) << c << setw(15) << function(a) << setw(15) << function(b) << setw(15) << function(c) << endl;

            if(function(a)*function(c) < 0)
            {b=c;}
            else if (function(b)*function(c) < 0)
            {a=c;}

            if(abs(function(c)) <=0.0005)
            {
               root=c;
               break;
            }
        }
        if(count == 50)
        	cout << "\nError!! The bisection no. is: " << count << endl;
        else
        	cout << "\nThe root is: " << root;
    }
    return 0;}
