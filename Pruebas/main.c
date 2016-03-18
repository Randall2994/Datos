/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: randall
 *
 * Created on March 13, 2016, 12:00 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct planetas_t{
    char nombre[30];
    int starwards_code;
    char agua;
    char oxigeno;
    struct planetas_t *siguiente;
    
}planeta;


typedef struct idiomas_t{
    char nombre[30];
    char tipo;
    int simbolos;
    struct idiomas_t * siguiente;
    struct planetas_t *planeta;
}idioma;

typedef struct alien_t{
    char nombre[30];
    int id;
    char especie[20];
    struct planetas_t *planeta;
    struct idiomas_t *idioma;
    struct alien_t *siguiente;
}alien;






main() {
    alien*lista_aliens;
    lista_aliens=malloc(sizeof(alien));
    strcpy(lista_aliens->nombre,"Alien1: Kal El");
    printf("%s",lista_aliens->nombre);
}
