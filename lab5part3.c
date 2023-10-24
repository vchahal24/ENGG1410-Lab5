#include <stdio.h>
#include <string.h>

int main() {
  char input[256];
  char buf[256];  // Buffer used to check and store characters
  int letterCount[26] = {
      0};  // Array to store the count of each letter initialized to zeros

  printf("Enter text strings (press Enter on an empty line to exit):\n");

  while (1) {
    fgets(input, sizeof(input),
          stdin);  // get the input from the user via keyboard

    // Check for an empty line to exit the loop
    if (strlen(input) == 1 && input[0] == '\n') {
      break;
    }

    // Iterate through the characters in the input
    for (int i = 0; i < strlen(input); i++) {
      buf[0] = input[i];  // Stores the character in the respective buffer

      if ((buf[0] >= 'A' && buf[0] <= 'Z') ||
          (buf[0] >= 'a' && buf[0] <= 'z')) {
        // Converts lowercase characters into uppercase by subtracting 32
        if (buf[0] >= 'a' && buf[0] <= 'z') {
          buf[0] = buf[0] - 32;
        }
        // Increment the corresponding count in the array
        letterCount[buf[0] - 'A']++;
      }
    }
  }

  // Display the letter counts
  printf("Distribution of letters in the input:\n");
  for (int i = 0; i < 26; i++) {
    char numberofLetters = 'A' + i;
    printf("%c: %d ", numberofLetters, letterCount[i]);
  }

  return 0;
}
