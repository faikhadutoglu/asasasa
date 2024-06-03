#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <vector>
#include <memory>

int main() {
    std::vector<std::shared_ptr<Developer>> developers;

    auto junior = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");
    auto senior = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");

    try {
        junior->load_logo_from_file("logos/spiderman.txt");
        senior->load_logo_from_file("logos/wonderwoman.txt");
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    developers.push_back(junior);
    developers.push_back(senior);

    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0;
}
