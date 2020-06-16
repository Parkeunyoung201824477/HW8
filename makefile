CC=gcc
CFLAGS= -Wall -g
OBJS = hw7Main.c register7.o print7.o search7.o delete7.o sort7.o 
main_7 : $(OBJS)
	$(CC) -o main_7 $(OBJS)
%.o : %.c
	$(CC) -c -o $@ $(CFLAGS) $<
clean:
	rm *.o main_7

