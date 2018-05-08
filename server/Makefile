CC = g++
CC_FLAGS = -w -std=c++11

EXEC = SocketWrapper
OBJECTS = $(SOURCES:.cpp=.o)
SOURCES = $(wildcard *.cpp)

$(EXEC): $(OBJECTS)
		$(CC) $(OBJECTS) -o $(EXEC)

%.o: %.cpp
	$(CC) -c $(CC_FLAGS) $< -o $@

clean:
	rm -f $(EXEC) $(OBJECTS)