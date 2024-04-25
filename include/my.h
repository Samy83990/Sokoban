/*
** EPITECH PROJECT, 2023
** B-PSU-100-MAR-1-1-sokoban-samy.chakrouni
** File description:
** my_sokoban
*/

#ifndef MY_H_
    # define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <fcntl.h>
    #include <ncurses.h>

int largeur(char *str);
void my_putchar(char c);
void joueur(char **map, int i);
int hauteur(char *str);
int my_putstr(char const *str);
int remain(int key, char **map, int hauteur_map, int largeur_map);
void afficher_map(char **map, int hauteur, int largeur);
int my_strcmp(char const *s1, char const *s2);
char **str_to_array_sc(int hauteur, int largeur, char *filename);
static char *fichier_to_string(char *filename);
static void dessiner_map(char **map, int hauteur, int largeur);
void moove(char **map, int joueur_a, int joueur_b, int i);

#endif
