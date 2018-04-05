//Standaard bibliotheek geimporteerd
#include <stdlib.h>
//invoer uitvoer lib
#include <stdio.h>
//Importeerd maak.c bestand
#include "commandos/maak.c"

//Main functie
int main(int argc, char **argv)
{

    //De input waarden met een buffer van 500
    char de_input_waarden[500];
    //Loopt het want dan kan je meer commandos doen i.p.v een
    while (1 == 1) {
    //De input display text dit is wat je er naast haat typen..
    printf("Bilal:shell>>> ");
    //De input word opgeslagen in de in put waarden
    scanf("%s",de_input_waarden);
    }
    return 0;
}