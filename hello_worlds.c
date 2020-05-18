/*
*   hello_worlds.c
*   Arquitectura de Compuptadoras - ITAM 2020
*   Práctica 5: Programación Multihilos con OpenMP
*   José Antonio Lechuga & Victor Daniel Cruz
*/

#include <stdio.h>
#include <omp.h>

#define NUM_THREADS 6

int main() {
    omp_set_num_threads(NUM_THREADS);
    #pragma omp parallel
    {
    int i;
    printf("Hello World\n");
    for(i=0;i<6;i++)
        printf("Iter:%d\n",i);
    }
    printf("GoodBye World\n");
}