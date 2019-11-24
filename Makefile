bin/convertidor: obj/convertidor.o
	gcc obj/convertidor.o -o bin/convertidor

obj/convertidor.o: src/main.c
	gcc -Wall -c src/main.c -o obj/convertidor.o

.PHONY: clean, run
clean:
	rm bin/* obj/*

run: bin/convertidor
	bin/convertidor
