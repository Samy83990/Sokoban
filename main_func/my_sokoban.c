/*
** EPITECH PROJECT, 2023
** B-PSU-100-MAR-1-1-sokoban-samy.chakrouni
** File description:
** my_sokoban
*/

#include "../include/my.h"

char **str_to_array_sc(int hauteur, int largeur, char *filename)
{
    int i = 0;
    int j = 0;
    int z = 0;
    char **map = malloc(sizeof(char *) * (hauteur + 1));

    while (i < hauteur) {
        map[i] = (char *)malloc(sizeof(char) * (largeur + 1));
        map[i][largeur] = '\0';
        i++;
    }
    for (i = 0; filename[z] != '\0'; i++) {
        for (j = 0; filename[z] != '\n' && filename[z] != '\0'; j++) {
            map[i][j] = filename[z];
            z++;
        }
        if (filename[z] == '\n')
        z++;
    }
    map[hauteur] = NULL;
    return map;
}

static char *fichier_to_string(char *filename)
{
    char c;
    int fdsc;
    int i = 0;
    char *str = malloc(sizeof(char) * 100000);

    fdsc = open(filename, O_RDONLY);
    if (fdsc < 0)
        exit(84);
    c = '\0';
    while (read(fdsc, &c, 1)) {
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    return str;
}

void suite(char **map, int *new_x, int *new_y, int i)
{
    for (int l = 0; map[i][l] != '\0'; l++) {
            if (map[i][l] == 'P') {
                *new_x = i;
                *new_y = l;
            }
        }
}

void find_player(char **map, int *new_x, int *new_y)
{
    for (int i = 0; map[i] != NULL; i++) {
        suite(map, new_x, new_y, i);
    }
}

void joueur(char **map, int i)
{
    int new_x;
    int new_y;

    find_player(map, &new_x, &new_y);
    moove(map, new_x, new_y, i);
}

int main(int argc, char **argv)
{
    int key;
    char *map_str;
    int hauteur_map;
    int largeur_map;
    char **map;

    if (argc >= 2 && my_strcmp(argv[1], "-h") == 0)
        my_putstr("Sokoban is a type of transport puzzle");
    else if (argc >= 2)
        fichier_to_string(argv[1]);
    map_str = fichier_to_string(argv[1]);
    hauteur_map = hauteur(map_str);
    largeur_map = largeur(map_str);
    map = str_to_array_sc(hauteur_map, largeur_map, map_str);
    key = getch();
    remain(key, map, hauteur_map, largeur_map);
    endwin();
    return 0;
}
