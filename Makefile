OBJS = main.o sort.o num_io.o
PROJECT=rcd_clang_sort
CFLAGS=-Wall -pedantic -O3 -march=corei7 -c
LFLAGS=-Wall
CC=clang++

all: $(PROJECT)

$(PROJECT): $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o $(PROJECT)

main.o: main.cpp sort.h num_io.h
	$(CC) $(CFLAGS) main.cpp -o main.o

sort.o: sort.cpp sort.h
	$(CC) $(CFLAGS) sort.cpp -o sort.o

num_io.o: num_io.cpp num_io.h
	$(CC) $(CFLAGS) num_io.cpp -o num_io.o

clean:
	rm -rf $(PROJECT) *.[ogrs]*