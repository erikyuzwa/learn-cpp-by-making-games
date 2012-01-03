#include <iostream>
    using namespace std;

    class Rectangle
    {
    public:
      Rectangle()
      {
        width = 0;
        height = 0;
      }

      Rectangle(int nx, int ny)
      { width = nx; height = ny; }

      ~Rectangle(){}

      Rectangle operator+ (const Rectangle& p1)
      {
        return Rectangle( width + p1.width, height + p1.height );

      }
 
      Rectangle operator-(const Rectangle& p1)
      {
        return Rectangle( width - p1.width, height - p1.height );
      }


      int getWidth(){ return width; }
      int getHeight(){ return height; }


    private:
      int width;
      int height;

    };


    int main(int argc, char* argv[])
    {
      Rectangle ptA(1, 2);
      Rectangle ptB(3, 4);
      Rectangle ptC = ptA - ptB;

      cout << "The difference of RectangleA and RectangleB is:= (" 
           << ptC.getWidth() << "," 
           << ptC.getHeight() << ")" << endl;
  
      return 0;
    }
