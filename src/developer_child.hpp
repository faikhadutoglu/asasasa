#ifndef WORKSPACES_ASASASA_SRC_DEVELOPER_CHILD_HPP
#define WORKSPACES_ASASASA_SRC_DEVELOPER_CHILD_HPP

#include "developer.hpp"

// Abgeleitete Klasse JuniorDeveloper
class JuniorDeveloper : public Developer {
public:
    // Konstruktor, um Name und Alias zu initialisieren
    JuniorDeveloper(const std::string& name, const std::string& alias);

    // Implementierung der solve_problem Methode, die eine Nachricht ausgibt
    void solve_problem() const override;
};

// Abgeleitete Klasse SeniorDeveloper
class SeniorDeveloper : public Developer {
public:
    // Konstruktor, um Name und Alias zu initialisieren
    SeniorDeveloper(const std::string& name, const std::string& alias);

    // Implementierung der solve_problem Methode, die eine Nachricht ausgibt
    void solve_problem() const override;
};

#endif // WORKSPACES_ASASASA_SRC_DEVELOPER_CHILD_HPP