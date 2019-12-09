#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

#include "io.h"

char * get_name_from_keyboard(char * store) {
    printf("Name eingeben: ");
    scanf("%s", store);
    return store;
}
