CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c11

SRCS = 01_age.c 02_majorite.c 03_note.c 04_calculatrice.c 05_cinema.c
EXEC = $(SRCS:.c=)

all: $(EXEC)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXEC)

.PHONY: all clean
