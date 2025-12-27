#include <iostream>
#include <vector>

static std::vector<int> memory(32768, 0);
static int ptr = 0;

int main() {
    return 0;
}

void memLeft() {
    ptr += 1;
}

void memRight() {
    ptr -= 1;
}

void memInc() {
    memory[ptr] += 1;
}

void memDec() {
    memory[ptr] -= 1;
}