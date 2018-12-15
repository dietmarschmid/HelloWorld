LIBS     = -O2 -liostream -lfstream -lstdlib -lstring
CC=g++
OBJECTS=main.o foo.o
prog: $(OBJECTS)
	$(CC) -o prog $(OBJECTS) 

foo.o: src/foo.cc
	$(CC) -c src/foo.cc

main.o: src/main.cc
	$(CC) -c src/main.cc -I /home/didi/HelloWorld/src
	
clean:
	rm -f $(OBJECTS)
	rm -f prog
