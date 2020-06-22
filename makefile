CC = gcc
CFLAGS = -Wall -g
OBJS = hw8Main.c register8.o print8.o search8.o delete8.o sort8.o
main8 : $(OBJS)
	$(CC) -o main8 $(OBJS)
%.o : %.c
	$(CC) -c -o $@ $(CFLAGS) $<
clean:
	rm *.o main8
 
