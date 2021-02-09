CC=gcc
LDFLAGS=-lm
EXEC=etape2
SRC=./src/etape2.c

OBJ= $(SRC:.c=.o)

CFLAGS=-O2 -Wall -DNDEBUG //pour executer en mode final -DNDEBUG

all: $(EXEC)

etape2: $(OBJ)
	$(CC) $(CFLAGS) -o ./bin/$@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean: $(OBJ)
	find . -name *.o -delete

mrproper: clean
	rm $(EXEC)
