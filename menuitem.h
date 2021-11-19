
#ifndef __MenuItem__
#define __MenuItem__

#include <string>

//BaseClass ----------------------
class MenuItem
{
private:
    int menuitemId;
    string menuitemName;
    string menuitemType;

};

//Derivedclass Base class MenuItem
class Starter : public MenuItem
{
private:
    string starter;

};

//sidedish  Base class MenuItem
class SideDish : public MenuItem
{


};

//MainCourse  Base class MenuItem
class MainCourse : public MenuItem
{


};


//Desert  Base class MenuItem
class Desert : public MenuItem
{


};


//Drink  Base class MenuItem
class Drink : public MenuItem
{


};


//MainCourse  Base class MenuItem
class MainCourse : public MenuItem
{


};


//OtherItems  Base class MenuItem
class OtherItems : public MenuItem
{


};




#endif // __MenuItem__
