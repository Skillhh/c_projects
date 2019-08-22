digit: digit.c libdigit.so
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra digit.c libdigit.so -o digit

libdigit.so: libdigit.c libdigit.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c libdigit.c -o libdigit.so

launch: digit
	./digit
