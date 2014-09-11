CC=gcc
CFLAGS=-Wall -pedantic -std=c99
LDFLAGS=
TARGET=exo3

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
exo3.o: exo3.c exo3.h
main.o: main.c exo3.h

exo3: main.o exo3.o

