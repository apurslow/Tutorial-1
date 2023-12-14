CC=gcc
CFLAGS=-pthread -I. -Wall
binaries=exec execvp
all: $(binaries)
exec: exec.c
	$(CC) $(CFLAGS) -o $@ $<

execvp: execvp.c
	$(CC) $(CFLAGS) -o $@ $<
clean:
	$(RM) -f $(binaries) *.o
