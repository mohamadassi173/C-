CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=power.o basicMath.o
FLAGS= -Wall -g

all: mains maind

mains: mymaths main.o
	gcc -o mains main.o libmyMath.a


maind: mymathd main.o
	gcc -o maind main.o ./libmyMath.so


mymathd: $(OBJECTS_LIB)
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)
mymaths: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)	
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
main.o: main.c myMath.h 
	$(CC) $(FLAGS) -c main.c 

.CLEANWORK: clean all

clean:
	rm -f *.o *.a *.so mains maind
