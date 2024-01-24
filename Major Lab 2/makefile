all: Complete

Complete: test.c testA.o testB.o testC.o
	gcc -o Complete test.c testA.o testB.o testC.o

testB.c: testA.c
	tr 'A' 'B' < testA.c > testB.c

testC.c: testA.c
	tr 'A' 'C' < testA.c > testC.c

testA.o: testA.c
	gcc -c testA.c

testB.o: testB.c
	gcc -c testB.c

testC.o: testC.c
	gcc -c testC.c
