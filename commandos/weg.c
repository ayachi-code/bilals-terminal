//Standaard bibliotheek geimporteerd
#include <stdlib.h>
//invoer uitvoer lib
#include <stdio.h>



//Weg functie gemaakt met als parameter naam van bestand
int weg(char naam[500]){
    //Verijderd het bestand als parameter
    remove(naam);
    return 0;
}

