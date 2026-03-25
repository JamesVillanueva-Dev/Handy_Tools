# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

# Output executable
TARGET = search_test.exe

# Source files
SRC = search_test.c \
      binary_search/binary_search.c \
      exponential_search/exponential_search.c \
      linear_search/linear_search.c

# Default target
all: $(TARGET)

# Build the executable
$(TARGET):
	$(CC) $(SRC) -o $(TARGET)

# Clean up build
clean:
	del $(TARGET)