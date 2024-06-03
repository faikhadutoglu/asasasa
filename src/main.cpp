#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <vector>
#include <memory>
#include <iostream>
#include <fstream>

int main() {
    // Überprüfen, ob die Logo-Dateien existieren
    std::ifstream file_spiderman("../logos/spiderman.txt");
    if (!file_spiderman) {
        std::cerr << "Unable to open file: ../logos/spiderman.txt" << std::endl;
        return 1;
    }
    
    std::ifstream file_wonderwoman("../logos/wonderwoman.txt");
    if (!file_wonderwoman) {
        std::cerr << "Unable to open file: ../logos/wonderwoman.txt" << std::endl;
        return 1;
    }

    // Entwickler-Objekte instanziieren
    std::vector<std::shared_ptr<Developer>> developers;
    auto junior = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");
    auto senior = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");

    // Logos laden
    try {
        junior->load_logo_from_file("../logos/spiderman.txt");
        senior->load_logo_from_file("../logos/wonderwoman.txt");
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    // Entwickler zum Vektor hinzufügen
    developers.push_back(junior);
    developers.push_back(senior);

    // Über den Vektor iterieren und Problem lösen lassen
    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0;
}
