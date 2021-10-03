compiler = g++

compile: argmax.o main.o
	$(compiler) argmax.o main.o -o main

argmax.o: libs/argmax.cpp
	$(compiler) -c  libs/argmax.cpp

main.o: main.cpp
	$(compiler) -c main.cpp

run: main
	./main

clean:
	rm *.o deepSea_result_1.out main


