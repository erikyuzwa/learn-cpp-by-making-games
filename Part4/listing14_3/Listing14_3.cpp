#include <iostream>

int sortCards( const void *a, const void *b)
    {
      int objA = *((int*)a); //cast the void* a into an int
      int objB = *((int*)b); //cast the void* b into an int
      if( objA < objB )      //if a is less than b return -1
        return -1;
      if( objA == objB )     //if a equals b then return 0
        return 0;
                             //otherwise, a is larger than b so
      return 1;              //return 1
    }


    int main(int argc, char* argv[])
    {

      int cards[10] = { 1, 3, 2, 10, 20, 40, 99, 5, 7, 9 };
      int position;
      int bruteforce_calcs = 0;
      int qsort_calcs = 0;

      //we only want to find the position of the “5” card
      for(int i = 0; i < 10; i++)
      {
        bruteforce_calcs++;
        if(cards[i] == 5)
        {
          position = i;
          break;
        }
      }

      //call the default qsort function that comes with 
      //the standard
      //param 1 – pointer to your array
      //param 2 – number of items in the array
      //param 3 – size of each item
      //param 4 – comparison function
      qsort((void*)cards, 10, sizeof(cards[0]), sortCards);
      
      //we only want to find the position of the “5” card
      for(int i = 0; i < 10; i++)
      {
        qsort_calcs++;
        if(cards[i] == 5)
        {
          position = i;
          break;
        }
      }

      cout << “Our 5 card is at position “ << position << endl;
      cout << “It took “ << bruteforce_calcs << “ bruteforce steps” <<
        endl;
      cout << “It took “ << qsort_calcs << “ qsort steps” << endl;

      return 0;
    }

