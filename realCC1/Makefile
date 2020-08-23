# Author: Corey Wurl
# NDID: 902091236
#
# This is a makefile for CC1

# GCC compiler for C++
PP := g++

# Flags used
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Pascal
pascalObjs := pascal.o fundamental.o

pascal: $(pascalObjs)
	$(PP) $(CXXFLAGS) -o pascal $(pascalObjs)
	./pascal

pascal.o: pascal.cpp pascal.h
	$(PP) $(CXXFLAGS) -c pascal.cpp

fundamental.o: fundamental.cpp pascal.h
	$(PP) $(CXXFLAGS) -c fundamental.cpp

# Fibonacci
fibObjs := fibonacci.o fibTest.o

creative: $(fibObjs)
	$(PP) $(CXXFLAGS) -o creative $(fibObjs)
	./creative

fibonacci.o: fibonacci.cpp fibonacci.h pascal.h
	$(PP) $(CXXFLAGS) -c fibonacci.cpp

fibTest.o: fibTest.cpp fibonacci.h pascal.h
	$(PP) $(CXXFLAGS) -c fibTest.cpp

# Make all
all: pascal creative

# Make clean
clean:
	rm -rf *.o pascal creative
