/* mochou-p/dependen.c/03-dynamic-loading/main.c */

#include <dlfcn.h>
#include <stdio.h>

int main(void) {
    void *handle;
    void (*print_message)(void);
    char *error;

    handle = dlopen("libother.so", RTLD_NOW);
    if (handle == NULL) {
        fprintf(stderr, "dlopen(\"libother.so\", RTLD_NOW) failed: %s\n", dlerror());
        return 1;
    }

    dlerror(); /* clear errors as a good citizen */
    print_message = dlsym(handle, "print_message");

    error = dlerror();
    if (error != NULL) {
        fprintf(stderr, "dlsym(handle, \"print_message\") failed: %s\n", error);
        if (dlclose(handle) != 0) {
            fprintf(stderr, "dlclose(handle) failed: %s\n", dlerror());
        }
        return 1;
    }

    if (print_message == NULL) {
        fprintf(stderr, "symbol \"print_message\" loaded, but points to NULL\n");
        if (dlclose(handle) != 0) {
            fprintf(stderr, "dlclose(handle) failed: %s\n", dlerror());
        }
        return 1;
    }

    print_message();

    if (dlclose(handle) != 0) {
        fprintf(stderr, "dlclose(handle) failed: %s\n", dlerror());
        return 1;
    }

    return 0;
}
