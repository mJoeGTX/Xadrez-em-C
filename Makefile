CC = gcc
CFLAGS = -Iinclude -Wall

all: chess

chess: src/chess.c
	$(CC) $(CFLAGS) src/chess.c -o chess

clean:
	rm -f chess
