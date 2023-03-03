build:
	g++ -std=c++17 -c ./src/*.cpp
	mkdir -p obj && mv ./*.o ./obj
	g++ ./obj/*.o -o main

gui: ./src/*.cpp
	g++ -std=c++17 -c ./src/*.cpp -DGRAPHICS
	mkdir -p obj && mv ./*.o ./obj
	g++ ./obj/*.o -o gui -lsfml-graphics -lsfml-window -lsfml-system

all: build gui
