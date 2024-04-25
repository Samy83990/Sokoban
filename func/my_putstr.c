/*
** EPITECH PROJECT, 2023
** B-CPE-101-MAR-1-1-myprintf-samy.chakrouni
** File description:
** my_putstr
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "../include/my.h"

int my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return 0;
}
