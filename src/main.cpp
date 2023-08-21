#include <testmain.h>
#include <cstring>

////////////////// Main

int main(int argc, char** argv) {
    for(int i = 1; i < argc; ++i) {
        if(strcmp(argv[i], "test") == 0) {
            return runTests(argc, argv);
        }
    }

    return 0;
}