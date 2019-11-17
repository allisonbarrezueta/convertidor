bin/convertidor: obj/convertidor.o
	gcc obj/convertidor.o -o bin/convertidor

obj/convertidor.o: src/convertidor.c
	gcc -Wall -c src/convertidor.c -o obj/convertidor.o

.PHONY: clean
clean:
	rm bin/* obj/*

.PHONY: run
run: bin/convertidor
	bin/convertidor
