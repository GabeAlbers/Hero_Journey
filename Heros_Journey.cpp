#include <iostream>

#include <string>

#include <cstlib>

#include <ctime>

using namespace std;

// using a function to create random numbers.
int random_int(int min, int max)
{
    int x = time(0);
    srand(x);
 
    // this finds the range of the numbers (max - min) 
    // then it adds the min for the minimum value
    int random_number = (rand() % (max - min)) + min
}

class Hero
{
private:

    int strength;

    int courage;

    string name;

public:

    //construtor fot the name
    hero_name(string hero_name)
    {
        name = hero_name;

        //sets the streingth and corage values to 
        //ones from 1 to 100
        strength = random_int(1, 100);
        courage = random_int(1, 100);
    }

    //setting for courage
    void set_courage(int new_courage)
    {
        courage = new_courage;
    }

    //training increases strength based on time
    void training(int time)
    {
        strength = strength + time; 
    }

    //therapy icreases courage a random amount
    void attend_therapy()
    {
        int increase = random_int(1, 20);
        courage = courage + increase;

    }
};


//send on a quest
void sendOnQuest(Hero& hero)
{
}

int main
{

}