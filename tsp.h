#ifndef TSP_H
#define TSP_H
#include "headers.h"
void findPath(int **g, int nbSommets,int debut, int actuel, int prof, int dist, int *visite);
int get_start(int *tab, int size);
#endif