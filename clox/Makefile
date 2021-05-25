# # the compiler: gcc for C program, define as g++ for C++
CC = gcc -g

# # compiler flags:
# #  -g    adds debugging information to the executable file
# #  -Wall turns on most, but not all, compiler warnings
# CFLAGS  = -g -Wall

# # the build target executable:
# TARGET = main clox

# all: $(TARGET)

# $(TARGET): $(TARGET).c
# 	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

# run: $(TARGET)
# 	./$(TARGET)

CFILES   = $(wildcard *.c)
OBJFILES = $(CFILES:.c=.o)

OUT      = clox

$(OUT): $(OBJFILES)
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c -o $@ $^

.PHONY: clean
clean:
	rm -f $(OBJFILES) $(OUT)
