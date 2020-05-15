CC=g++
CCFLAGS=
INCLUDES=

%.o : %.cpp
	$(CC) $(CCFLAGS) $(INCLUDES) -o $@ $^

realmake: test.o
	mv test.o tester

clena: clean
clean:
	@-rm *.o
	@-rm *~
	@-rm core
	clear
