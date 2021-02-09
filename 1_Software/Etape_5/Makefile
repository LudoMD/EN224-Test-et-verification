CC=gcc
LDFLAGS=-lm
EXEC=etape5
SRC=./src/etape5.c

OBJ= $(SRC:.c=.o)

CFLAGS=-O2 -Wall -DNDEBUG //pour executer en mode final -DNDEBUG

all: $(EXEC)

etape5: $(OBJ)
	$(CC) $(CFLAGS) -o ./bin/$@ $^ $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean: $(OBJ)
	find . -name *.o -delete

mrproper: clean
	rm $(EXEC)
