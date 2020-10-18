
cc=gcc
arithdemo:arithdemo.o add.o sub.o
	$(cc) -o arithdemo arithdemo.o add.o sub.o
arithdemo.o:arithdemo.c
	$(cc) -c -o arithdemo.o arithdemo.c
add.o:add.c
	$(cc) -c -o add.o add.c
sub.o:sub.c
	$(cc) -c -o sub.o sub.c
clean:
	rm -rf *.o arithdemo






