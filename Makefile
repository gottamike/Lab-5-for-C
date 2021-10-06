lab5: main.o thousands.o hundreds.o tenths.o singles.o buildString.o
	g++ -o lab5 main.o thousands.o hundreds.o tenths.o singles.o buildString.o

main.o: main.cpp
	g++ -c -Wall main.cpp

thousands.o: thousands.cpp
	g++ -c -Wall thousands.cpp

hundreds.o: hundreds.cpp
	g++ -c -Wall hundreds.cpp

tenths.o: tenths.cpp
	g++ -c -Wall tenths.cpp

singles.o: singles.cpp
	g++ -c -Wall singles.cpp

buildString.o: buildString.cpp
	g++ -c -Wall buildString.cpp
