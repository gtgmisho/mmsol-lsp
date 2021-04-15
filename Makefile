.DEFAULT_GOAL := execfile
.PHONY: all clean
all: main.o calc_sum.o

main.o: main.c calc_sum.h
	gcc -c main.c
calc_sum.o: calc_sum.c calc_sum.h
	gcc -c calc_sum.c
execfile: main.o calc_sum.o
	gcc -o execfile main.o calc_sum.o
clean:
	rm execfile main.o calc_sum.o
