#!/bin/bash
gcc -c -Wextra *.c;
ar -rc libmy.a *.o;
ranlib libmy.a;
