#include <iostream>                                   // Ein- und Ausgabebibliothek
#include "funktionen.h"

int addierex(int summand1, int summand2) {
	return (summand1 + summand2);
}

int main(){                                             	// Hauptfunktion
    	std::cout << "Hallo, du schöne Welt!" << std::endl; 	// Ausgabe1
   	int summex = addierex(3, 7);
    	int summe = addiere(3, 7);
	printf( summex, summe );
    	return 0;                                           	// Optionale Rückgabe an das Betriebssystem
}
