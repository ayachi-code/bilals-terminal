//Standaard bibliotheek geimporteerd
#include <stdlib.h>
//invoer uitvoer lib
#include <stdio.h>
//Mappen lib geimporteerd
#include <dirent.h>
//File system geimporteerd
#include <sys/stat.h>

//Mkmap functie, met naam char variablen
int mkmap(char naam[500]) {
    //Opent een map met parameter naam
    DIR *mapnaam = opendir(naam);
    //Sluit map
    closedir(mapnaam);
    return 0;
}