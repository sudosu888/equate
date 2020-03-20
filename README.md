# equate
This is the successor to my old CLI calculator 'badcalculator' which was originally gonna be another
new overhaul to calc.c, but instead I decided to make this a seperate project.

# Installation
compile equate.c with your preferred compiler -- I use cc

Linux: "cc equate.c -o equate && sudo mv equate /bin"

OpenBSD: "cc equate.c -o equate && doas mv equate /usr/local/bin"

# Syntax
./equate 'number' 'operator' 'number'

example: equate 2 + 2

Addition '+'

Subtraction '-'

Multiplication 'x'

Divition '/'
