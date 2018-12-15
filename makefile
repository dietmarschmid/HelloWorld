LIBS     = -O2 -liostream -lfstream -lstdlib -lstring
CC=g++
OBJECTS=main.o foo.o
prog: $(OBJECTS)
	$(CC) -o prog $(OBJECTS) 

main.o: src/main.cc
	$(CC) -c src/main.cc -I /home/didi/HelloWorld/src
	
foo.o: src/foo.cc
	$(CC) -c src/foo.cc

clean:
	ifneq ($(OBJECTS),)
    		rm -f $(OBJECTS)
	endif;
	ifneq (prog,)
    		rm -f prog
	endif
