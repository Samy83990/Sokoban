/*
** EPITECH PROJECT, 2023
** B-PSU-100-MAR-1-1-sokoban-samy.chakrouni
** File description:
** main
*/

#include "../include/my.h"

void afficher_map(char **map, int hauteur, int largeur)
{
    int i;
    int j;

    initscr();
    raw();
    keypad(stdscr, TRUE);
    for (i = 0; i < hauteur; i++)
    mvprintw(i, 0, map[i]);
    refresh();
}

int remain(int key, char **map, int hauteur_map, int largeur_map)
{
    int new_x;
    int new_y;
    int i;

    while (key != ' ' ) {
        joueur(map, key);
        afficher_map(map, hauteur_map, largeur_map);
    key = getch();
    }
    for (int i = 0; i < hauteur_map; i++)
        free(map[i]);
    return 0;
}
