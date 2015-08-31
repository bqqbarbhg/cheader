void *memcpy(void *dst, const void *src, size_t size);

void *memmove(void *dst, const void *src, size_t size);

char *strcpy(char *dst, const char *src);

char *strncpy(char *dst, const char *src, size_t size);

char *strcat(char *dst, const char *src);

char *strncat(char *dst, const char *src, size_t size);

int memcmp(const void *a, const void *b, size_t size);

int strcmp(const char *a, const char *b);

int strcoll(const char *a, const char *b);

int strncmp(const char *a, const char *b, size_t size);

size_t strxfrm(char *dst, const char *src, size_t size);

void *memchr(const void *buffer, int value, size_t size);

char *strchr(const char *str, int value);

size_t strcspn(const char *str, const char *values);

char *strpbrk(const char *str, const char *values);

char *strrchr(const char *str, int value);

size_t strspn(const char *str, const char *values);

char *strstr(const char *str, const char *substring);

char *strtok(char *str, const char *token);

void *memset(void *dst, int value, size_t size);

char *strerror(int errnum);

size_t strlen(const char *str);

