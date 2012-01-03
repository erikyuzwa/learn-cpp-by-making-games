    #include <iostream>

    using namespace std;

    int add( int& opA, int& opB )
    {
      return( opA + opB ) ;
    }

    int sub( int& opA, int& opB)
    {
      return( opA - opB );
    }

    int product( int& opA, int& opB)
    {
      return( opA * opB );
    }

    int main(int argc, char* argv[])
    {
        
      int x = 0;
      int y = 0;
      cout << "enter two numbers: ";
      cin >> x;
      cin >> y;
     
        
      int (* pMathFunc)( int&, int &);
      int sel;
      cout << "(1) add (2) subtract (3) multiply: ";
      cin >> sel;

      switch( sel )
      {
        case 1: pMathFunc = add;
        break;
        case 2: pMathFunc = sub;
        break;
        case 3: pMathFunc = product;
        break;
      }

      cout << "The result of the desired operation is := " 
        << pMathFunc( x, y ) << endl;
      return 0;
    }
