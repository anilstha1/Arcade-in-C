#ifndef WORDLE_H
#define WORDLE_H

#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>

void take_input(char user_word[6]);

void check_input(char user_word[6], char random_word[6]);

void playWordle();

#endif