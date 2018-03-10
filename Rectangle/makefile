CC = g++
CFLAGS = -c -Werror -Wall -Wextra

car: main.o rectangle.o
	$(CC) main.o rectangle.o -o rectangle 

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

car.o: rectangle.cpp rectangle.h
	$(CC) $(CFLAGS) rectangle.cpp	

run:
	./rectangle
clean:
	rm -rf *.o rectangle
