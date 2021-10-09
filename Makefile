CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fpermissive -fsanitize=address
LDFLAGS =  -fsanitize=address -fpermissive 

SRC = ./*.c
OBJ = $(SRC:.cc=.o)
EXEC = BenchMe

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)

documentation:
	doxygene Doxyfile