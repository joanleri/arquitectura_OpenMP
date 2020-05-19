/*
*   hello_worlds.c
*   Arquitectura de Compuptadoras - ITAM 2020
*   Práctica 5: Programación Multihilos con OpenMP
*   José Antonio Lechuga & Victor Daniel Cruz
*/

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char **argv) {

    if (argc == 2) {
        omp_set_num_threads(atoi(argv[1]));
    } else {
        printf("Uso: %s <num hilos>\n", argv[0]);
        exit(-1);
    }

    #pragma omp parallel
    {
    int i;
    printf("Hello World\n");
    for(i=0;i<6;i++)
        printf("Iter:%d\n",i);
    }
    printf("GoodBye World\n");
}