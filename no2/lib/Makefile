lib : add.o substract.o multiply.o divide.o
	gcc -shared -Wl,-soname,libtest.so.1 -o libtest.so.1.0.1 add.o substract.o multiply.o divide.o
	ln -s libtest.so.1.0.1 libtest.so
	ln -s libtest.so.1.0.1 libtest.so.1

add.o : add.c
	gcc -c add.c
substract.o : substract.c
	gcc -c substract.c
multiply.o : multiply.c
	gcc -c multiply.c
divide.o : divide.c
	gcc -c divide.c
clean :
	rm -f add.o substrarct.o multiply.o divide.o	

