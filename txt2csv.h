#ifndef TXT2CSV_H
#define TXT2CSV_H

#define NO_FILE 0
#define T1 1

#include <stdio.h>
#include <stdlib.h> //for exit()
#include <string.h> //for strlen
#include <stdbool.h> //for bool
bool openFile(int, FILE **, FILE **);
bool writeFile(int, FILE **, FILE **);

#endif
