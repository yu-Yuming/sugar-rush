#include <iostream>
#include <iterator>
#include <vector>
#include <sstream>

void memRight();
void memLeft();
void memInc();
void memDec();

static std::vector<int> memory(32768, 0);
static int ptr = 0;

int main() {
    /** Reading Code */
    std::string code;
    while (std::getline(std::cin, code)) {
        std::stringstream ss(code);
        std::vector<std::string> words{std::istream_iterator<std::string> (ss), std::istream_iterator<std::string> ()};
        for (const std::string & word : words) {
            if (word == "쨔무") {
                memRight();
            } else if (word == "냠무") {
                memLeft();
            } else if (word == "민트초코") {
                memInc();
            } else if (word == "오오") {
                memDec();
            }
        }
    }

    return 0;
}

void memRight() {
    ptr -= 1;
}

void memLeft() {
    ptr += 1;
}

void memInc() {
    memory[ptr] += 1;
}

void memDec() {
    memory[ptr] -= 1;
}