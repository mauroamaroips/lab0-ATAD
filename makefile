default:
	gcc -Wall -o prog main.c input.c bmi.c
debug:
	gcc -Wall -o prog -g main.c input.c bmi.c
clean:
	rm -f prog
