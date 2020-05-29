#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SPIRITORGANS_CNT 7
#define UPPERLIMIT 100

int main() {

  int id, guess, turn;
  
  srand(time(NULL));
  
  guess=rand()%UPPERLIMIT;
  turn = 0;
  
  printf("Due to a series of unfortunate events, your spouse screamed at you and told you to go to hell. You understood that they didn't mean it literally but you took the chance and set off on your journey to go to hell. You somehow already know the way.\nOn the entrance to hell stands a mysterious orangish figure..\nYou move closer and realise that you know the guy. It's Light the friendly demon. \"Hey buddy,\" you call out. You know that Light would never harm you - he's even got friendly in his name. He is kinda a jerk sometimes though and would probably ask you to solve a riddle or something to let you pass through.\nYou move closer\n\"Dude, I'm not your buddy. You didn't accept my cookies the last time we met. I'm gonna kill you.\"\nYou - a brave adventurer - are not surprised at this turn of events. Plus you're confident that Light won't kill you.\nSo you approach him with your mighty sword and machine gun.\nLight stabs you with his claws and tears apart your intestines till you die.\nLight leaves the scene.\nYour spirit moves out of your body and reaches Hell. Congratulations! you accomplished your goal!\nHell is just a long tunnel. You spend an eternity in Hell but eventually get bored. You walk forward with your spirit legs and feel more warmth. You realise that you were only sitting in a random tunnel this whole time(you still dead tho). Light appears out of nowhere and tells you that to return back to life you have to possess a body with a compatible ID. He tells you that an ID compatible with you is somewhere between 1 and 100. You'll feel either too hot or too cold for different IDs based on whether that ID is greater than the compatible ID or lesser than it. You think about it. Yep, it all makes sense for you.\n");
  
  while(1) {
    printf("<spirit parts left: %d>\nWhat ID to possess? ", SPIRITORGANS_CNT - turn);
    scanf("%d", &id);
    turn++;
    if(turn == 7) break;
    if(id > guess) {
      printf("You possess body %d and feel yourself burn. This is fine, you say and get a part of your spirit burnt off. You leave immediately.\n", id);
    } else if(id < guess) {
      printf("You possess body %d and feel a chill in your head. You feel your spirit being frozen slowly. This is not a compatible body. You quickly move out.\n", id);
    } else { //id=guess
      printf("Ahh.. your heart is cold. You feel your stomach burn. You're alive.\n You're alive.\nYou breathe a sigh of relief and get back to your spouse. They scream at you a lot and throw something metallic and hard at you. You jump and easily block it with your head. They say they missed you. You tell them you missed them too. They hug you and you hug back. It's the tightest hug you've ever recieved.\nYour bones shatter and you die.\nYou are a spirit with %d spirit organs. :)\n", SPIRITORGANS_CNT - turn);
      break;
    }
  }
  
  if(turn >= 7) {
    printf("That is the perfect answer! You're so smart!\n.\n.\njk you ded\nWhat you looking at? You're gone now.\nLight collects your burnt and frozen organs and dissapears.\n");
  }
  
  return 0;
}
