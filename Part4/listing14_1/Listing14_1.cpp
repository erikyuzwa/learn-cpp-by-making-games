//include our necessary headers
    #include <iostream>

    using namespace std;

    int main(int argc, char* argv[])
    { 

      int cards[52];

      //just loop through the cards and initialize them all to 3
      for(int i = 0; i < 52; i++)
      {
        cards[i] = 3;
      }
      
      //now just print out the first card
      cerr << “card 1 is: “ << cards[0] << endl;

      //print out the second card
      cerr << “card 2 is: “ << cards[1] << endl;
      

      return 0;

    }

