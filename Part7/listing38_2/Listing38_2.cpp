#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Item
{
public:
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

class TenSlotBag
{
Item items[10];  //can only hold 10 items
public:
static int number_in_bag; //how many items we currently have
TenSlotBag(){}
void PushItem( char [], char [], float );
void WriteToDisk();

void ReadFromDisk();
void PrintToScreen();
};

void TenSlotBag::ReadFromDisk()
{
ifstream infile("INVENTORY.DAT");
infile.read((char*)this, sizeof(*this) );
}

void TenSlotBag::PrintToScreen()
{
cout << "Here are the items in this container " << endl;
int counter = 0;
while(items[counter].id[0])
{
cout << "Item ID: " << items[counter].id << endl;
cout << "Item Description: " << items[counter].description << endl;
cout << "Item Cost: " << items[counter].cost << endl;
counter++;
}

}

int main(int argc, char* argv[])
{

TenSlotBag Bag;

Bag.ReadFromDisk();

Bag.PrintToScreen();

return 0;
}
