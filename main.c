#include "filereading.h"
#include "filereading.c"
#include "verif_sol.c"
#include "headers.h"


int main() {
    int size;
    int **tab;
    int *demand;
    int *constraints;

    //IL FAUT ENVOYER LES ADRESSE !!
    size = read_from_file("data/bayg29_10_1.dat", &tab, &demand, &constraints);
    printf("%d\n", size);
    print_tab(size, tab);

    int etape[4];
    etape[0]=2;
    etape[1]=3;
    etape[2]=5;
    etape[3]=5;

    int test = verif_sol(tab, 0, 7, etape,4);
    printf(" test verif : %d \n" ,test);

}
