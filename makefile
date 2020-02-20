CC=gcc
CFLAGS=-Wall -Wextra -Wmissing-declarations -Wreturn-type \
-Wparentheses -Wold-style-definition -Wundef -Wshadow -Wunused \
-Wstrict-prototypes -Wswitch-default -Wunreachable-code
EXFLAGS=-g -std=gnu11
OBJ=shuffle.o list.o

all: shuffle

run: shuffle
	shuffle

shuffle: shuffle.o list.o
	$(CC) $(EXFLAGS) $(CFLAGS) $(OBJ) -o shuffle

shuffle.o: shuffle.c
	$(CC) $(EXFLAGS) -c $(CFLAGS) shuffle.c

list.o: list.c list.h
	$(CC) $(EXFLAGS) -c $(CFLAGS) list.c

clean:
	rm -f *.o shuffle
