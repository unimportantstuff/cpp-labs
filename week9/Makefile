CXX = clang++-10

run: main
	./romandigitconverter

main: romandigitconverter

romandigitconverter: romandigitconverter.o numberconversion.o
	$(CXX) numberconversion.o romandigitconverter.o -o romandigitconverter

romandigitconverter.o: numberconversion.o
	$(CXX) romandigitconverter.cpp -c -o romandigitconverter.o

numberconversion.o: numberconversion.cpp
	$(CXX) numberconversion.cpp -c -o numberconversion.o

clean:
	rm -f numberconversion.o romandigitconverter.o romandigitconverter

.PHONY: clean main run