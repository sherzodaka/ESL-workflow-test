simple_vector: main.o simple_vector.o
	gcc -o simple_vector main.o simple_vector.o

main.o: main.c simple_vector.h
	gcc -c main.c

simple_vector.o: simple_vector.c simple_vector.h
	gcc -c simple_vector.c

clean:
	rm -f main.o simple_vector.o simple_vector

.PHONY: clean