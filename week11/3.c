#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
typedef short int16_t;

struct Try_t {
    const char * user;
    int16_t GG;
};

static struct Try_t * Try;
int main(void) {
    Try = malloc(sizeof(*Try));
    assert(Try != NULL);
    Try->user = "aryan";
    Try->GG = 1234;
    printf("%s\n", Try->user);
    free(Try);

    return 0;
}
