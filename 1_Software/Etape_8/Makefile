CC=gcc
LDFLAGS=-lm
EXEC=etape8
SRC=./src/etape8.c ./src/pgcd.c

OBJ= $(SRC:.c=.o)

CFLAGS=-O2 -Wall -DNDEBUG //pour executer en mode final -DNDEBUG

all: $(EXEC)

etape8: $(OBJ)
	$(CC) $(CFLAGS) -o ./bin/$@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean: $(OBJ)
	find . -name *.o -delete

mrproper: clean
	rm $(EXEC)
