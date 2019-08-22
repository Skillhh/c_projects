superimage: superimage.c libimage.so
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra superimage.c libimage.so -o superimage
libimage.so: libimage.c libimage.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c libimage.c -o libimage.so

launch: superimage
	./superimage
