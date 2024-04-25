/*
** EPITECH PROJECT, 2023
** B-PSU-100-MAR-1-1-sokoban-samy.chakrouni
** File description:
** hauteur
*/

#include "../include/my.h"

int hauteur(char *str)
{
    int i = 1;
    int hauteur = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            hauteur++;
        i++;
    }
    return hauteur;
}
