/*
** EPITECH PROJECT, 2023
** B-CPE-101-MAR-1-1-myprintf-samy.chakrouni
** File description:
** my_putchar
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "../include/my.h"


void my_putchar(char c)
{
    write(1, &c, 1);
}
