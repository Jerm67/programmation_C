#include <stdio.h>
#include <stdlib.h>

int main() //
{

    //unsigned ; non sign� ex : unsigned short sn_entier
    //integer
    short sn_entier;
    int n_entier;
    long l_entier;

    printf("Taille en octet du short : %d\n",sizeof (sn_entier));
    printf("Taille en octet d entier : %d\n",sizeof (n_entier));
    printf("Taille en octet du long: %d\n",sizeof (l_entier));

    //reel
    //unsigned ; non sign� ex : unsigned float flt_reel
    float flt_reel;
    double dbl_reel;
    long double ldbl_reel;

    printf("Taille en octet du float : %d\n",sizeof (flt_reel));
    printf("Taille en octet du double : %d\n",sizeof (dbl_reel));
    printf("Taille en octet du long double: %d\n",sizeof (ldbl_reel));

    //caract�re
    char c_char;
    printf("Taille en octet du caractere: %d\n",sizeof (c_char));




    return 0;
}
