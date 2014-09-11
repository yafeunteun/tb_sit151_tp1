CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDFLAGS=
TARGET=exo2

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
exo2.o: exo2.c exo2.h
main.o: main.c exo2.h

exo2: main.o exo2.o

