//Standaard bibliotheek geimporteerd
#include <stdlib.h>
//invoer uitvoer lib
#include <stdio.h>
//String libary die funcite heeft die handig zijn wat te maken heeft met strings.
#include <string.h>
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
    //De input word opgeslagen in de in put waarden en staat spaties toe:)
    scanf("%[^\n]%*c",de_input_waarden);
    //If statement die de comandos mogelijk maakt uittevoeren
    if (!strcmp(de_input_waarden,"clear")) {
        system("clear");
    } else if(!strcmp(de_input_waarden,"maak")) {
        printf("Er word een bestand gemaakt... \n");
    }
}  
    return 0;
}