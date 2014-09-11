CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDFLAGS=
TARGET=exo1

all: $(TARGET)

# Définition des règles
%.o: %.c %.h
	$(CC) $(CFLAGS) -c $< -o $@
%: %.o
	$(CC) $^ -o $@

clean:
	rm -rf *.o 

mrpropper:
	rm -rf *.o rm $(TARGET)

# Dépendances entre fichiers
exo1.o: exo1.c exo1.h
main.o: main.c exo1.h

exo1: main.o exo1.o

