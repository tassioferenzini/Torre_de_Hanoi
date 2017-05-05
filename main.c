/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tassio
 *
 * Created on 14 de Abril de 2017, 18:42
 */

#include <stdio.h>
#include <stdlib.h>

int passos = 0;

void hanoi(int n, char orig, char dest, char aux) {
    if (n == 1) {
        printf("\nMove %c para %c", orig, dest);
        passos += 1;
    } else {
        hanoi(n - 1, orig, aux, dest);
        printf("\nMove %c para %c", orig, dest);
        passos += 1;
        hanoi(n - 1, aux, dest, orig);
    }
}

int main(int argc, char** argv) {

    int n = 3;

    hanoi(n, 'O', 'D', 'A');

    printf("\nNúmero de passos = %d", passos);

    return (EXIT_SUCCESS);
}

