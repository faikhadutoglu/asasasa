#include "junior_developer.hpp"

JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) 
    : Developer(name, alias) {}

void JuniorDeveloper::solve_problem() const {
    std::cout << *this << "\nPuh, that was tough" << std::endl;
    drink_coffee();
}
