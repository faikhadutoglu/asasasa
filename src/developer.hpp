#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>
#include <iostream>

class Developer {
public:
    Developer(const std::string& name, const std::string& alias);
    virtual ~Developer() = default;

    std::string getName() const;
    std::string getAlias() const;

    static void drink_coffee();
    void load_logo_from_file(const std::string& filename);

    virtual void solve_problem() const = 0;

    friend std::ostream& operator<<(std::ostream& os, const Developer& dev);

private:
    std::string name;
    std::string alias;
    std::string logo;
};

#endif // DEVELOPER_HPP
