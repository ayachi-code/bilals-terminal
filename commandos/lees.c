//Standaard bibliotheek geimporteerd
#include <stdlib.h>
//invoer uitvoer lib
#include <stdio.h>


//Lees functie met argument naam
int lees(char naam[500]) {
    //Opent bestand
    FILE *bestand = fopen(naam,"w+");
    //Sluit bestand
    fclose(bestand);
    return 0;
}
