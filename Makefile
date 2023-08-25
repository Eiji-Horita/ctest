all: test

clean:
	rm test

test:
	gcc -o $@ test.c

