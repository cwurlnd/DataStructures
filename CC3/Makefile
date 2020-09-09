# Author: Corey Wurl
# NDID: 902091236
# This is a makefile for CC3

# GCC compiler for C++
PP := g++

# Flags used 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 

CLASSES := classes
PROGRAMS := programs
OBJ := obj
EXE := exe

# Command: make linear
linearObjs := $(OBJ)/linear.o

linear: $(linearObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/linear $(linearObjs)
	$(EXE)/./linear

$(OBJ)/linear.o: $(PROGRAMS)/Fundamental.cpp $(CLASSES)/LinearProbe.h
	$(PP) $(CXXFLAGS) -c $(PROGRAMS)/Fundamental.cpp -o $@


# Command: make double
doubleObjs := $(OBJ)/linear.o $(OBJ)/double.o

double: $(doubleObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/double $(doubleObjs)
	$(EXE)/./double

$(OBJ)/double.o: $(PROGRAMS)/Fundamental.cpp $(CLASSES)/DoubleHash.h $(CLASSES)/LinearProbe.h 
	$(PP) $(CXXFLAGS) -c $(PROGRAMS)/Fundamental.cpp -o $@


# Command: make initialize
initialize: 
	mkdir $(OBJ) $(EXE)

# Command: make all
all: linear double

# Command: make clean
clean:
	rm -rf *.o $(OBJ)/* $(EXE)/*
