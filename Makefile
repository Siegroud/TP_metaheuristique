CC = gcc

#CFLAGS = -Wall -Wextra -g
TARGET = a.out

SRCS = main.c filereading.c tsp.c verif_sol.h

OBJS = $(SRCS:.c=.o)

HEADERS = headers.h

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm -f $(OBJS) $(TARGET)