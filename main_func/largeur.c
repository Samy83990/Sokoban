/*
** EPITECH PROJECT, 2023
** B-PSU-100-MAR-1-1-sokoban-samy.chakrouni
** File description:
** largeur
*/

#include "../include/my.h"

int largeur(char *str)
{
    int i = 1;

    while (str[i] != '\n')
        i++;
    return i - 1;
}
