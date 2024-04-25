/*
** EPITECH PROJECT, 2023
** B-PSU-100-MAR-1-1-sokoban-samy.chakrouni
** File description:
** move
*/

#include "../include/my.h"

void gauche(char **map, int new_x, int new_y, int i)
{
    int j;

    if (new_y > 0 && map[new_x][new_y - 1] == ' ') {
        map[new_x][new_y - 1] = 'P';
        map[new_x][new_y] = ' ';
    }
    if (map[new_x][new_y - 1] == 'X') {
    if (map[new_x][new_y -2] == ' ') {
        map[new_x][new_y - 1] = 'P';
        map[new_x][new_y] = ' ';
        map[new_x][new_y - 2] = 'X';
    }
    if (map[new_x][new_y - 2] == 'O') {
        map[new_x][new_y - 1] = 'P';
        map[new_x][new_y] = ' ';
        map[new_x][new_y - 2] = 'X';
    }
    }
}

void droite(char **map, int new_x, int new_y)
{
    int i;
    int j;

    if (new_y > 0 && map[new_x][new_y + 1] == ' ') {
        map[new_x][new_y + 1] = 'P';
        map[new_x][new_y] = ' ';
    }
    if (map[new_x][new_y + 1] == 'X') {
    if (map[new_x][new_y + 2] == ' ') {
        map[new_x][new_y + 1] = 'P';
        map[new_x][new_y] = ' ';
        map[new_x][new_y + 2] = 'X';
    }
    if (map[new_x][new_y + 2] == 'O') {
        map[new_x][new_y + 1] = 'P';
        map[new_x][new_y] = ' ';
        map[new_x][new_y + 2] = 'X';
    }
    }
}

void bas(char **map, int new_x, int new_y)
{
    int i;
    int j;

    if (new_y > 0 && map[new_x + 1][new_y] == ' ') {
        map[new_x + 1][new_y] = 'P';
        map[new_x][new_y] = ' ';
    }
    if (map[new_x + 1][new_y] == 'X') {
    if (map[new_x + 2][new_y] == ' ') {
        map[new_x + 1][new_y] = 'P';
        map[new_x][new_y] = ' ';
        map[new_x + 2][new_y] = 'X';
    }
    if (map[new_x + 2][new_y] == ' ' || map[new_x + 2][new_y] == 'O') {
        map[new_x + 1][new_y] = 'P';
        map[new_x][new_y] = ' ';
        map[new_x + 2][new_y] = 'X';
    }
    }
}

void haut(char **map, int new_x, int new_y)
{
    int i;
    int j;

    if (new_y > 0 && map[new_x - 1][new_y] == ' ') {
        map[new_x - 1][new_y] = 'P';
        map[new_x][new_y] = ' ';
    }
    if (map[new_x - 1][new_y] == 'X') {
    if (map[new_x - 2][new_y] == ' ' || map[new_x - 2][new_y] == 'O') {
        map[new_x - 1][new_y] = 'P';
        map[new_x][new_y] = ' ';
        map[new_x - 2][new_y] = 'X';
    }
    }
}

void moove(char **map, int new_x, int new_y, int i)
{
    switch (i) {
    case KEY_LEFT:
        gauche(map, new_x, new_y, i);
        break;
        case KEY_RIGHT:
        droite(map, new_x, new_y);
        break;
    case KEY_DOWN:
        bas(map, new_x, new_y);
        break;
    case KEY_UP:
        haut(map, new_x, new_y);
        break;
    }
}
