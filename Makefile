txt2csv: txt2csv.o
	gcc -o txt2csv txt2csv.o

txt2csv.o: txt2csv.c txt2csv.h
	gcc -c txt2csv.c

clean:
	rm *.o
	rm *.exe

