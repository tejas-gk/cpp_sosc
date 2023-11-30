#include<iostream>

class Player{
    public:
        int x,y,speed;
        Player(int x,int y,int speed){
            this->x=x;
            this->y=y;
            this->speed=speed;  
        }
        void move(int xa,int ya){
            x+=xa*speed;
            y+=ya*speed;
        }
        ~Player(){
            std::cout<<"Player destroyed";
        }
};

class AccessSpecifier{
    public:
        int publicVar;
    private:
        int privateVar;
        friend class AnotherClass;
    protected:
        int protectedVar;
    public:
        AccessSpecifier(){
            publicVar=1;
            privateVar=2;
            protectedVar=3;
        }
        void print(){
            std::cout<<publicVar<<" "<<privateVar<<" "<<protectedVar;
        }
};

class AnotherClass:public AccessSpecifier{
    public:
        AnotherClass(){
            std::cout << publicVar  << " " << protectedVar << privateVar;
        }
};


int main(){
    Player player(5,5,2);
    player.move(1,1);
    std::cout<<player.x<<" "<<player.y;

    AccessSpecifier accessSpecifier;
    accessSpecifier.print();
    AnotherClass anotherClass;
    anotherClass.publicVar=10;
    anotherClass.print();

}