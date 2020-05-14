CC=g++
CCFLAGS=

%.o : %.cpp
	$(CC) $(CCFLAGS) -o $@ $^

realmake: main.o

clena: clean
clean:
	@-rm *.o
	@-rm *~
	@-rm core
	clear
