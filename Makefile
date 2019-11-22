
all: convertidor

convertidor: main.o
	gcc -o convertidor main.o

main.o: ./include/main.h ./src/main.c
	gcc -c -I. ./src/main.c

.PHONY: clean

clean:
	rm convertidor *.o
