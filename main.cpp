#include <iostream>
#include "testVDI.h"

using namespace std;
int open(char *fn, int mode);
void close(int fd);
ssize_t read(int fd, void *buf, size_t count);
ssize_t write(int fd, void *buf, size_t count);
off_t lseek(int fd, off_t offset, int anchor);
void displayBufferPage(uint8_t *buf, uint32_t count, uint32_t skip, uint64_t offset);
void displayBuffer(uint8_t *buf, uint32_t count, uint64_t offset);

int main() {
    displayBuffer(headerBuffer, 400, 0);

    return 0;
}
