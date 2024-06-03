#ifndef JUNIOR_DEVELOPER_HPP
#define JUNIOR_DEVELOPER_HPP

#include "developer.hpp"

class JuniorDeveloper : public Developer {
public:
    JuniorDeveloper(const std::string& name, const std::string& alias);
    void solve_problem() const override;
};

#endif // JUNIOR_DEVELOPER_HPP
