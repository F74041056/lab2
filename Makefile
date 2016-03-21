all: calculate
calculate: calculate.o CalculateBMI.o
	g++ -o calculate.exe CalculateBMI.o calculate.o
calculate.o: calculate.cpp calculate.h
	g++ -c calculate.cpp
CalculateBMI.o: CalculateBMI.cpp calculate.h
	g++ -c CalculateBMI.cpp
clean:
	rm calculate -f *.o
