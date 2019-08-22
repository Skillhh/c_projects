main: main.c weather.so
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra main.c weather.so -o main

weather.so: weather.c weather.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c weather.c -o weather.so

launch: main
	./main
