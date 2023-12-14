CC=gcc
CFLAGS=-pthread -I. -Wall
binaries=exec.c
all: $(binaries)
clean:
	$(RM) -f $(binaries) *.o