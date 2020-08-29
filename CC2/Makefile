# Author: Corey Wurl
# NDID: 902091236
# This is a makefile for Lab2

# GCC compiler for C++
PP := g++

# Flags used 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 

INC := include
SRC := src
OBJ := obj
EXE := exe

# Command: make fundamental
quickObjs := $(OBJ)/quick.o

fundamental: $(quickObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/fundamental $(quickObjs)
	$(EXE)/./fundamental

$(OBJ)/quick.o: $(SRC)/fundamental.cpp $(INC)/quick.h
	$(PP) $(CXXFLAGS) -c $(SRC)/fundamental.cpp -o $@

# Command: make initialize
initialize: 
	mkdir $(OBJ) $(EXE)

# Command: make all
all: fundamental

# Command: make clean
clean:
	rm -rf *.o $(OBJ)/* $(EXE)/*
