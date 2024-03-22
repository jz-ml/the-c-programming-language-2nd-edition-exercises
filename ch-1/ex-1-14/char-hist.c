#include <stdio.h>

#define RESET 0

#define ALPHABET_LENGTH         26
#define ALPHABET_START_LOWER    'a'
#define ALPHABET_END_LOWER      'z'
#define ALPHABET_START_CAP      'A'
#define ALPHABET_END_CAP        'Z'

#define NUM_RANGE 10
#define NUM_START '0'
#define NUM_END   '9'

// Print histogram of the frequencies of different characters in its input.

int main()
{
    int i, j, c;
    int current_char, digits, digits_c, highest_digit;
    int alpha_chars[ALPHABET_LENGTH];
    int num_chars[NUM_RANGE];

    digits = RESET;
    highest_digit = RESET;
    digits_c = RESET;

    // Clear array indices
    for (i = RESET; i < ALPHABET_LENGTH; ++i) {
        alpha_chars[i] = RESET;
    }
    for (i = RESET; i < NUM_RANGE; ++i) {
        num_chars[i] = RESET;
    }

    // Collect user input and record frequency of different characters
    while ((c = getchar()) != EOF) {
        if ((c >= ALPHABET_START_LOWER && c <= ALPHABET_END_LOWER)) {
            ++alpha_chars[c - ALPHABET_START_LOWER];
        }
        if ((c >= ALPHABET_START_CAP && c <= ALPHABET_END_CAP)) {
            ++alpha_chars[c - ALPHABET_START_CAP];
        }
        if ((c >= NUM_START && c <= NUM_END)) {
            ++num_chars[c - NUM_START];
        }
    }

    // Find the frequency counts with the most digits
    // Alphabet characters
    for (i = RESET; i < ALPHABET_LENGTH; ++i) {
        digits = alpha_chars[i];
        digits_c = RESET;

        while (digits > RESET) {
            digits = digits / 10;
            ++digits_c;
        }

        if (digits_c > highest_digit) {
            highest_digit = digits_c;
        }
    }
    // Number characters
    for (i = RESET; i < NUM_RANGE; ++i) {
        digits = num_chars[i];
        digits_c = RESET;

        while (digits > RESET) {
            digits = digits / 10;
            ++digits_c;
        }

        if (digits_c > highest_digit) {
            highest_digit = digits_c;
        }
    }

    // Print histogram for the number of occurences of each letter
    for (i = 0; i < ALPHABET_LENGTH; ++i) {
        digits = alpha_chars[i];
        digits_c = RESET;

        // Display characters and their frequency count
        putchar(ALPHABET_START_CAP + i);
        printf("/"); 
        putchar(ALPHABET_START_LOWER + i);
        printf(" %d ", alpha_chars[i]);

        // Recount digits of current char frequency
        while (digits > RESET) {
            digits = digits / 10;
            ++digits_c;
        }

        // Compare with highest digit counted and calculate spaces
        for (j = (highest_digit - digits_c); j > RESET; --j) {
            printf(" ");
        }

        // Print histogram
        for (j = RESET; j < alpha_chars[i]; ++j) {
            printf("@");
        }
        printf("\n");
    }

    // Print histogram for the number of occurences of each number
    for (i = RESET; i < NUM_RANGE; ++i) {
        digits = num_chars[i];
        digits_c = RESET;

        // Display characters and their frequency count
        putchar(NUM_START + i);
        printf("   %d ", num_chars[i]);

        // Recount digits of current char frequency
        while (digits > RESET) {
            digits = digits / 10;
            ++digits_c;
        }

        // Compare with highest digit counted and calculate spaces
        for (j = (highest_digit - digits_c); j > RESET; --j) {
            printf(" ");
        }

        // Print histogram
        for (j = RESET; j < num_chars[i]; ++j) {
            printf("@");
        }
        printf("\n");
    }
}
