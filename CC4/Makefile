# Author: Corey Wurl
# NDID: 902091236
# This is a makefile for CC4

# GCC compiler for C++
PP := g++

# Flags used 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 

INC := include
SRC := src
OBJ := obj
EXE := exe

# Command: make Prob1
pacificObjs := $(OBJ)/pacific.o

Prob1: $(pacificObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob1 $(pacificObjs)
	$(EXE)/./Prob1

$(OBJ)/pacific.o: $(SRC)/Prob1.cpp $(INC)/Pacific.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob1.cpp -o $@

# Command: make initialize
initialize: 
	mkdir $(OBJ) $(EXE)

# Command: make all
all: Prob1

# Command: make clean
clean:
	rm -rf *.o $(OBJ)/* $(EXE)/*
