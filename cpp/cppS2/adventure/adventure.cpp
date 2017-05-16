// Brooks Boyack /=====\ 3-8-17
//                 <|>
//                  |
#include <iostream>
#include <iostream>
using namespace std;
class Monsters{
    public:
        void setStr(int s){
            str = s;
        }
        void setDex(int d){
            dex =d;
        }
        void setTou(int t){
            tou = t;
        }
        void setKno(int k){
            kno = k;
        }
        
        void setLvl(int l){
            lvl = l;
        }


        int getLvl(){
            return(str + dex + tou + kno);
        }
        int getCS(){
            return(lvl* str);
        }
        int getHP(){
            return(tou * (lvl/2))
        }
    protected:

        int str;
        int dex;
        int kno;
        int tou;
        
};
class Demons: public Monsters{
    public:
        void setRank(int r){
            rank = r;
        }
        void setWings(bool w){
            wings = w;
        }
        void getFire(){
            return(Kno * rank)
        }
    protected:
        int rank;
        bool wings;
};
class Undead: public Monsters{
    public:
        void setAmm(int a){
            amm = a;
        }
        void setRot(int r){
            rot = r;
        }
        void getFear(){
            return(rot*amm);
        }
    protected:
        int ammount;
        int rot;
};
class Beasts: public Monsters{
    public:

        void setSize(int s){
            size = s;
        }
        void getBite(){
            return(str*size);
        }
};
class Human: public Monsters{
    void setArmVal(int v){
        armVal = v;
    }
    void getArmorclass(){
        return(armVal+dex+tou);
    }
};
int main(void){
    Monsters m1;
    Demons d1;
    Undead u1;
    Beasts b1;
    Human h1;
    int val;
    bool tf;
    int value;
    
    cout<< "What monster fits your needs? (1= Demon) (2= Undead) (3= Beasts) (4 = Human)" << endl;
    cin >> value;
    if(value == 1){
        cout << "What is the Strength of the monster?"<< endl;
        cin >> val;
        m1.setStr(val);
        cout << "what is the Dexterity ?" << endl;
        cin >> val;
        m1.setDex(val);
        cout << "What is the Toughness ?"<< endl;
        cin >> val;
        m1.setTou(val);
        cout << "What is the Knowledge ?"<< endl;
        cin >> val;
        m1.setKno(val);
        cout << "What is the Rank of the Demon?"<< endl;
        cin >> val
        d1.setRank(val);
        cout << "The level of the Demon is " << m1.getLvl() << "with "<< m1.getHp() << "HP and a Combat skill of " << m1.getCS()<<endl;
        cout << "The fire damgae of the Demon is " << d1.
        return 0;
    }
     if(value == 2){
        cout << "What is the Strength of the monster?"<< endl;
        cin >> val;
        m1.setStr(val);
        cout << "what is the Dexterity ?" << endl;
        cin >> val;
        m1.setDex(val);
        cout << "What is the Toughness ?"<< endl;
        cin >> val;
        m1.setTou(val);
        cout << "What is the Knowledge ?"<< endl;
        cin >> val;
        m1.setKno(val);
        cout << "How many Undead are in the hoard?" << endl;
        cin >> val;
        u1.setAmm(val);
        cout << "What is the rot level are the Undead?" << endl;
        cin >> val;
        u1.setRot(val);
        
        cout << "The level of the Undead is " << m1.getLvl() << "with "<< m1.getHp() << "HP and a Combat skill of " << m1.getCS()<<endl;
        cout << "The fear stat of the undead is " << u1.getFear() << endl;
        return 0;
     }
      if(value == 3){
        cout << "What is the Strength of the monster?"<< endl;
        cin >> val;
        m1.setStr(val);
        cout << "what is the Dexterity ?" << endl;
        cin >> val;
        m1.setDex(val);
        cout << "What is the Toughness ?"<< endl;
        cin >> val;
        m1.setTou(val);
        cout << "What is the Knowledge ?"<< endl;
        cin >> val;
        m1.setKno(val);
        cout << "What is the size of the Beast" << endl\
        cin >> val;
        b1.setSize(val);
        cout << "The level of the Beast is " << m1.getLvl() << "with "<< m1.getHp() << "HP and a Combat skill of " << m1.getCS()<<endl;
        cout << "The damage a bite deals is eaqual to " << b1.getBite() << endl
        return 0;
      }
       if(value == 4){
        cout << "What is the Strength of the monster?"<< endl;
        cin >> val;
        m1.setStr(val);
        cout << "what is the Dexterity ?" << endl;
        cin >> val;
        m1.setDex(val);
        cout << "What is the Toughness ?"<< endl;
        cin >> val;
        m1.setTou(val);
        cout << "What is the Knowledge ?"<< endl;
        cin >> val;
        m1.setKno(val);
        cout << "What is the armor level of the Human " << endl;
        cin >> val;
        h1.setArmVal(val);
        cout << "The level of the Human is " << m1.getLvl() << "with "<< m1.getHp() << "HP and a Combat skill of " << m1.getCS() << endl;
        cout << "The armor class of the Human is " << h1.getArmorClass() << endl;
        return 0;
       }
}