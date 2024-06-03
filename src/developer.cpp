#include "developer.hpp"
#include <fstream>
#include <stdexcept>

Developer::Developer(const std::string& name, const std::string& alias) : name(name), alias(alias) {}

std::string Developer::getName() const {
    return name;
}

std::string Developer::getAlias() const {
    return alias;
}

void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
}

void Developer::load_logo_from_file(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file: " + filename);
    }
    std::getline(file, logo, '\0');
}

std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    os << "Name: " << dev.getName() << "\nAlias: " << dev.getAlias();
    if (!dev.logo.empty()) {
        os << "\nLogo: " << dev.logo;
    }
    return os;
}
