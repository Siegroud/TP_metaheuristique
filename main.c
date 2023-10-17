#include "filereading.h"
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
}
