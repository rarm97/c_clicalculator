CC = clang
CFLAGS = -Wall -Werror

all: calculator scratch 

calculator: calculator.c 
	$(CC) $(CFLAGS) calculator.c -o calculator

scratch: scratch.c
	$(CC) $(CFLAGS) scratch.c -o scratch

clean:
	rm -f calculator scratch
