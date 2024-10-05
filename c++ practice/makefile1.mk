testdate: Date.o testDate.o
    g++ -o $@ Date.o testdate.o

Date.o: Date.cpp Date.h
    g++ -c $<

testDate.o: testDate.cpp Date.h
    g++ -c testDate.cpp