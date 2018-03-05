CC = g++
CFLAGS = -c -Werror -Wall -Wextra

all: person

person: main.o person.o
	$(CC) main.o person.o -o person 

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

person.o: person.cpp person.h
	$(CC) $(CFLAGS) person.cpp	

run:
	./person
clean:
	rm -rf *.o $(all)
