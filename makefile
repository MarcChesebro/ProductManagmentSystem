program: main.o pms.o
	gcc -o program main.c  pms.c

main.o: main.c pms.h pms.c
	gcc -c main.c

pms.o: pms.h pms.c
	gcc -c pms.c

clean:
	rm -f *.o program
