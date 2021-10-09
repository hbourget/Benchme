CXX = gcc
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fpermissive -fsanitize=address

SRC = ./*.c
OBJ = $(SRC:.cc=.o)
EXEC = Benchme

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)

.PHONY: documentation
documentation: