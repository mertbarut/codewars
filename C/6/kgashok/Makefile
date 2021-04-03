
CC=gcc
CFLAGS=-g -Wall
BINS=longest_palindrome

all: $(BINS)

%: %.C
	$(CC) $CFLAGS $^ -o $@

clean:
	$(RM) $(BINS)