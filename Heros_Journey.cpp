#include <iostream>

#include <string>

#include <cstdlib>

#include <ctime>

using namespace std;

// using a function to create random numbers.
int random_int(int min, int max)
{
 
    // this finds the range of the numbers (max - min) 
    // then it adds the min for the minimum value
    int random_number = (rand() % (max - min + 1)) + min;

    return random_number;
}

class Hero
{
private:

    int hero_strength;

    int hero_courage;

    string hero_name;

public:

    //construtor fot the name
    Hero(string name)
    {
        hero_name = name;

        //sets the streingth and corage values to 
        //ones from 1 to 100
        hero_strength = random_int(1, 100); 
        hero_courage = random_int(1, 100);
    }

    //getter functions (i forgot these...)
    int strength() 
    {
        return hero_strength;
    }
    int courage() 
    {
        return hero_courage;
    }
    string name() 
    {
        return hero_name;
    }

    //setting for courage
    void set_courage(int new_courage)
    {
        hero_courage = new_courage;
    }

    //training increases strength based on time
    void training(int time)
    {
        hero_strength = hero_strength + time; 
    }

    //therapy icreases courage a random amount
    void attend_therapy()
    {
        int increase = random_int(1, 20);
        hero_courage = hero_courage + increase;

    }
};


//send on a quest
void quest(Hero &hero)
{
    int sucess_rate = random_int(1, 100);

    //win lose neutral
    if (hero.strength() > sucess_rate) // win
    {

        int new_courage = hero.courage() - random_int(1, 10); // takes out 1 to 20 courage
            if (new_courage < 0) //stops corage from becoming negative
            {
                new_courage = 0;
            }
        hero.set_courage(new_courage);

        cout << endl << hero.name() << " got through their quest with great sucess!"
             << endl; 
        


    } else if (sucess_rate > hero.strength()) // lose
    {

        int new_courage = hero.courage() - random_int(30, 60); // takes out 30 to 60 courage
            if (new_courage < 0) //stops corage from becoming negative again
            {
                new_courage = 0;
            }
        hero.set_courage(new_courage);

        cout << endl << hero.name() << " got through the quest poorly taking a strong tool on their courage."
             << endl; 

    } else //this only happens if they are the same so neutral
    {

        int new_courage = hero.courage() - random_int(15, 30); // takes out 15 to 30 courage
            if (new_courage < 0) //stops corage from becoming negative again, AGAIN
            {
                new_courage = 0;
            }
        hero.set_courage(new_courage);

        cout << endl << hero.name() << " got through the quest alright their courage could be better."
             << endl; 


    }

    

}

int main()
{
 
    // Create your hero
    Hero my_hero("Arthur");

    // Print starting stats
    cout << "--- Hero Created ---" << endl;
    cout << "Name: " << my_hero.name() << endl;
    cout << "Strength: " << my_hero.strength() << endl;
    cout << "Courage: " << my_hero.courage() << endl;

    // Send them on a quest!
    quest(my_hero);

    // Print stats after the quest
    cout << endl << "--- After Quest ---" << endl;
    cout << "Courage is now: " << my_hero.courage() << endl;

    return 0;


}