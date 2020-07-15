CC=gcc
CFLAGS=-W -Wall -ansi -pedantic -std=c99 -g 
INC=-I include/
SRC=src/
EXEC=trier

all: $(EXEC)

trier: $(SRC)main.c $(SRC)lire.o $(SRC)lireligne.o $(SRC)trier.o 
	$(CC) $(INC) -o $(SRC)$@ $^ $(CFLAGS) 

$(SRC)%.o : $(SRC)%.c
	$(CC) $(INC) -o $@ -c $< $(CFLAGS) 

clean:
	rm -rf $(SRC)*.o
