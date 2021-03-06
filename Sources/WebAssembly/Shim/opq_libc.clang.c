#import <string.h>

// Some implementations have been taken from WASI: https://github.com/CraneStation/wasi-libc

// MARK: - Strings

size_t strlen(const char *s) {
    const char *a = s;
    for (; *s; s++);
    return s-a;
}

void *memset(void *restrict dst, int c, size_t n) {
    char *d = (char *)dst;
    while (n-- != 0) {
        *d++ = c;
    }
    return dst;
}

void *memcpy(void *restrict dst, const void *restrict src, size_t n) {
    char *d = (char *)dst;
    const char *s = (const char *)src;
    while (n-- != 0) {
        *d++ = *s++;
    }
    return dst;
}
