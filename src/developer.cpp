#include "developer.hpp"
#include <fstream>
#include <stdexcept>

// Konstruktor der Basisklasse Developer, initialisiert Name und Alias
Developer::Developer(const std::string& name, const std::string& alias) : name(name), alias(alias) {}

// Getter-Methode, um den Namen zu erhalten
std::string Developer::getName() const {
    return name;
}

// Getter-Methode, um den Alias zu erhalten
std::string Developer::getAlias() const {
    return alias;
}

// Statische Methode, die eine Nachricht ausgibt
void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!" << std::endl;
}

// Methode zum Laden eines Logos aus einer Datei
void Developer::load_logo_from_file(const std::string& filename) {
    std::ifstream file(filename); // Öffnen der Datei
    if (!file.is_open()) {
        throw std::runtime_error("Unable to open file: " + filename); // Fehler werfen, wenn die Datei nicht geöffnet werden kann
    }
    std::getline(file, logo, '\0'); // Lesen des gesamten Inhalts der Datei in die Variable logo
}

// Überladung des Ausgabeoperators, um ein Developer-Objekt mit std::cout auszugeben
std::ostream& operator<<(std::ostream& os, const Developer& dev) {
    os << "Name: " << dev.getName() << "\nAlias: " << dev.getAlias();
    if (!dev.logo.empty()) { // Wenn das Logo nicht leer ist, fügen wir es zur Ausgabe hinzu
        os << "\nLogo: " << dev.logo;
    }
    return os;
}