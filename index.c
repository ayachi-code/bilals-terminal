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
//Importeerd mkmap.c bestand gemaakt
#include "commandos/mkmap.c"
//OS libary unix geimporteerd
#include <unistd.h>
#include "commandos/wgmap.c"

//Main functie
int main(int argc, char **argv)
{
    //Huidigen map char variablen
    char huidigen_map[500];
    //De input waarden met een buffer van 500
    char de_input_waarden[500];
    //Loopt het want dan kan je meer commandos doen i.p.v een
    while (1 == 1) {
    //slaat huidigen map in var huidigen map
    getcwd(huidigen_map,sizeof(huidigen_map));
    //De input display text dit is wat je er naast haat typen..
    printf("Bilal:%s:shell>>> ",huidigen_map);
    //De input word opgeslagen in de in put waarden en staat spaties toe:)
    scanf("%[^\n]%*c",de_input_waarden);
    //Zoekt in string naar het woord maak
    char *zoek_maak_functie = strstr(de_input_waarden,"maak");
    //Zoekt naar weg in string scanf
    char *zoek_verwijder_functie = strstr(de_input_waarden,"weg");
    //Zoekt naar mkmap  in string scanf
    char *zoek_maakmap_functie = strstr(de_input_waarden,"mkmap");
    //Zoekt naar wgmap in string scanf
    char *zoek_wgmap_functie = strstr(de_input_waarden,"wgmap");
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
        //Split de string tussen NULL en spatie als gevolg de besand naam die verwijder moet worden
        nieuwe_woord = strtok(NULL,spatie);
        //Verwijderd het bestand met niewe_woord
        weg(nieuwe_woord);
    }else if(zoek_maakmap_functie) {
        //Dit word uiteindelijke de value van het maken van een map
        char *nieuwe_woord;
        //Zoekt karakter waar hij kan splitsen
        char *karakters = " ";
        //Split ze met behulp van de spatie waar hij het weet
        nieuwe_woord = strtok(de_input_waarden,karakters);
        //Splits z edan met null en krijgt dan de value die we nodig hebben om te weten wat voor map wil de user maken.
        nieuwe_woord = strtok(NULL,karakters);
        //maakt de map...
        mkmap(nieuwe_woord);
    }else if(zoek_wgmap_functie) {
        //Als wgmap word uitgevoerd dan word deze if statement uitgevoerd
        //Dit word uiteindelijke de value van het verwijderen van het map
        char *nieuwe_woord;
        //Karakter waar het moet gesplits worden
        char *karater = " ";
    } else {
        //Als commando niet bestaat voer dit onder uit.....
        printf("Commando: %s bestaat niet :(  \n",de_input_waarden);
    }
}  
    return 0;
}