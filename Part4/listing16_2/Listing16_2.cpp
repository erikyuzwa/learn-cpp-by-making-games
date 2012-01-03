//include our necessary headers
    #include <iostream>

    using namespace std;

    void printMatrix(float mat[][4], int number_of_rows)
    {
      for(int i = 0; i < number_of_rows; i++)
      {
        cout << "| ";
        for(int j = 0; j < 4; j++)
        {
          cout << mat[i][j] << " ";

        }
        cout << "|" << endl;
      }

    }

    //in some program we have a list of values in a float array which
    //need to be added together

    int main(int argc, char* argv[])
    { 

      float matrix[4][4] = { {1.0f, 0.0f, 0.0f, 0.0f },
                             {0.0f, 1.0f, 0.0f, 0.0f },
                             {0.0f, 0.0f, 1.0f, 0.0f },
                             {0.0f, 0.0f, 0.0f, 1.0f } };

	

      //call the doSum function using the array of ints as 
      //well as the size of the array to provide a boundary
      //for the function
      printMatrix( matrix, 4 );
    

      return 0;

    }
