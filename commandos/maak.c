//Standaard bibliotheek geimporteerd
#include <stdlib.h>
//invoer uitvoer lib
#include <stdio.h>

//Funcite maak gemaakt
int maak(char naam[500]) {
    //Maakt een bestand of opent het
    FILE *bestand = fopen(naam,"w+");
    //Sluit het bestand
    fclose(bestand);
    return 0;
}