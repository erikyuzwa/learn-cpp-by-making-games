#include <iostream>

    using namespace std;
    
    int find_fib( int n )
    {
      if(n < 3)
        return 1;
      else
        return( find_fib(n - 2) + find_fib( n - 1 ) );
    } 

    int main(int argc, char* argv[])
    {
      int n, result;
      cout << "Enter the position in the sequence to find: ";
      cin >> n;
      result = find_fib( n );
      cout << result << " is the " << n << "th Fibonacci sequence number" << endl;
      return 0;
    }
