#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define SPIRITORGANS_CNT 7
#define UPPERLIMIT 100

/**Time for a user to read a sentence - 2 seconds**/
#define DELAY_USEC 2000000

int main() {

  int id, guess, turn;
  char name[100];
  
  srand(time(NULL));
  
  guess=rand()%UPPERLIMIT;
  turn = 0;
  
  printf("Hi!\n");
  usleep(DELAY_USEC);
  printf("Enter your name: ");
  fgets(name, 100, stdin);
  printf("Welcome, %s!\n", name);
  usleep(DELAY_USEC);
  printf("Due to a series of unfortunate events, your spouse screamed at you and told you to go to hell.\n");
  usleep(DELAY_USEC*2);
  printf("You understood that they didn't mean it literally but you took the chance and set off on your journey to go to hell. You somehow already know the way.\n");
  usleep(DELAY_USEC*4);
  printf("On the entrance to hell stands a mysterious orangish figure..\nYou move closer and realise that you know the guy. It's \033[33mLight\033[39m the friendly demon.\n");
  usleep(DELAY_USEC*4);
  printf("\"Hey buddy,\" you call out.\n");
  usleep(DELAY_USEC*2);
  printf("You know that Light would never harm you - he's even got friendly in his name. He is kinda a jerk sometimes though and would probably ask you to solve a riddle or something to let you pass through.\n");
  usleep(DELAY_USEC*5);
  printf("You move closer\n");
  usleep(DELAY_USEC*2);
  printf("\033[33m\"Dude, I'm not your buddy. You didn't accept my cookies the last time we met. I'm gonna kill you.\"\033[39m\n");
  usleep(DELAY_USEC*4);
  printf("\033[32mYou - a brave adventurer - are not surprised at this turn of events. Plus you're confident that Light won't kill you.\nSo you approach him with your mighty sword and machine gun.\033[39m\n");
  usleep(DELAY_USEC*4);
  printf("\033[33mLight stabs you with his claws and tears apart your intestines till\033[39m \033[31m you die.\033[39m\n\033[33mLight leaves the scene.\n\033[39m");
  usleep(DELAY_USEC*4);
  printf("Your spirit moves out of your body and reaches Hell.\n");
  usleep(DELAY_USEC*1);
  printf("\033[5m\033[32mCongratulations! you accomplished your goal!\033[39m\033[0m\n");
  usleep(DELAY_USEC*4);
  printf("Hell is just a long tunnel.\n");
  usleep(DELAY_USEC*2);
  printf("You spend an eternity in Hell but eventually get bored.\n");
  usleep(DELAY_USEC*2);
  printf("You walk forward with your spirit legs and feel more warmth.\n");
  usleep(DELAY_USEC*2);
  printf("You realise that you were only sitting in a random tunnel this whole time(you still dead tho).\n");
  usleep(DELAY_USEC*2);
  printf("\033[33mLight appears out of nowhere and tells you that to return back to life you have to possess a body with a compatible ID.\033[39m\n");
  usleep(DELAY_USEC*4);
  printf("He tells you that an ID compatible with you is somewhere between 1 and 100.\n");
  usleep(DELAY_USEC*2);
  printf("You'll feel either too hot or too cold for different IDs based on whether that ID is \033[31mgreater\033[39m than the compatible ID or \033[34mlesser\033[39m than it. You think about it. Yep, it all makes sense for you.\n");
  usleep(DELAY_USEC*4);
  
  while(1) {
    printf("<spirit parts left: %d>\nWhat ID to possess? ", SPIRITORGANS_CNT - turn);
    scanf("%d", &id);
    turn++;
    if(turn == 7) break;
    if(id > guess) {
      printf("\033[31mYou possess body %d and feel yourself burn. This is fine, you say and get a part of your spirit burnt off. You leave immediately.\033[39m\n", id);
      usleep(DELAY_USEC*2);
    } else if(id < guess) {
      printf("\033[34mYou possess body %d and feel a chill in your head. You feel your spirit being frozen slowly. This is not a compatible body. You quickly move out.\033[39m\n", id);
      usleep(DELAY_USEC*2);
    } else { //id=guess
      printf("Ahh.. \033[34myour heart is cold.\033[39m\033[31m You feel your stomach burn.\033[39m You're alive.\n");
      usleep(DELAY_USEC*2);
      printf("You're alive.\n");
      usleep(DELAY_USEC*2);
      printf("You breathe a sigh of relief and get back to your spouse.\n");
      usleep(DELAY_USEC*2);
      printf("They scream at you a lot and throw something metallic and hard at you.\n");
      usleep(DELAY_USEC*2);
      printf("You jump and easily block it with your head.\n");
      usleep(DELAY_USEC*2);
      printf("They say they missed you.\n");
      usleep(DELAY_USEC*4);
      printf("You tell them you missed them too.\n");
      usleep(DELAY_USEC*2);
      printf("You tell them you won the game.\n");
      usleep(DELAY_USEC*2);
      printf("They hug you and you hug back.\n");
      usleep(DELAY_USEC*2);
      printf("It's the tightest hug you've ever recieved.\n");
      usleep(DELAY_USEC*4);
      printf("Your bones shatter and you die.\n");
      usleep(DELAY_USEC*2);
      printf("\033[32mYou are a spirit with %d spirit organs. :)\033[39m\n", SPIRITORGANS_CNT - turn);
      usleep(DELAY_USEC*4);
      break;
    }
  }
  
  if(turn >= 7) {
    printf("That is the perfect answer!\n");
    usleep(DELAY_USEC*2);
    printf("You're so smart!\n");
    usleep(DELAY_USEC*1);
    printf(".\n");
    usleep(DELAY_USEC*1);
    printf(".\n");
    usleep(DELAY_USEC*1);
    printf("jk you ded\nYou don't even have any spirit organs now.\n");
    usleep(DELAY_USEC*2);
    printf("What you looking at? You're gone now.\n");
    usleep(DELAY_USEC*2);
    printf("\033[31mLight collects your burnt and frozen organs and dissapears.\033[39m\n");
    usleep(DELAY_USEC*2);
  }
  
  printf("\nThanks for playing! this process gonna kill itself now. :)\n");
  
  return 0;
}
