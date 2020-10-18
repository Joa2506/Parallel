all: create

create: main.c
	gcc -g  -o sortering rnum_gen.c functionality.h sorting.c main.c

clean:
	-rm -f sortering
