#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 200  // Buffer size

int main() {
    char buffer[BUFFER_SIZE];
    ssize_t bytesRead;

    while ((bytesRead = read(STDIN_FILENO, buffer, BUFFER_SIZE)) > 0) {
        write(STDOUT_FILENO, buffer, bytesRead);
    }

    return 0;
}

