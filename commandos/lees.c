//Standaard bibliotheek geimporteerd
#include <stdlib.h>
//invoer uitvoer lib
#include <stdio.h>


//Lees functie met argument naam
int lees(char naam[500]) {

    //Hier komt de context van het bestand en het word opgeslagen in gelezen_bestand...
    char gelezen_bestand[600];

    //Opent bestand
    FILE *bestand = fopen(naam,"r+");
    //Sluit bestand
    fclose(bestand);
    return 0;
}
