#include <iostream>

    int main(int argc, char* argv[])
    {

      int cards[5] = { 1, 3, 5, 7, 9 };
      int position;

      //we only want to find the index of the “5” card
      for(int i = 0; i < 5; i++)
      {
        if(cards[i] == 5)
        {
          position = i;
          break;
        }
      }

      cout << “Our 5 card is at index “ << position << endl;

      return 0;
    }

