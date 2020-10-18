
cc=gcc
builddemo:builddemo.o add.o sub.o
	$(cc) -o builddemo builddemo.o add.o sub.o
builddemo.o:builddemo.c
	$(cc) -c -o builddemo.o builddemo.c
add.o:add.c
	$(cc) -c -o add.o add.c
sub.o:sub.c
	$(cc) -c -o sub.o sub.c
clean:
	rm -rf *.o builddemo*/






