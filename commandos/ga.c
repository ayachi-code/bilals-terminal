//Standaard bibliotheek geimporteerd
#include <stdlib.h>
//invoer uitvoer lib
#include <stdio.h>
//OS libary unix geimporteerd
#include <unistd.h>


//Ga functie gemaakt met argument als path locatie
int ga(char locatie[500]) {
    //Gaat naar path
    chdir(locatie);
    return 0;
}