CC=g++
LDFLAGS=-lm
EXEC=etape7
SRC=./src/etape7.cpp ./src/pgcd.cpp

OBJ= $(SRC:.cpp=.o)

CFLAGS=-O2 -Wall -std=c++11

all: $(EXEC)

etape7: $(OBJ)
	$(CC) $(CFLAGS) -o ./bin/$@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	find . -name *.o -delete

mrproper: clean
	rm $(EXEC)
