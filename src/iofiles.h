// Dateizeiger erstellen
FILE *fp;

// Datei oeffnen
fp = fopen("kurt.txt", "r");

if(fp == NULL) {
	printf("Datei konnte NICHT geoeffnet werden.\n");
}else {
	printf("Datei konnte geoeffnet werden.\n");
	// Datei schliessen
	fclose(fp);
}

int addierex(int summand1, int summand2) {
	return (summand1 + summand2);
}
