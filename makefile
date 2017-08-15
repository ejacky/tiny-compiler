hz: mani.o
	gcc -g main.o

main.o: main.c
	gcc -g -c main.c

clean:
	rm -r hz main.o

