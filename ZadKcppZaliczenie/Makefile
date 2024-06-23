CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinclude
TARGET = program

SRCDIR = src
INCDIR = include
OBJDIR = obj

SOURCES = main.cc $(wildcard $(SRCDIR)/*.cc)
OBJECTS = $(SOURCES:.cc=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

main.o: main.cc
	$(CXX) $(CXXFLAGS) -c main.cc -o main.o

$(OBJDIR)/%.o: $(SRCDIR)/%.cc | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR) $(TARGET) *.o
