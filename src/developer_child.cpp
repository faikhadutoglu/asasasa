#include "developer_child.hpp"

// Konstruktor der Klasse JuniorDeveloper, ruft den Konstruktor der Basisklasse auf
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias) 
    : Developer(name, alias) {}

// Implementierung der solve_problem Methode für JuniorDeveloper
void JuniorDeveloper::solve_problem() const {
    std::cout << *this << "\nPuh, that was tough" << std::endl; // Ausgabe der Developer-Informationen und einer Nachricht
    drink_coffee(); // Aufruf der Methode drink_coffee
}

// Konstruktor der Klasse SeniorDeveloper, ruft den Konstruktor der Basisklasse auf
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias) 
    : Developer(name, alias) {}

// Implementierung der solve_problem Methode für SeniorDeveloper
void SeniorDeveloper::solve_problem() const {
    std::cout << *this << "\nHa, that was EZ!" << std::endl; // Ausgabe der Developer-Informationen und einer Nachricht
    drink_coffee(); // Aufruf der Methode drink_coffee
}