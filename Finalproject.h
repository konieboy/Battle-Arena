//contains a few uesful calculation functions

#ifndef FINALPROJECT_H
#define FINALPROJECT_H

class myClass
{
private://no private varaible needed     
      
public:// all functions are public
       
int recursiveFact(int Stamina) //A recursive funtion that returns the factorial of the input number
{
    int answer = Stamina;
    if (Stamina==0)
        answer = 1;
    else
        answer = answer*recursiveFact(answer-1);
    return answer; // returns the factorial of Stamina
}

void swap(int &i,int &j) //Reference parameters. Swaps the values of two variables
{
     
     int temp = j; // Creates a temp and makes it equal to j
     
     j = i;        // Makes j equal to i
     
     i = temp;    //i is equal to temp (j's old value)
        
}
 
void selectionSortTheArray(int numbers [])//sorts the player stats in less than a second
{

    //code to time the sort
    clock_t startTime, endTime;
    double timeLapsed;
    int display;
    int i,j,temp;
    // sorts the array using the selecton sort algorithm from smallest to greatest
    startTime = clock();
    for (i=0; i<3; i++)
     {
          for (j=i+1; j<=3; j++)
          {
               if ( numbers[i] > numbers[j] ) // sorts in ascending order
               {
                    swap(numbers[j],numbers[i]);  
               }
          } 
      }
     //stops clock and saves time to endTime
     endTime = clock(); 
     //calculates the time taken
     timeLapsed = double(endTime-startTime)/1000; // no point in actually printing for the user. May be useful for programer moding this code
} 
};
#endif
