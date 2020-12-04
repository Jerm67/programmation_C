#ifndef DEFINE_H_INCLUDED
#define DEFINE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define TAILLE 11

//prototypes
extern void affiche_Tab (int MatriceEntiers2[TAILLE][TAILLE],int MatriceEntiers3[TAILLE][TAILLE], int i, int j, int nbx, int nby, char mon_char);
extern void debut_partie (int MatriceEntiers2[TAILLE][TAILLE], char mon_char);
extern void plac_Bateau (int MatriceEntiers2[TAILLE][TAILLE]);


#endif // DEFINE_H_INCLUDED
