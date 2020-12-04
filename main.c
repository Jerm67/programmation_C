#include "define.h"




//variables globales
    int MatriceEntiers2[TAILLE][TAILLE];//={1,2,3,4,5,6,7,8,9,10,11}; //Mon tableau 2d
    int MatriceEntiers3 [TAILLE][TAILLE];
    int i=0, j=0, nbx=0, nby =1;

int main()
{
    char mon_char;

    debut_partie(MatriceEntiers2, mon_char);
    affiche_Tab(MatriceEntiers2, MatriceEntiers3, i, j, nbx, nby, mon_char);
    plac_Bateau (MatriceEntiers2);

}




