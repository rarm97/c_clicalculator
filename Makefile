CC = clang
CFLAGS = -Wall -Werror

all: calculator scratch 

calculator: main.c 
	$(CC) $(CFLAGS) main.c -o calculator

scratch: scratch.c
	$(CC) $(CFLAGS) scratch.c -o scratch

clean:
	rm -f calculator scratch
