#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countInString(char needle, char haystack[]) {
  int count = 0;
  for (int i = 0; i < strlen(haystack); i++) {
    if (haystack[i] == needle) {count++;}
  }
  return count;
}
int indexOf(int min, char needle, char haystack[]) {
  int count = 0;
  for (int i = min; i < strlen(haystack); i++) {
    if (haystack[i] == needle) {return i;}
  }
}
void printSubArray(int min, int maxExclusive, char array[]) {
  char ret[maxExclusive-min];
  for (int i = 0; i + min < maxExclusive - 1; i++) {
    ret[i] = array[min+i];
  }
  printf("%s  ",ret);
}

int main(int argc, char *argv[]) {
  //char space[]   = "     \n     \n     \n     \n";
  char letterA[] = " ___ \n|   |\n|---|\n|   |\n";
  char letterB[] = "____ \n|   \\\n|---|\n|___/\n";
  char letterC[] = "____ \n|    \n|    \n|___ \n";
  char letterD[] = "____ \n|   \\\n|   |\n|___/\n";
  char letterE[] = "____ \n|__  \n|    \n|___ \n";
  char letterF[] = "____ \n|    \n|__  \n|    \n";
  char letterG[] = "____ \n|  _ \n|   |\n|___/\n";
  char letterH[] = "     \n|   |\n|---|\n|   |\n";
  char letterI[] = " ___ \n  |  \n  |  \n _|_ \n";
  char letterJ[] = " ___ \n  |  \n  |  \n__|  \n";
  char letterK[] = "     \n| /  \n|-   \n| \\  \n";
  char letterL[] = "     \n|    \n|    \n|___ \n";
  char letterM[] = "     \n|\\ /|\n| | |\n|   |\n";
  char letterN[] = "     \n|\\  |\n| \\ |\n|  \\|\n";
  char letterO[] = " ___ \n|   |\n|   |\n|___|\n";
  char letterP[] = " ___ \n|   |\n|___|\n|    \n";
  char letterQ[] = " ___ \n|   |\n|__\\/\n    \\\n";
  char letterR[] = " ___ \n|   |\n|___|\n|   \\\n";
  char letterS[] = " ____\n|___ \n    |\n ___|\n";
  char letterT[] = " ___ \n  |  \n  |  \n  |  \n";
  char letterU[] = "     \n|   |\n|   |\n|___|\n";
  char letterV[] = "     \n|   |\n\\   /\n \\_/ \n";
  char letterW[] = "     \n| | |\n| | |\n|_|_|\n";
  char letterX[] = "     \n\\  / \n ||  \n/  \\ \n";
  char letterY[] = "     \n\\   /\n \\ / \n  |  \n";
  char letterZ[] = "___  \n  /  \n /   \n/__ \n";
  //printf("%s\n",letterI);
  char input[argc == 2 ? strlen(argv[1]) : 0];
  if (argc == 2) {
    int length = strlen(argv[1]);
    //printf("%d\n",length);
    char input[length];
    for (int i = 0; i < length; i++) {
      input[i] = argv[1][i];
      printf("%c",input[i]);
    }
  } else {
    char input[4] = "test";
  }
  printf("\n");

  char let;
  for (int row = 0; row < 4; row++) {
    int length = strlen(argv[1]);
    //printf("\nLength: %d\n",length);
    for (int i = 0; i < length; i++) {
      //printf("\n%d:",i);
      //printf("%c ",argv[1][i]);
      let = tolower(argv[1][i]);
      switch(let) {
        case 'a':
          printSubArray(6*row,6*row+6,letterA);
          break;
        case 'b':
          printSubArray(6*row,6*row+6,letterB);
          break;
        case 'c':
          printSubArray(6*row,6*row+6,letterC);
          break;
        case 'd':
          printSubArray(6*row,6*row+6,letterD);
          break;
        case 'e':
          printSubArray(6*row,6*row+6,letterE);
          break;
        case 'f':
          printSubArray(6*row,6*row+6,letterF);
          break;
        case 'g':
          printSubArray(6*row,6*row+6,letterG);
          break;
        case 'h':
          printSubArray(6*row,6*row+6,letterH);
          break;
        case 'i':
          printSubArray(6*row,6*row+6,letterI);
          break;
        case 'j':
          printSubArray(6*row,6*row+6,letterJ);
          break;
        case 'k':
          printSubArray(6*row,6*row+6,letterK);
          break;
        case 'l':
          printSubArray(6*row,6*row+6,letterL);
          break;
        case 'm':
          printSubArray(6*row,6*row+6,letterM);
          break;
        case 'n':
          printSubArray(6*row,6*row+6,letterN);
          break;
        case 'o':
          printSubArray(6*row,6*row+6,letterO);
          break;
        case 'p':
          printSubArray(6*row,6*row+6,letterP);
          break;
        case 'q':
          printSubArray(6*row,6*row+6,letterQ);
          break;
        case 'r':
          printSubArray(6*row,6*row+6,letterR);
          break;
        case 's':
          printSubArray(6*row,6*row+6,letterS);
          break;
        case 't':
          printSubArray(6*row,6*row+6,letterT);
          break;
        case 'u':
          printSubArray(6*row,6*row+6,letterU);
          break;
        case 'v':
          printSubArray(6*row,6*row+6,letterV);
          break;
        case 'w':
          printSubArray(6*row,6*row+6,letterW);
          break;
        case 'x':
          printSubArray(6*row,6*row+6,letterX);
          break;
        case 'y':
          printSubArray(6*row,6*row+6,letterY);
          break;
        case 'z':
          printSubArray(6*row,6*row+6,letterZ);
          break;


	default:
          printf("     ");
      }
    }

    printf("\n");
  }

  printf("\n");
  //printf("%s\n",letterC);
  //printf("%d\n",indexOf(0,'\n',"test\n\n"));
  return 0;
}
