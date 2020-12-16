#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "stringutils.h"
#include "coders.h"


int main() {
    char cypher[6];
    printf("Enter the cypher (Caesar or XOR): ");
    scanf("%s", cypher);
    char text[200];
    printf("Enter the text: ");
    scanf("%s", text);

    if (strcmp(cypher, "Caesar") == 0) {
	    int offset;
	    printf("Enter the key: ");
        scanf("%d", &offset);
        printf("%s\n", muttableCaesarDecoder(text, offset));
    }
    else if (strcmp(cypher, "XOR") == 0) {
	    char password[200];
	    printf("Enter the password: ");
        scanf("%s", password);
        printf("%s\n", muttableXorCoder(text, password));
    }

    else {
	    printf("Incorrect data");
    }

    return 0;
}
