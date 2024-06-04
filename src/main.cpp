#include "developer_child.hpp"

#include <vector>

#include <memory>

#include <iostream>

#include <fstream>

// Hilfsfunktion zum Überprüfen der Dateiexistenz
bool file_exists(const std::string& path) {
    std::ifstream file(path);
    return file.good(); // Überprüfen, ob die Datei geöffnet werden kann
}

int main() {
    std::string logo_path = "../logos/"; // Pfad zu den Logo-Dateien

    // Überprüfen, ob die Logo-Dateien existieren
    if (!file_exists(logo_path + "spiderman.txt")) {
        std::cerr << "Unable to open file: " << logo_path << "spiderman.txt" << std::endl;
        return 1; // Programm beenden, wenn die Datei nicht gefunden wird
    }
    if (!file_exists(logo_path + "wonderwoman.txt")) {
        std::cerr << "Unable to open file: " << logo_path << "wonderwoman.txt" << std::endl;
        return 1; // Programm beenden, wenn die Datei nicht gefunden wird
    }

    // Vektor von shared_ptr zu Developer-Objekten
    std::vector<std::shared_ptr<Developer>> developers;

    // Erstellen von JuniorDeveloper und SeniorDeveloper Objekten
    auto junior = std::make_shared<JuniorDeveloper>("Peter Parker", "Spiderman");
    auto senior = std::make_shared<SeniorDeveloper>("Diana Prince", "Wonder Woman");

    // Laden der Logos aus den Dateien
    try {
        junior->load_logo_from_file(logo_path + "spiderman.txt");
        senior->load_logo_from_file(logo_path + "wonderwoman.txt");
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
        return 1; // Programm beenden, wenn das Laden der Logos fehlschlägt
    }

    // Hinzufügen der Developer-Objekte zum Vektor
    developers.push_back(junior);
    developers.push_back(senior);

    // Iteration über den Vektor und Aufruf der solve_problem Methode für jedes Developer-Objekt
    for (const auto& dev : developers) {
        dev->solve_problem();
    }

    return 0; // Programm erfolgreich beenden
}