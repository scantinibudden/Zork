CC := g++

NAME := zork
SRC := src
FLAGS := -I $(SRC)/headers

TEST_NAME := test
TEST_SRC := $(shell find . -name 'tests')
TEST_FLAGS := -lgtest -lgtest_main -pthread -I $(TEST_SRC)/headers

OBJ := bin

# List of source files in the src directory
SRC_FILES := $(shell find $(SRC) -name '*.cpp' -not -name 'test*.cpp')

# Generate corresponding object file names
OBJ_FILES := $(patsubst $(SRC)/%.cpp,$(OBJ)/%.o,$(SRC_FILES))

# List of source files in the test directory
TEST_SRC_FILES := $(shell find $(SRC) $(TEST_SRC) -name '*.cpp' -not -name 'main.cpp')

# Generate corresponding test object file names
TEST_OBJ_FILES := $(patsubst $(SRC)/%.cpp,$(OBJ)/%.o,$(TEST_SRC_FILES))

.PHONY: all clean

all: $(NAME) $(TEST_NAME)

$(NAME): $(OBJ_FILES)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ_FILES)

$(TEST_NAME): $(OBJ_FILES)
	$(CC) $(FLAGS) $(TEST_FLAGS) -o $(TEST_NAME) $(TEST_OBJ_FILES)

$(OBJ)/%.o: $(SRC)/%.cpp
	@mkdir -p $(@D)
	$(CC) -c $< -o $@ $(FLAGS)

$(OBJ)/TEST_SRC/%.o: $(TEST_SRC)/%.cpp
	@mkdir -p $(@D)
	$(CC) -c $< -o $@ $(FLAGS) $(TEST_FLAGS)

clean:
	rm -rf $(OBJ) $(NAME) $(TEST_NAME)