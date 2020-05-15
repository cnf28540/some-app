CC=g++
CCFLAGS=
INCLUDES=-I.
LIBS=-L. -lgtest -lpthread

%.o : %.cpp
	$(CC) $(CCFLAGS) $(INCLUDES) -o $@ $^ $(LIBS)

realmake: test.o
	mv test.o tester

clena: clean
clean:
	@-rm *.o
	@-rm *~
	@-rm core
	clear
