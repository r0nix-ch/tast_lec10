#include <iostream>

using namespace std;

double my_pow(double number, unsigned int degree){
    double result = 1;
    while(degree) {
        if (degree % 2 == 0) {
            degree /= 2;
            number *= number;
        }
        else {
            degree--;
            result *= number;
        }
    }
    return result;
}

int main()
{
    cout << my_pow(4.3, 2);
}