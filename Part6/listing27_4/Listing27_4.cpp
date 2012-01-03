#include <iostream.h>
    using namespace std;
    class Square
    {
    private:
      int m_width;
      int m_height;
    public:
      Square(int x, int y)
      { 
        m_width = x;
        m_height = y;
      }
      ~Square();
      
      int area()
      {
        return( m_width * m_height );
      }

      Square magnify(Square param)
      {

        Square temp;
        temp.m_width = param.m_width*10;
        temp.m_height = param.m_height*10;
  
        return(temp);

      }

    };

    int main(int argc, char* argv[])
    {
      Square sq1(5,10), sq2;
  
      sq2 = magnify(sq1);

      cout << “Area of the clone is := “ << sq2.area() << endl;

      return 0;
    }

