#include <stdio.h>
#include <stdlib.h>

int is_space(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    while (*str != '\0') {
        if (is_space(*str)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

char *strndup(const char *src, size_t n) {
    char *dst = malloc(n + 1);
    if (dst) {
        strncpy(dst, src, n);
        dst[n] = '\0';
    }
    return dst;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0')
        return NULL;

    int word_count = count_words(str);
    char **result = malloc((word_count + 1) * sizeof(char *));
    if (result == NULL)
        return NULL;

    int i = 0;
    int in_word = 0;
    char *start = str;

    while (*str != '\0') {
        if (!is_space(*str)) {
            if (!in_word) {
                in_word = 1;
                start = str;
            }
        } else if (in_word) {
            result[i] = strndup(start, str - start);
            if (result[i] == NULL) {
                for (int j = 0; j < i; j++)
                    free(result[j]);
                free(result);
                return NULL;
            }
            i++;
            in_word = 0;
        }
        str++;
    }

    if (in_word) {
        result[i] = strndup(start, str - start);
        if (result[i] == NULL) {
            for (int j = 0; j < i; j++)
                free(result[j]);
            free(result);
            return NULL;
        }
        i++;
    }

    result[i] = NULL;
    return result;
}

