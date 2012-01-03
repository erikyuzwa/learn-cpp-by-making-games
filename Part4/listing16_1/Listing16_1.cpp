//include our necessary headers
    #include <iostream>

    using namespace std;

    int doSum(int myArray[], int number_of_elements)
    {
      int total = 0;
      for(int i = 0; i < number_of_elements; i++)
      {
        total = total + myArray[i];
      }
      return total;
    }

    //in some program we have a list of values in an int array which
    //need to be added together

    int main(int argc, char* argv[])
    { 

      int values[10] = { 2, 3, 5, 4, 1, 2, 4, 8, 9, 8 };
	int sum_total = 0;

      //call the doSum function using the array of ints as 
      //well as the size of the array to provide a boundary
      //for the function
      sum_total = doSum( values, 10 );
      
      
      //now just print out a few random cards
      cout << “card sum is: “ << sum_total << endl;
      

      return 0;

    }
