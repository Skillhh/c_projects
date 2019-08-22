node: node.c node.so
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra node.c -L. -o node

node.so: libnode.c libnode.h
	gcc -std=c11 -Wall -fmax-errors=10 -Wextra -c libnode.c -o node.so

launch: node
	./node
