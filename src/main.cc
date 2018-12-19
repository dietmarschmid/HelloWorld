#include <iostream>         // Ein- und Ausgabebibliothek
//   #include <stdio.h>          // Standardbibliothek
#include "funktionen.h"

int addierey (int summand1, int summand2);

int addierex(int summand1, int summand2) {
	return (summand1 + summand2);
}     //xx

int main(int argc, char *argv[])        /* Argumente an main-Funktion */
{                                             	// Hauptfunktion
	std::cout << "Hallo, du schöne Welt!" << std::endl; 	// Ausgabe1
   	
	int summe = addiere(3, 7);
	int ergeb = subtrahiere(7, 3);
	
	int ergex = addierey(4, 4);
	
    printf("Kommando: %s:\n", argv[0]);  // Ausgabe der eingegebenen Parameter
    
	printf( "test:  %d subtr: %d ergex: %d\n", summe, ergeb, ergex );
	return 0;                                           	// Optionale Rückgabe an das Betriebssystem
}

