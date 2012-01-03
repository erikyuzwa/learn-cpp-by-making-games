#include <fstream>
#include <string>
#include <iostream>
using namespace std;

class Item
{
char id[5];
char description[256];
float cost; 

public:
Item()
{
   description[0] = '\0';
}

Item( char nid[], char ndesc[], float ncost) : cost(ncost)
{
strcpy( id, nid );
strcpy( description, ndesc );
}

};

class Bag
{

Item items[5];  //can only hold 5 items

public:
static int number_in_bag; //how many items we currently have
Bag(){}
void PushItem( char [], char [], float );
void WriteToDisk();
};

int Bag::number_in_bag = 0;

void Bag::PushItem( char ID[], char desc[], float price )
{
  items[number_in_bag] = Item( ID, desc, price );
  number_in_bag++;
}

void Bag::WriteToDisk()
{
  ofstream outfile("INVENTORY.DAT");
  outfile.write((char *)this, sizeof(*this));
}

int main(int argc, char* argv[])
{

Bag BagOfHolding;

BagOfHolding.PushItem("1", "Potion of Healing", 1.4f);
BagOfHolding.PushItem("2", "Big Sword", 10.0f);

BagOfHolding.WriteToDisk();

cout << Bag::number_in_bag << " items were written. " << endl;

return 0;
}
