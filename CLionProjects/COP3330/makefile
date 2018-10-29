diamond: diamond.o main.o
	g++ -o diamond main.o diamond.o

diamond.o: diamond.cpp diamond.h 
	g++ -c diamond.cpp

main.o: main.cpp diamond.h
	g++ -c main.cpp

clean:
	rm -f *.o diamond
