#include <stdio.h>
#include <string.h>
#include "stringutils.h"
#include "coders.h"


int main() {
    char method[6];
    printf("Enter the method (Caesar or XOR): ");
    scanf("%s", method);
    char str[200];
    printf("Enter the text: ");
    scanf("%s", str);

    if (strcmp(method, "Caesar") == 0) {
	    int key;
	    printf("Enter the key: ");
	    scanf("%d", &key);
        muttableEndStrip(str);
        mutableToLower(str);
        muttableCaesarEncoder(str, key);
	    printf("%s\n", str);
    }
    if (strcmp(method, "XOR") == 0) {
	    char pass[200];
	    printf("Enter the pass: ");
       	scanf("%s", pass);
        muttableEndStrip(str);
        mutableToLower(str);
        muttableXorCoder(str, pass);
        printf("%s\n", str);
    }

    else {
	    printf("Incorrect data");
    }

    return 0;
}
