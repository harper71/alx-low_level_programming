To use the I/O system calls `open`, `close`, `read`, and `write` in C, you typically include the `<unistd.h>` header file. These system calls are commonly used for file operations in Unix-like operating systems. Below is a brief explanation of each function along with an example of how to use them:

1. **open**: Opens a file and returns a file descriptor.

   ```c
   #include <fcntl.h>
   
   int open(const char *pathname, int flags, mode_t mode);
   ```

   Example:
   ```c
   int fd = open("example.txt", O_CREAT | O_WRONLY, 0644);
   if (fd == -1) {
       perror("open");
       exit(EXIT_FAILURE);
   }
   ```

2. **close**: Closes a file descriptor.

   ```c
   #include <unistd.h>
   
   int close(int fd);
   ```

   Example:
   ```c
   if (close(fd) == -1) {
       perror("close");
       exit(EXIT_FAILURE);
   }
   ```

3. **read**: Reads data from a file descriptor into a buffer.

   ```c
   #include <unistd.h>
   
   ssize_t read(int fd, void *buf, size_t count);
   ```

   Example:
   ```c
   char buffer[1024];
   ssize_t bytes_read = read(fd, buffer, sizeof(buffer));
   if (bytes_read == -1) {
       perror("read");
       exit(EXIT_FAILURE);
   }
   ```

4. **write**: Writes data from a buffer to a file descriptor.

   ```c
   #include <unistd.h>
   
   ssize_t write(int fd, const void *buf, size_t count);
   ```

   Example:
   ```c
   const char *message = "Hello, world!\n";
   ssize_t bytes_written = write(fd, message, strlen(message));
   if (bytes_written == -1) {
       perror("write");
       exit(EXIT_FAILURE);
   }
   ```

Remember to include appropriate error handling, as system calls may fail due to various reasons such as permission issues, non-existent files, or disk full errors.

