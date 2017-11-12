main:main.o PrintHello.o PrintWorld.o
	gcc -o $@ $^
.c.o:
	gcc -c $<
clean:
	rm -rf *.o main