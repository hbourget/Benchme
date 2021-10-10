CXX = g++

SRC = ./sources/*.c
OBJ = $(SRC:.cc=.o)
EXEC = Benchme

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)

.PHONY: documentation
documentation:
	doxygen