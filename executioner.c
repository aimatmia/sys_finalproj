#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int _MAX_SIZE = 100;
char _PUZZLE[100];
char _LETTER_BANK[25];
int _LETTER_COUNTER = 0;

void Setup(){
  fgets(_PUZZLE, _MAX_SIZE, stdin);
  char* SPC = strchr(_PUZZLE, '\n');
  *(SPC) = 0;
  printf("Printing the input: <%s>\n", _PUZZLE);
}

void Player_Input(){
  char BUFFER[100];
  printf("Please input: ");
  fgets(BUFFER, 100, stdin);
  BUFFER[1] = 0;
  
  if(strstr(_LETTER_BANK, BUFFER) == NULL){
    strcat(_LETTER_BANK, BUFFER);
    _LETTER_COUNTER++;
  }
  
  printf("The letter bank is currently: <%s>\n", _LETTER_BANK);
  
  
}


void Display_Word(){
  int cntr = 0;
  char *letter = _PUZZLE[cntr];
  printf("%c\n", letter);
  
  while(*(letter) != '\0'){
    printf("%c\n", letter);
    cntr++;
    char *letter = _PUZZLE[cntr];
  }

    
}

void Display(){
  Display_Word();
}


main(){

  Setup();
  Display();
  //Player_Input();
  



}

