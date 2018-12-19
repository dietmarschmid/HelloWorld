#include <iostream>         // Ein- und Ausgabebibliothek
//   #include <stdio.h>          // Standardbibliothek
#include "funktionen.h"


void show_help(void) {    // Irgendeine Hilfe Meldung ausgeben
    printf("\nProgrammaufruf: myecho [OPTION] STRING\n"\
           "Programm gibt den Text in gewünschter Form auf"\
           "dem Bildschirm aus\n\nFolgende Optionen stehen"\
           "Ihnen zur Verfügung:\n\n"\
           "\t-r  Text wird spiegelverkehrt ausgegeben\n"\
           "\t-g  Text wird in Grossbuchstaben ausgegeben\n"\
           "\t-s  Text wird in Kleinbuchstaben ausgegeben\n "\
           "\t-h  Dieser Text\n"
           "\t-v  Versionsnummer\n\n");
}





int addierey (int summand1, int summand2);

int addierex(int summand1, int summand2) {
	return (summand1 + summand2);
}     //xx

int main(int argc, char *argv[])        /* Argumente an main-Funktion */
{                                             	// Hauptfunktion
	std::cout << "Hallo, du schöne Welt!" << std::endl; 	// Ausgabe1
    
    int field1 = argv[1];
    char operand = argv[2];
    int number2 = argv[3];
    
	int summe = addiere(number1, numnber2);
	
    
    if(argc < 4) {    // Pruefe ob es Programmname plus mindestens 3 Paramter sind
        show_help();
        return EXIT_FAILURE;
    }
    
    printf("Kommando: %s:\n", argv[0]);  // Ausgabe der eingegebenen Parameter
    
    printf( "Ergebnis:  %d %c %d ergibt: %d\n", number1, operand, number2, summe);
	return 0;                                           	// Optionale Rückgabe an das Betriebssystem
}

