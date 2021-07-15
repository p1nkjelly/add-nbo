#Makefile
all: add-nbo

add-nbo: nbo_read.o nbo_sum.o main.o
	g++ -o add-nbo nbo_sum.o nbo_read.o main.o

nbo_read.o: nbo_read.h nbo_read.c

nbo_sum.o: nbo_sum.h nbo_sum.c

main.o: nbo_read.h nbo_sum.h main.c

clean:
	rm -f add-nbo
	rm -f *.o
