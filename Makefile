all: run

Tower.o : Tower.cpp Tower.h
	g++ -std=c++14 -c Vector.cpp

Disk.o : Disk.cpp Disk.h
	g++ -std=c++14 -c Vector.cpp

Game.o : Game.cpp Game.h
	g++ -std=c++14 -c Vector.cpp

main.o : main2.cpp
	g++ -std=c++14 -c main.cpp 

test: Tower.o Disk.o Game.o main.o
	g++ -o test Vector.o main.o

run: test
	./test

clean :
	rm *o 


