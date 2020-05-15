CC=g++
CCFLAGS=

%.o : %.cpp
	$(CC) $(CCFLAGS) -o $@ $^

realmake: app

app: main.o
	mv main.o app

clena: clean
clean:
	@-rm *.o
	@-rm *~
	@-rm core
	clear
