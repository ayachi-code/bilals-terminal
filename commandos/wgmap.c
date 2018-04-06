//Standaard bibliotheek geimporteerd
#include <stdlib.h>
//invoer uitvoer lib
#include <stdio.h>


//wgmap functie gemaakt als parameter naam
int wgmap(char naam[500]) {
    //Verwijderd map met als argument naam
    remove(naam);
    return 0;
}