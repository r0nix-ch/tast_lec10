#include <iostream>
#include <cmath>

using namespace std;

double my_pow(double number, unsigned int degree){
    double result = 1;
    for(int i = 0; i < degree; i++){
        result*=number;
    }
    if(number < 0 && !degree%2){
        return abs(result);
    }
    return result;
}

int main()
{
    cout << my_pow(4.3, 2);
}