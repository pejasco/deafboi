# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Werror -Wextra -std=c++17 -I/usr/local/include/SDL3

# Manually specify SDL3 paths
SDL_LDFLAGS = -L/usr/local/lib -lSDL3

# Source files
SRCS = main.cpp App.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
TARGET = sdl3_app

# Build target
all: $(TARGET)

# Link object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET) $(SDL_LDFLAGS)

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean