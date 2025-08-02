CC = clang
CFLAGS = -Wall -Werror

all: calculator

calculator: main.c
	$(CC) $(CFLAGS) main.c -o calculator

clean:
	rm -f calculator
