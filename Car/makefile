CC = g++
CFLAGS = -c -Werror -Wall -Wextra

car: main.o car.o
	$(CC) main.o person.o -o car 

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

car.o: car.cpp car.h
	$(CC) $(CFLAGS) car.cpp	

run:
	./car
clean:
	rm -rf *.o car
