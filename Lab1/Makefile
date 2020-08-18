# Author: Corey Wurl
# NDID: 902091236
#
# This is the Makefile for Lab1

# GCC compiler for C++
PP := g++

# The various flags used
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)

# Lab1a
Lab1aObjs := Lab1a.o

Lab1a: $(Lab1aObjs)
	$(PP) $(CXXFLAGS) -o Lab1a $(Lab1aObjs)

Lab1a.o: Lab1a.cpp
	$(PP) $(CXXFLAGS) -c Lab1a.cpp


# Lab1b
Lab1bObjs := Lab1b.o

Lab1b: $(Lab1bObjs)
	$(PP) $(PQCXX) -o Lab1b $(Lab1bObjs)

Lab1b.o: Lab1b.cpp
	$(PP) $(PQCXX) -c Lab1b.cpp


# Lab1c
Lab1cObjs := Lab1c.o

Lab1c: $(Lab1cObjs)
	$(PP) $(PQCXX) -o Lab1c $(Lab1cObjs)

Lab1c.o: Lab1c.cpp
	$(PP) $(PQCXX) -c Lab1c.cpp


# Make all
all: Lab1a Lab1b Lab1c


# Make clean
clean:
	rm -rf *.o Lab1a Lab1b Lab1c


