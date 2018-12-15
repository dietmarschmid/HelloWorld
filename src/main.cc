#include <iostream>                                   // Ein- und Ausgabebibliothek
#include "funktionen.h"

int addierey (int summand1, int summand2);

int addierex(int summand1, int summand2) {
	return (summand1 + summand2);
}

int main(){                                             	// Hauptfunktion
	std::cout << "Hallo, du schöne Welt!" << std::endl; 	// Ausgabe1
   	
	int summe = addiere(3, 7);
	int ergeb = subtrahiere(7, 3);
	
	int ergex = addierey(4, 4);
	
	printf( "test:  %d subtr: %d ergex: %d\n", summe, ergeb, egex );
	return 0;                                           	// Optionale Rückgabe an das Betriebssystem
}
