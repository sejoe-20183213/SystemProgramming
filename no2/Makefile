
foobar : main.o ./lib/libtest.so
	cd lib; make lib; cd ..
	gcc -o foobar main.o -L./lib -ltest
	
main.o : main.c
	gcc -c main.c

clean : 
	rm -f foobar main.o add.o substract.o multiply.o divide.o
