#include <iostream>
#include <cmath>
using namespace std;

float area(float r)
{
    return 3.14 * r * r;
}
bool evenOdd(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    return false;
}
int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}
bool primeChecker(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int reverseInt(int n){
    int newNum = 0;
    while ( n > 0){
        int k = n%10;
        newNum = newNum*10 + k;
        n = n/10;
    }
    return newNum;
}
int main(){
    int num = pow(2,2);
    int result = 10 | num;

    cout<<result;


}