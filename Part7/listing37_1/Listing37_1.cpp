//simple io program to write characters to a file
    //any file operations require us to include the fstream header file
    #include <fstream>
    #include <iostream>
    using namespace std;
    
    int main(int argc, char* argv[])
    {
      //first open the file for output
      ofstream outfile("data.txt");

      //write some characters
      outfile.put('A');
      outfile.put('B');
      outfile.put('C');

      //the carriage return or newline feed
      outfile.put('\n');

      return 0;
    }
