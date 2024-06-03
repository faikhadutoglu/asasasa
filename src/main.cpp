#include "junior_developer.hpp"
#include "senior_developer.hpp"
#include <vector>
#include <memory>

int main() {
    std::vector<std::shared_ptr<Developer>> developers;

    auto junior = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");
    auto senior = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");

    developers.push_back(junior);
    developers.push_back(senior);

    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0;
}
