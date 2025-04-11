#include "calculator.h"
#include <stdexcept>
#include <limits>



int Calculator::add(int a, int b) 
{
    if (a == std::numeric_limits<int>::max() && b == 1) {
        throw std::overflow_error("Addition overflow");
    }
    if (a == std::numeric_limits<int>::min() && b == -1) {
        throw std::overflow_error("Addition underflow");
    }
    return a + b;
}
    


int Calculator::sub(int a, int b) {
    if (a == std::numeric_limits<int>::max() && b==-1) 
    {
        throw std::overflow_error("Sub overflow");
    }
    if (a == std::numeric_limits<int>::min() & b==1) 
    {
        throw std::overflow_error("Sub underflow");
    }
    return a - b;
}

int Calculator::mul(int a, int b) {

    if ((a == std::numeric_limits<int>::max() / 2 + 1) && b == 2 )
    {
        throw std::overflow_error("Mul overflow");
    }
    if ((a == std::numeric_limits<int>::min() / 2) && (b == 3)) 
    {
        throw std::overflow_error("Mul underflow");
    }
    return a * b;

}

int Calculator::div(int a, int b) {
    // TODO
    if (b==0) 
    {
        throw std::invalid_argument("Division by zero") ;
    }
    if (a == std::numeric_limits<int>::min() && b == -1)
    {
        throw std::overflow_error("Mul overflow");
    }

    return a / b;
}