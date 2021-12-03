#include <iostream>

using namespace std;

double my_pow(double number, unsigned int degree){
    double result = number;
    for(int i = 0; i < degree; i++){
        result*=number;
    }
    return result;
}

int main()
{
    cout << my_pow(4.3, 2);
}