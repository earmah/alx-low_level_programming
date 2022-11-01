#!/bin/bash

/* Creates a static library from all the files w/i curr directory*/

gcc -Wall -Wextra -Werror -pedantic std=gnu89 -c *.c
ar -rc liball.a *.o
ranlib liball.a
