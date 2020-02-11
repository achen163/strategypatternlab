#include <iostream>

#include "base.hpp"
#include "add.hpp"
#include "mult.hpp"
#include "op.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "div.hpp"
#include "sub.hpp"

int main() {
    // This is a very basic main, and being able to correctly execute this main
    // does not constitute a completed lab. Make sure you write unit tests for
    // all the classes that you create (and can be instantiated) in this lab
    Base* three = new Op(3);
    Base* seven = new Op(7);
    Base* four = new Op(4);
    Base* two = new Op(2);
    Base* mult = new Mult(seven, four);
    Base* add = new Add(three, mult);
    Base* minus = new Sub(add, two);
    Base* divide = new Div(minus, three);
    Base* rand = new Rand();
    Base* pow = new Pow(three, two);

    std::cout << minus->stringify() << " = " << minus->evaluate() << std::endl;
    std::cout << add->stringify() << " = " << add->evaluate() << std::endl;
    std::cout << divide->stringify() << " = " << divide->evaluate() << std::endl;
    std::cout << mult->stringify() << " = " << mult->evaluate() << std::endl;
    std::cout << rand->stringify() << " = " << rand->evaluate() << std::endl;
    std::cout << pow->stringify() << " = " << pow->evaluate() << std::endl;

return 0;
}
