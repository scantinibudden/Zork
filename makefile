CC := g++

NAME := zork
SRC := src
FLAGS := -lgtest -lgtest_main -pthread -I "include"

OBJ := bin

# List of source files in the src directory
SRC_FILES := $(shell find $(SRC) -name '*.cpp')

# Generate corresponding object file names
OBJ_FILES := $(patsubst $(SRC)/%.cpp,$(OBJ)/%.o,$(SRC_FILES))

$(NAME): $(OBJ_FILES)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ_FILES)


$(OBJ)/%.o: $(SRC)/%.cpp
	@mkdir -p $(@D)
	$(CC) -c $< -o $@ $(FLAGS)

.PHONY: clean

clean:
	rm -rf $(OBJ) $(NAME) $(TEST_NAME)