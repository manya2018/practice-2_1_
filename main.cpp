#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Animal
{
public:
    string name;
    string feature;
    string sound;
public:
    Animal( string name)
    {
        this->name=name;
        feature = "";
        sound = "";
    }

    void get_sound()
    {
        cout << "sound : " <<  sound << endl;
    }
    void get_action()
    {
        cout << "action : " << feature << endl;
    };

};
class Farm_Animal : public Animal
{
public:
    vector <string> resourse;
    Farm_Animal( string name) : Animal(name)
    {

    }

public:
    void get_resourse(string res)
    {
        int Size = resourse.size();
        int r = 0;
        for (int i = 0; i < Size; i++) {
            if (resourse[0] == res) {
                cout << "from object " << name << " was received " << res << endl;
                r++;
                break;
            }
        }
        if(r==0)
        {
            cout <<"getting the resource is not possible" << endl;
        }
    }
    void get_action(string x)
    {
        cout << "action : " << feature << endl;
    };
    };

class Cow: public Farm_Animal {
public:
    Cow( string name,string feature, string sound, string RES) : Farm_Animal(name)
    {

        this->feature = feature;
        this->sound = sound;
        resourse.push_back(RES);
    };
public:
    void get_action(string object)
    {
        cout << "the action of the cow " << name  << " in relation to " << object << " : " << feature << endl;
    }
};
class Sheep: public Farm_Animal {
public:
    Sheep( string name,string feature, string sound, string RES) : Farm_Animal(name)
    {

        this->feature = feature;
        this->sound = sound;
        resourse.push_back(RES);
    };
public:
    void get_action(string object)
    {
        cout << "the action of the sheep " << name  << " in relation to " << object << " : " << feature << endl;
    }
};
class Horse: public Farm_Animal {
public:
    Horse( string name,string feature, string sound, string RES) : Farm_Animal(name)
    {

        this->feature = feature;
        this->sound = sound;
        resourse.push_back(RES);
    };
public:
    void get_action(string object)
    {
        cout << "the action of horse " << name  << " in relation to " << object << " : " << feature << endl;
    }
};
class Swan: public Farm_Animal {
public:
    Swan( string  name,string feature, string sound, string RES) : Farm_Animal(name)
    {

        this->feature = feature;
        this->sound = sound;
        resourse.push_back(RES);
    };
public:
    void get_action(string object)
    {
        cout << "the action of yhe swan " << name  << " in relation to " << object << " : " << feature << endl;
    }
};
class groundhog: public Animal {
public:
    groundhog(string feature, string sound) : Animal(name)
    {

        this->feature = feature;
        this->sound = sound;
    };
public:
    void get_action(string object)
    {
        cout << "the action of the groundhog " << name  << " in relation to " << object << " : " << feature << endl;
    }
};
class Lion: public Animal {
public:
    Lion(string feature, string sound) : Animal(name)
    {

        this->feature = feature;
        this->sound = sound;
    };
public:
    void get_action(string object)
    {
        cout << "the action of the lion " << name  << " in relation to " << object << " : " << feature << endl;
    }
};
class Lynx: public Animal {
public:
    Lynx(string feature, string sound) : Animal(name)
    {

        this->feature = feature;
        this->sound = sound;
    };
public:
    void get_action(string object)
    {
        cout << "the action of the lynx " << name  << " in relation to " << object << " : " << feature << endl;
    }
};
class Raccoon: public Animal {
public:
    Raccoon(string feature, string sound) : Animal(name)
    {

        this->feature = feature;
        this->sound = sound;
    };
public:
    void get_action(string object)
    {
        cout << "the action of the raccoon " << name  << " in relation to " << object << " : " << feature << endl;
    }
};



int main()
{
    Cow  mymy("mymy", "eating","moo","milk");
    mymy.get_resourse("milk");
    mymy.get_action("grass");




    return 0;
};
