CC=gcc
CFLAGS=-Wall -g
OBJS=register.o print.o search.o delete.o PhoneBookMain.o
main: $(OBJS)
	$(CC) -o main $(OBJS)
%.o : %.c
	$(CC) -c -o $@ $(CFLAGS) $<
clean:
	rm *.o main
 
