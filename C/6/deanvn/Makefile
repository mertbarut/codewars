
CC=gcc
CFLAGS=-g -Wall
BINS=binary_to_string

all: $(BINS)

%: %.C
	$(CC) $CFLAGS $^ -o $@

clean:
	$(RM) $(BINS)