//Standaard bibliotheek geimporteerd
#include <stdlib.h>
//invoer uitvoer lib
#include <stdio.h>
//String libary die funcite heeft die handig zijn wat te maken heeft met strings.
#include <string.h>
//Importeerd maak.c bestand
#include "commandos/maak.c"
//Importeer werwijder.c bestand gemaakt
#include "commandos/weg.c"


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
    //Zoekt in string naar het woord maak
    char *zoek_maak_functie = strstr(de_input_waarden,"maak");
    //Zoekt naar weg in string scanf
    char *zoek_verwijder_functie = strstr(de_input_waarden,"weg");
    //If statement die de comandos mogelijk maakt uittevoeren
    if (!strcmp(de_input_waarden,"clear")) {
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    } else if(zoek_maak_functie) {
        //Als maak gevonden is dus al iemand maak uitvoerd dan word dit uitgevoerd...
        printf("Er word een bestand gemaakt... \n");
        //Hier word uiteindelijke de paramteter opgeslagen en dan word het bestand gemaakt
        char *nieuwe_woord;
        //zoekt de karakter spatie karakter is opgeslagen in variablen
        char *zoek = " ";
        //Splits het woord waar spatie is en pakt de eerste woord dus maak
        nieuwe_woord = strtok(de_input_waarden,zoek);
        //Splits het tussen nul en de spatie en dat geeft als gevolg het naam van de bestand
        nieuwe_woord = strtok(NULL,zoek);
        //Maakt nu ene bestand van de 2e parameter en roept de maak functie die ik heb gemaakt aan
        maak(nieuwe_woord);
    } else if(zoek_verwijder_functie) {
        //Als verwijder is gevonden voer onder uit
        printf("bestand word verwijders \n");
        //Hier word uiteindelijke de paramteter opgeslagen en dan word het bestand verwijderd
        char *nieuwe_woord;
        //Dit zoekt hij in de string om de string te splitsen en dat is eem spatie
        char *spatie = " ";
        //Split de string tussen de woord en de spatie
        nieuwe_woord = strtok(de_input_waarden,spatie);
    }
}  
    return 0;
}