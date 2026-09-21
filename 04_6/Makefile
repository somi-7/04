TARGET = 04_exercise_1.exe          # .exe 없음 (Windows는 program.exe)
SRCS = 04_exercise_1.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -g -Wall

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)