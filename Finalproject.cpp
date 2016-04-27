/*
    An overly complicated game were the player creates a character and then fights a series of enimies using a combat system.
    It impliments sorts, object oriented programming and recursion.
*/

// include files 
#include <stdlib.h>
#include <iostream.h>
#include <fstream.h>
#include <iomanip.h>
#include <devconfx.h>   
#include <string>
#include "Finalproject.h" // calls the header that contains a couple of calculation functions
using namespace std;

void wait()
{   gotoxy(25,24);
	cout << "Press any key to continue." << flush;
	_getch();
}   



void combat(string Name, string Class, string Race, string Perk, int Attack, int Defence, int Magic, int Stamina)// the function that handles the game part of the game. 
{
  myClass convert;   
  int playerHP = 0, EnemyHP = 30, enemyAttack = 5;  
  if (Stamina > 5)
   {
    playerHP = 40;//max health       
   }
   
   else
   {
     playerHP = convert.recursiveFact (Stamina); // the factorial of Stamina becomes the players health.
   }  
  while (playerHP > 0)
  {
   clrscr();
   gotoxy (5,5);
   cout << "Welcome to the battle arena!";
   gotoxy (5,7);
   cout << "You must defeat 5 enemies that gradually increase in difficulty\n     to win the game.";
   gotoxy (5,11);
   cout << "Press any key to begin!";
   _getch();             
   clrscr();  
  

   gotoxy (5,5);
   cout << "First opponent is a knight";
   char move;
   int temp = EnemyHP; 
   int temp2 = playerHP;
   
   clrscr();
   //first fight
   int playerAtack;
   for (;EnemyHP > 0 && playerHP > 0;)
    {     
       
      enemyAttack = 5;    
      playerAtack = 0;
      gotoxy(5,5); 
      cout << "Player Health: " << playerHP;
      gotoxy(60,5); 
      cout << "Enemy Health: " << EnemyHP;                   
      gotoxy(5,19); 
      cout << "How do you fight?"; 

      gotoxy(5,25); 
      cout << "(A)ttack                              (M)agic                    (B)lock"; //blank space because no previous option (yet)
      move = (getch());
       
      if (move == 'a')
      { 
             
        if (rand() % 40 < 1)  playerAtack =  (Attack*1.5);     //40 percent chance f0r a 1.5x damage bonus
        else if (rand() % 10 < 1)  playerAtack =  (Attack*2);  //10 percent chance f0r a 2.0x damage bonus
        else playerAtack = Attack;                            //otherwise, normal hit     
        
      } 
      if (move == 'm')
      { 
             
        if (rand() % 40 < 1)  playerAtack = (Magic*1.5);     //40 percent chance f0r a 1.5x damage bonus
        else if (rand() % 10 < 1)   playerAtack = (Magic*2);  //10 percent chance f0r a 2.0x damage bonus
        else playerAtack =  Magic;                            //otherwise, normal hit     
        
      } 
      
      if (move == 'b')
      { 
               
        enemyAttack = enemyAttack - (Defence/2);

      } 
      //player attack
      EnemyHP = EnemyHP - playerAtack;
      //enemy attack phase
     
      playerHP = playerHP - enemyAttack;
      
      //Output for player
      clrscr();
      gotoxy (10,10);
      cout << "Enemy was hit for " << (playerAtack) << " damage";
      gotoxy (10,12);
      cout << "Player was hit for " << (enemyAttack) << " damage";
   }
   
   clrscr();
   if (playerHP <= 0)//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   {
      clrscr();  
      gotoxy(30,10);
      cout << "You have been slain!";
      gotoxy(34,13);
      cout << "THE END";
      wait();
      exit(0);      
   }
   //fight 2
   gotoxy (5,5);
   cout << "You won your First fight! You health increased by 5 points!";
   gotoxy (5,7);
   cout << "You must defeat 4 more enemies to win!";
   gotoxy (5,11);
   cout << "Press any key to begin!";
   _getch();     
   clrscr();
   gotoxy (5,5);
   cout << "Next opponent is a Liono prince";
   clrscr();
   playerHP = temp2 + 5;
   EnemyHP = temp;
   
    for (;EnemyHP > 0 && playerHP > 0;)
    {     
       
      enemyAttack = 9;    
      playerAtack = 0;
      gotoxy(5,5); 
      cout << "Player Health: " << playerHP;
      gotoxy(60,5); 
      cout << "Enemy Health: " << EnemyHP;                   
      gotoxy(5,19); 
      cout << "How do you fight?"; 

      gotoxy(5,25); 
      cout << "(A)ttack                              (M)agic                    (B)lock"; //blank space because no previous option (yet)
      move = (getch());
       
      if (move == 'a')
      { 
             
        if (rand() % 40 < 1)  playerAtack =  (Attack*1.5);     //40 percent chance f0r a 1.5x damage bonus
        else if (rand() % 10 < 1)  playerAtack =  (Attack*2);  //10 percent chance f0r a 2.0x damage bonus
        else playerAtack = Attack;                            //otherwise, normal hit     
        
      } 
      if (move == 'm')
      { 
             
        if (rand() % 40 < 1)  playerAtack = (Magic*1.5);     //40 percent chance f0r a 1.5x damage bonus
        else if (rand() % 10 < 1)   playerAtack = (Magic*2);  //10 percent chance f0r a 2.0x damage bonus
        else playerAtack =  Magic;                            //otherwise, normal hit     
        
      } 
      
      if (move == 'b')
      { 
               
        enemyAttack = enemyAttack - (Defence/2);

      } 
      //player attack
      EnemyHP = EnemyHP - playerAtack;
      //enemy attack phase
     
      playerHP = playerHP - enemyAttack;
      
      //Output for player
      clrscr();
      gotoxy (10,10);
      cout << "Enemy was hit for " << (playerAtack) << " damage";
      gotoxy (10,12);
      cout << "Player was hit for " << (enemyAttack) << " damage";
   }
   
   clrscr();
   if (playerHP <= 0)//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   {
      clrscr();  
      gotoxy(30,10);
      cout << "You have been slain!";
      gotoxy(34,13);
      cout << "THE END";
      wait();
      exit(0);      
   }
  
   clrscr();
   
   //fight 3
   gotoxy (5,5);
   cout << "You won your 2nd fight! You health increased by 5 points!";
   gotoxy (5,7);
   cout << "You must defeat 3 more enemies to win!";
   gotoxy (5,11);
   cout << "Press any key to begin!";
   _getch();     
   clrscr();
   gotoxy (5,5);
   cout << "Next opponent is a Frog Fighter";
   clrscr();
   playerHP = temp2 + 10;
   EnemyHP = temp + 5;
   for (;EnemyHP > 0;)
    for (;EnemyHP > 0 && playerHP > 0;)
    {     
       
      enemyAttack = 11;    
      playerAtack = 0;
      gotoxy(5,5); 
      cout << "Player Health: " << playerHP;
      gotoxy(60,5); 
      cout << "Enemy Health: " << EnemyHP;                   
      gotoxy(5,19); 
      cout << "How do you fight?"; 

      gotoxy(5,25); 
      cout << "(A)ttack                              (M)agic                    (B)lock"; //blank space because no previous option (yet)
      move = (getch());
       
      if (move == 'a')
      { 
             
        if (rand() % 40 < 1)  playerAtack =  (Attack*1.5);     //40 percent chance f0r a 1.5x damage bonus
        else if (rand() % 10 < 1)  playerAtack =  (Attack*2);  //10 percent chance f0r a 2.0x damage bonus
        else playerAtack = Attack;                            //otherwise, normal hit     
        
      } 
      if (move == 'm')
      { 
             
        if (rand() % 40 < 1)  playerAtack = (Magic*1.5);     //40 percent chance f0r a 1.5x damage bonus
        else if (rand() % 10 < 1)   playerAtack = (Magic*2);  //10 percent chance f0r a 2.0x damage bonus
        else playerAtack =  Magic;                            //otherwise, normal hit     
        
      } 
      
      if (move == 'b')
      { 
               
        enemyAttack = enemyAttack - (Defence/2);

      } 
      //player attack
      EnemyHP = EnemyHP - playerAtack;
      //enemy attack phase
     
      playerHP = playerHP - enemyAttack;
      
      //Output for player
      clrscr();
      gotoxy (10,10);
      cout << "Enemy was hit for " << (playerAtack) << " damage";
      gotoxy (10,12);
      cout << "Player was hit for " << (enemyAttack) << " damage";
   }
   
   if (playerHP <= 0)//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   {
      clrscr();  
      gotoxy(30,10);
      cout << "You have been slain!";
      gotoxy(34,13);
      cout << "THE END";
      wait();
      exit(0);      
   }
   clrscr();
   
   //fight 4
   gotoxy (5,5);
   cout << "You won your third fight! You health increased by 10 points!";
   gotoxy (5,7);
   cout << "You must defeat 2 more enemies to win!";
   gotoxy (5,11);
   cout << "Press any key to begin!";
   _getch();     
   clrscr();
   gotoxy (5,5);
   cout << "Next opponent is a Black Ninja";
   clrscr();
   playerHP = temp2 + 20;
   EnemyHP = temp + 7;
    for (;EnemyHP > 0 && playerHP > 0;)
    {     
       
      enemyAttack = 12;    
      playerAtack = 0;
      gotoxy(5,5); 
      cout << "Player Health: " << playerHP;
      gotoxy(60,5); 
      cout << "Enemy Health: " << EnemyHP;                   
      gotoxy(5,19); 
      cout << "How do you fight?"; 

      gotoxy(5,25); 
      cout << "(A)ttack                              (M)agic                    (B)lock"; //blank space because no previous option (yet)
      move = (getch());
       
      if (move == 'a')
      { 
             
        if (rand() % 40 < 1)  playerAtack =  (Attack*1.5);     //40 percent chance f0r a 1.5x damage bonus
        else if (rand() % 10 < 1)  playerAtack =  (Attack*2);  //10 percent chance f0r a 2.0x damage bonus
        else playerAtack = Attack;                            //otherwise, normal hit     
        
      } 
      if (move == 'm')
      { 
             
        if (rand() % 40 < 1)  playerAtack = (Magic*1.5);     //40 percent chance f0r a 1.5x damage bonus
        else if (rand() % 10 < 1)   playerAtack = (Magic*2);  //10 percent chance f0r a 2.0x damage bonus
        else playerAtack =  Magic;                            //otherwise, normal hit     
        
      } 
      
      if (move == 'b')
      { 
               
        enemyAttack = enemyAttack - (Defence/2);

      } 
      //player attack
      EnemyHP = EnemyHP - playerAtack;
      //enemy attack phase
     
      playerHP = playerHP - enemyAttack;
      
      //Output for player
      clrscr();
      gotoxy (10,10);
      cout << "Enemy was hit for " << (playerAtack) << " damage";
      gotoxy (10,12);
      cout << "Player was hit for " << (enemyAttack) << " damage";
   }
   
   clrscr();
   if (playerHP <= 0)//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   {
      clrscr();  
      gotoxy(30,10);
      cout << "You have been slain!";
      gotoxy(34,13);
      cout << "THE END";
      wait();
      exit(0);      
   }
  
   clrscr();
   
   //fight 5
   gotoxy (5,5);
   cout << "You won your Fourth fight! You gain 5 health!";
   gotoxy (5,7);
   cout << "This is your final battle!";
   gotoxy (5,11);
   cout << "Press any key to begin!";
   _getch();     
   clrscr();
   gotoxy (5,5);
   cout << "Next opponent is a Giant Bear";
   clrscr();
   playerHP = temp2 + 25;
   EnemyHP = temp + 10;
    for (;EnemyHP > 0 && playerHP > 0;)
    {     
       
      enemyAttack = 13;    
      playerAtack = 0;
      gotoxy(5,5); 
      cout << "Player Health: " << playerHP;
      gotoxy(60,5); 
      cout << "Enemy Health: " << EnemyHP;                   
      gotoxy(5,19); 
      cout << "How do you fight?"; 

      gotoxy(5,25); 
      cout << "(A)ttack                              (M)agic                    (B)lock"; //blank space because no previous option (yet)
      move = (getch());
       
      if (move == 'a')
      { 
             
        if (rand() % 40 < 1)  playerAtack =  (Attack*1.5);     //40 percent chance f0r a 1.5x damage bonus
        else if (rand() % 10 < 1)  playerAtack =  (Attack*2);  //10 percent chance f0r a 2.0x damage bonus
        else playerAtack = Attack;                            //otherwise, normal hit     
        
      } 
      if (move == 'm')
      { 
             
        if (rand() % 40 < 1)  playerAtack = (Magic*1.5);     //40 percent chance f0r a 1.5x damage bonus
        else if (rand() % 10 < 1)   playerAtack = (Magic*2);  //10 percent chance f0r a 2.0x damage bonus
        else playerAtack =  Magic;                            //otherwise, normal hit     
        
      } 
      
      if (move == 'b')
      { 
               
        enemyAttack = enemyAttack - (Defence/2);

      } 
      //player attack
      EnemyHP = EnemyHP - playerAtack;
      //enemy attack phase
     
      playerHP = playerHP - enemyAttack;
      
      //Output for player
      clrscr();
      gotoxy (10,10);
      cout << "Enemy was hit for " << (playerAtack) << " damage";
      gotoxy (10,12);
      cout << "Player was hit for " << (enemyAttack) << " damage";
   }
   
   clrscr();
   if (playerHP <= 0)//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
   {
      clrscr();  
      gotoxy(30,10);
      cout << "You have been slain!";
      gotoxy(34,13);
      cout << "THE END";
      wait();
      exit(0);      
   }
   //if all your enemies lose their health you win the game and the program is shutdown
   clrscr();  
   gotoxy(30,10);
   cout << "A winner is you!";
   gotoxy(34,13);
   cout << "THE END";
   wait();
   exit(0);

  }
  //if you lose your health you lose the game and the program is shutdown
  clrscr();  
   gotoxy(30,10);
   cout << "You have been slain!";
   gotoxy(34,13);
   cout << "THE END";
   wait();
   exit(0);
   
}

 
void displayStats (string Name, string Class, string Race, string Perk, int Attack, int Defence, int Magic, int Stamina) // displays your stats and then puts their values into an array and sorts them
{
     
 clrscr();
 gotoxy (0,0);
 cout << "This is your character:";
 gotoxy (0,5);
 cout << "Name: " << Name << endl << "Class: " << Class << endl << "Race: " << Race << endl << "Perk: " << Perk << endl << "Attack: " << Attack << endl << "Defence: "<< Defence << endl << "Magic: " << Magic << endl << "Stamina: " << Stamina << endl;
 //put the stats into an array and then sorts them
 int numbers [3];
 numbers [0] = Attack;
 numbers [1] = Defence;
 numbers [2] = Magic;   
 numbers [3] = Stamina;
 myClass convert; //initializes the class in the header 
 convert.selectionSortTheArray(numbers);//calls sorts function      

 //Displays generated array and the number in the sequence it represents. 
 cout  << endl << "Stats in order from worse to best " << endl;
 for (int x = 0; x < 4;x++) 
 {

      cout << x+1 << ") " << numbers [x] << endl; // Format: EX) "Number in sequence") "Number in array"   
        
 }                   

wait ();

            
}

void CH_CR () //allows you to create your char and its stats, sorts them in order and saves them to a file

{
     
    clrscr();
    char input; //user input
    string  Class, Race, Perk, Name;
    int Magic = 0, Attack = 0, Defence = 0 , Stamina = 0;
    //class
    for (int i = 0 ;i != 4;) // Lets you create your chose 4 because that can never happen within this loop
    {
     if (i == 0)
     {
        clrscr();   
        gotoxy(0,2);   
        cout << "Choose your class:";    
        gotoxy(5,5); 
        cout << "Warrior"; 
        gotoxy(5,10); 
        cout << "Known for phisical resistance and strength, they fight with \n     their sword and shield"; //info and stats pertaining to the class
        gotoxy(5,15); 
        cout << "Attack: 8"; 
        gotoxy(5,17); 
        cout << "Defence: 5"; 
        gotoxy(5,19); 
        cout << "Magic: 1"; 
        gotoxy(5,21); 
        cout << "Stamina: 4"; 
        gotoxy(5,25); 
        cout << "                              (C)hoose                    (N)ext"; //blank space because no previous option (yet)
        gotoxy (20,2);    
        input = (getch()); //allows for input without having to press enter
        Attack = 8;//calculations
        Defence = 5;
        Magic = 1;
        Stamina = 4;
        
        if (input == 'n') i++;//"i" is increased by 1 if the choice is "N" , moving on to the next status screen when the loop runs again. "C" will close the loop. Anything else will run the loop again
        if (input == 'c'){Class = "Warrior"; i = 4;}
      }  
     if (i == 1) 
     { 
        clrscr();
        gotoxy(0,2); 
        cout << "Choose your class: ";    
        gotoxy(5,5); 
        cout << "Mage"; 
        gotoxy(5,10); 
        cout << "A being blessed with magical powers. Wields a staff and spells"; 
        gotoxy(5,15); 
        cout << "Attack: 4"; 
        gotoxy(5,17); 
        cout << "Defence: 3"; 
        gotoxy(5,19); 
        cout << "Magic: 7"; 
        gotoxy(5,21); 
        cout << "Stamina: 5"; 
        gotoxy(5,25); 
        cout << "(P)revious                    (C)hoose                    (N)ext"; 
        gotoxy (20,2);
        input = (getch());
        Attack = 4;//calculations
        Defence = 3;
        Magic = 7;
        Stamina = 5;
        if (input == 'p') i--;//if the user enters 'p', I is decreased by 1 and thus stops at the if statment before this one the next time the program runs through the loop
        if (input == 'n') i++;//does the same thing as before, i is increased to move on to the next choice
        if (input == 'c'){Class = "Mage"; i = 4;}
    } 
    if (i == 2) 
    { 
        clrscr();
        gotoxy(0,2); 
        cout << "Choose your class: ";    
        gotoxy(5,5); 
        cout << "Rogue"; 
        gotoxy(5,10); 
        cout << "Quick on his feet, a rogue is a master of critical hits and dexterity"; 
        gotoxy(5,15); 
        cout << "Attack: 6"; 
        gotoxy(5,17); 
        cout << "Defence: 4"; 
        gotoxy(5,19); 
        cout << "Magic: 3"; 
        gotoxy(5,21); 
        cout << "Stamina: 7"; 
        gotoxy(5,25); 
        cout << "(P)revious                    (C)hoose                           "; //no next option as there are only 3 options
        gotoxy (20,2);
        input = (getch());
        Attack = 6;//calculations
        Defence = 4;
        Magic = 3;
        Stamina = 7;
        if (input == 'p') i--;
        if (input == 'c'){Class = "Rogue"; i = 4;}
    } 

    } 
    
    {
    
    //race 
    clrscr();
    for (int i = 0 ;i != 4;) // choose your race (gives you stat advantages)
    {
     if (i == 0)
     {
        clrscr();   
        gotoxy(0,2);   
        cout << "Choose your race: ";    
        gotoxy(5,5); 
        cout << "Liono"; 
        gotoxy(5,10); 
        cout << "A high strength and defence but low magic capabilities"; //info and stats pertaining to the race
        gotoxy(5,15); 
        cout << "Attack +3"; 
        gotoxy(5,17); 
        cout << "Defence +2"; 
        gotoxy(5,25); 
        cout << "                              (C)hoose                    (N)ext"; //blank space because no previous option (yet)
        gotoxy (20,2);
        input = (getch());  
        Attack = Attack + 3;//calculations
        Defence +=  2;  
        if (input == 'n') i++;//"i" is increased by 1 if the choice is "N" , moving on to the next status screen when the loop runs again. "C" will close the loop. Anything else will run the loop again
        if (input == 'c'){Race = "Liono"; i = 4;}
        
      }  
     if (i == 1) 
     { 
        clrscr();
        gotoxy(0,2); 
        cout << "Choose your race: ";    
        gotoxy(5,5); 
        cout << "Druid"; 
        gotoxy(5,10); 
        cout << "Lacking both offence and defence, a druid makes up for it with \n     strong magic abilities and pure speed"; 
        gotoxy(5,15); 
        cout << "Stamina +2"; 
        gotoxy(5,17); 
        cout << "Magic +3"; 
        gotoxy(5,25); 
        cout << "(P)revious                    (C)hoose                    (N)ext"; 
        gotoxy (20,2);
        input = (getch()); 
        Magic = Magic + 3;//calculations
        Stamina = Stamina + 2;
        if (input == 'p') i--;//if the user enters 'p', I is decreased by 1 and thus stops at the if statment before this one the next time the program runs through the loop
        if (input == 'n') i++;//does the same thing as before, i is increased to move on to the next choice
        if (input == 'c'){Race = "Druid"; i = 4;}
    } 
    if (i == 2) 
    { 
        clrscr();
        gotoxy(0,2); 
        cout << "Choose your race: ";    
        gotoxy(5,5); 
        cout << "Wizardo"; 
        gotoxy(5,10); 
        cout << "Strong magic abilities and little of anything else"; 
        gotoxy(5,15); 
        cout << "Magic +5";
        gotoxy(5,17); 
        cout << "Defence +1";
        gotoxy(5,25); 
        cout << "(P)revious                    (C)hoose                           "; //no next option as there are only 3 options
        gotoxy (20,2);
        input = (getch());
        Magic = Magic + 5;//calculations
        Magic = Defence + 1;
        if (input == 'c') i--;
        if (input == 'p') i--;
        if (input == 'c'){Race = "Wizardo"; i = 4;}
    } 

    } 
   } 

    //perk
    clrscr();
    for (int i = 0 ;i != 4;) // choose your perk (gives you stat advantages and disadvantages)
    {
     if (i == 0)
     {
        clrscr();   
        gotoxy(0,2);   
        cout << "Choose your perk: ";    
        gotoxy(5,5); 
        cout << "The best defense is a good offense"; 
        gotoxy(5,10); 
        cout << "Sacrifices your attack in favour of defence"; //info and stats pertaining to the perk
        gotoxy(5,15); 
        cout << "Defence +3"; 
        gotoxy(5,17); 
        cout << "Attack -3"; 
        gotoxy(5,25); 
        cout << "                              (C)hoose                    (N)ext"; //blank space because no previous option (yet)
        gotoxy (20,2);
        input = (getch());  
        Defence = Defence + 3;//calculations
        Attack = Attack - 3;   
        if (input == 'n') i++;//"i" is increased by 1 if the choice is "N" , moving on to the next status screen when the loop runs again. "C" will close the loop. Anything else will run the loop again
        if (input == 'c'){Perk = "The best defense is a good offense"; i = 4;}
        
      }  
     if (i == 1) 
     { 
        clrscr();
        gotoxy(0,2); 
        cout << "Choose your perk: ";    
        gotoxy(5,5); 
        cout << "Furry"; 
        gotoxy(5,10); 
        cout << "You attack in a furrious anger but lack stamina and magical talent"; 
        gotoxy(5,15); 
        cout << "Attack +4"; 
        gotoxy(5,17); 
        cout << "Magic -1"; 
        gotoxy(5,19); 
        cout << "Stamina -2"; 
        gotoxy(5,25); 
        cout << "(P)revious                    (C)hoose                    (N)ext"; 
        gotoxy (20,2);
        input = (getch());
        Attack = Attack + 4;//calculations
        Magic = Magic - 1;
        Stamina = Stamina - 2;              
        if (input == 'p') i--;//if the user enters 'p', I is decreased by 1 and thus stops at the if statment before this one the next time the program runs through the loop
        if (input == 'n') i++;//does the same thing as before, i is increased to move on to the next choice
        if (input == 'c'){Perk = "Furry"; i = 4;}
    } 
    if (i == 2) 
    { 
        clrscr();
        gotoxy(0,2); 
        cout << "Choose your perk: ";    
        gotoxy(5,5); 
        cout << "Mark of the Ninja"; 
        gotoxy(5,10); 
        cout << "Years of training has made your stamina exceptional but weak in everything      else"; 
        gotoxy(5,15); 
        cout << "Stamina +5";
        gotoxy(5,17); 
        cout << "Defence -2";
        gotoxy(5,19); 
        cout << "Attack -1";
        gotoxy(5,21); 
        cout << "Magic -1";
        gotoxy(5,25); 
        cout << "(P)revious                    (C)hoose                           "; //no next option as there are only 3 options
        gotoxy (20,2);
        input = (getch());
        Stamina = Stamina + 5;//calculations
        Defence -= 2;
        Attack--;
        Magic = Magic - 1;   
        if (input == 'c') i--;
        if (input == 'p') i--;
        if (input == 'c'){Perk = "Mark of the Ninja"; i = 4;}
    } 

    } 
 clrscr();
 gotoxy (0,5);
 cout << "Finaly, enter a name for your character: ";
 cin >> Name;
 displayStats (Name, Class, Race, Perk, Attack, Defence, Magic, Stamina);
 combat(Name, Class, Race, Perk, Attack, Defence, Magic, Stamina);   
 
}




char menu()
{
	char ch;
	// display choices
	clrscr();
	gotoxy(35,0);
	cout <<"Battle Arena";

//note: this ASII art creates some warnings
gotoxy(0,5);
cout << "  / \\, | ,        .--."<<endl;
cout << "  | =|= >        /.--.\\"<<endl;
cout << "  \\ /` | `      |====|"<<endl;
cout << "       |         |`::`| "<<endl;
cout << "       |    .-;`\\..../`;_.-^-._ "<<endl;
cout << "      /\\/  /  |...::..|`   :   `|"<<endl;
cout << "      |:'\ |   /'''::''|   .:.   |"<<endl;
cout << "      \\ /\;-,/\   ::  |..     ..|"<<endl;
cout << "      |\\ <` >  >._::_.| ':   :' |"<<endl;
cout << "       | `""`  /   ^^/>  |   ':' |"<<endl;
cout << "       |       |      \\    :    /"<<endl;
cout << "       |       |       \\   :   /"<<endl;
cout << "       |       |___/\___|`-.:.-`"<<endl;
cout << "       |       \\_ || _/    `"<<endl;
cout << "       |        <_ >< _>"<<endl;
cout << "       |        |  ||  |"<<endl;
cout << "       |        |  ||  |"<<endl;
cout << "       |       _\.:||:./_"<<endl;
cout << "       |      /____/\____\\"<<endl;

    gotoxy(60,15);
    cout <<"A - Start"<< endl;
    gotoxy(60,17);
	cout <<"Q - quit";
    
	// read in user choice
	ch = toupper(getch());
	clrscr();
	return ch;
}

void process(char ch)
{
    
  
	if (ch == 'A')
		CH_CR();
	else if (ch == 'w')
		menu();
	
}

int main()
{
	char ch;
	initscreen();
	settitlebar("Battle Arena");
	textcolor(fgWhite);
	textbackground(bgBlue);
	clrscr();
	ch = menu();
	while (ch != 'Q')
	{
		process(ch);
		ch = menu();
	}
	uninitscreen();
	return 0;
}
