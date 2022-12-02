
run:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main.out main_test.c mylib.o
	./main.out

time:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main_b_time.out main_b_time.c mylib.o
	./main_b_time.out

space:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main_b_space.out main_b_space.c mylib.o
	./main_b_space.out

clear:
	rm *.out
	rm *.o
	rm *.dat
	rm *.exe
