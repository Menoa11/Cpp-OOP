CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

SRCS = player.cpp timer.cpp main.cpp game.cpp batting.cpp

TARGET = baseball.exe

all:
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET) *.exe *.o

.PHONY: all clean