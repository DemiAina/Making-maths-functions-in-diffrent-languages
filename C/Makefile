INC_DIR = -I/include

DEPS = $(INC_DIR)/mathsV.hDEPS = mathsV.h

CC = GCC

CFLAGS = -Wall -g

all: maths clean

%.o:%.c
	gcc $(CFLAGS) $< -o $@

maths: maths.o mathsV.o 
	gcc maths.o mathsV.o -o maths

maths.o: maths.c 
	gcc -c maths.c

mathsV.o :	./includes/mathsV.c	./includes/mathsV.h
	gcc -c 	./includes/mathsV.c

clean:
	rm *.o maths.exe
