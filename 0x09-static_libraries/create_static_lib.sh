#!/bin/bash
gcc -Wall -Werror -Wextra -c *.c
ar -rc liball.a *.c
ranlib liball.a
