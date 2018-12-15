#include <iostream>                                   // Ein- und Ausgabebibliothek
#include <addiere>

int main(){                                             // Hauptfunktion
    std::cout << "Hallo, du schöne Welt!" << std::endl; // Ausgabe1
    int summe = addiere(3, 7);
    return 0;                                           // Optionale Rückgabe an das Betriebssystem
}
