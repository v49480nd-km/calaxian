CC=clang++
CFLAGS=-std=c++17 -O3 -Werror -Wextra -Wall -Wfloat-equal -Wundef -Wshadow \
	   -Wformat=2 -Wpedantic
SRC=src
OBJ=obj
SRCS=$(wildcard $(SRC)/*.cpp)
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))
BIN=bin/calaxian

all: $(BIN)

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

clean:
	rm obj/*.o
