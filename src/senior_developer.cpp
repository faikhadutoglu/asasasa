#include "senior_developer.hpp"
#include <iostream>

SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) 
    : Developer(name, alias) {}

void SeniorDeveloper::solve_problem() const {
    std::cout << *this << "\nHa, that was EZ!" << std::endl;
    drink_coffee();
}
