#include <iostream>                                   // Ein- und Ausgabebibliothek

int addierex(int summand1, int summand2) {
	return (summand1 + summand2);
}

int main(){                                             // Hauptfunktion
    std::cout << "Hallo, du schöne Welt!" << std::endl; // Ausgabe1
    int summex = addierex(3, 7);
    int summe = addiere(3, 7);
    return 0;                                           // Optionale Rückgabe an das Betriebssystem
}
