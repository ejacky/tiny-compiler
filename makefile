all: hz

hz: main.o util.o scan.o 
	gcc -g -o hz main.o util.o scan.o

main.o: main.c
	gcc -g -c main.c

util.o: util.c util.h globals.h
	gcc -g -c util.c

scan.o: scan.c scan.h util.h globals.h
	gcc -g -c scan.c

clean:
	rm -r hz main.o util.o scan.o 

