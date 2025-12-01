CC = clang
CFLAGS = -Wall -Wextra -Werror

all: lab05

lab05: src/main.c
	$(CC) $(CFLAGS) src/main.c -o lab05

clean:
	rm -f lab05
