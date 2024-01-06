#include "filereading.h"
#include "tsp.h"
#include "verif_sol.h"
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

    int depart = get_start(demand, size);
    findPath(tab, size, depart,0,1,0,demand);
}
