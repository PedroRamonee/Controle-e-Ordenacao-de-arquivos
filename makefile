all: compile link run

delete:
	del *.o

compile:
	g++ -c main.cpp src/controller/*.cpp src/class/*.cpp src/functions/*.cpp

link:
	g++ *.o -o main 

run:
	./main.exe
