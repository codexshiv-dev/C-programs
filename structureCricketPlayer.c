#include<stdio.h>
struct cricket{
  char playerName[50];
  char teamName[50];
  float battingAverage;
};

int main(){
   struct cricket player[3];
   for(int i=0;i<3;i++){
    printf("Enter the player %d details:\n",i+1);

    printf("Player Name:");
    scanf("%[^\n]s",player[i].playerName);

     printf("Team Name:\n");
     scanf("%[^\n]s",player[i].teamName);

     printf("Batting Average:");
    scanf("%f",&player[i].battingAverage);

    printf("\n");
   }
   printf("Players Details are:\n");
   for(int i=0;i<3;i++){
    printf("\nPlayer Id: \n",i+1);
    printf("Player Name: \n",player[i].playerName);
    printf("Team Name: \n",player[i].teamName);
    printf("Batting Average: \n",player[i].battingAverage);
   }
   return 0;
}