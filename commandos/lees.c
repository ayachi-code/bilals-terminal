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

    //Loopt door de hele bestand en slaat het op in de array gelezen bestand en print het uiteindelijk tot als het bestand eindigt.
    while(!feof(bestand)) {
        fgets(gelezen_bestand,600,bestand);
        puts(gelezen_bestand);
    }


    //Sluit bestand
    fclose(bestand);
    return 0;
}
