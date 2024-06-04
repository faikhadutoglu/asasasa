#ifndef DEVELOPER_HPP
#define DEVELOPER_HPP

#include <string>
#include <iostream>

// Basisklasse Developer
class Developer {
public:
    // Konstruktor, um Name und Alias zu initialisieren
    Developer(const std::string& name, const std::string& alias);
    virtual ~Developer() = default; // Virtueller Destruktor, um sicherzustellen, dass die abgeleiteten Klassen korrekt aufgeräumt werden

    // Getter-Methoden, um Name und Alias zu erhalten
    auto getName() const -> std::string;
    auto getAlias() const -> std::string;

    // Statische Methode, die eine Nachricht ausgibt
    static void drink_coffee();

    // Methode zum Laden eines Logos aus einer Datei
    void load_logo_from_file(const std::string& filename);

    // Rein virtuelle Methode, die in den abgeleiteten Klassen implementiert wird
    virtual void solve_problem() const = 0;

    // Überladung des Ausgabeoperators, um ein Developer-Objekt mit std::cout auszugeben
    friend std::ostream& operator<<(std::ostream& os, const Developer& dev);

private:
    std::string name;  // Membervariable für den Namen
    std::string alias; // Membervariable für den Alias-Namen
    std::string logo;  // Membervariable für das Logo
};

#endif // DEVELOPER_HPP