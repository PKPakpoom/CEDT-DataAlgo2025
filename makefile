file ?= main

CC = g++
CXXFLAGS = -std=c++14 -O0

run:
	@$(CC) $(CXXFLAGS) $(file) -o main
	@./main

clean:
	@rm -f main
