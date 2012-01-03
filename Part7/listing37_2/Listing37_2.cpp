//demonstrates how to use << for text writing
    #include <fstream>
    #include <iostream>
    using namespace std;

    int main(int argc, char* argv[])
    {

      ofstream outfile("data.txt");

       outfile << "This is another way " << " to input " << endl;
      outfile << "text in a more streaming fashion. " << endl;

      return 0;
    }
