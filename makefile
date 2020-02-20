CC=gcc
CFLAGS=-Wall -Wextra -Wmissing-declarations -Wreturn-type \
-Wparentheses -Wunused -Wold-style-definition -Wundef -Wshadow \
-Wstrict-prototypes -Wswitch-default -Wunreachable-code
EXFLAGS=-g -std=gnu11

all: shuffle

run: shuffle
	shuffle

shuffle: shuffle.o

shuffle.o: shuffle.c
	$(CC) $(EXFLAGS) -c $(CFLAGS) shuffle.c
