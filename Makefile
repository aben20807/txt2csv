main: txt2csv.o main.o
	gcc -o main main.o txt2csv.o

main.o: main.c
	gcc -c main.c

txt2csv.o: txt2csv.c txt2csv.h
	gcc -c txt2csv.c

clean:
	rm *.o
	rm *.exe

