#include <iostream>

class Caine {
    public:
    bool manca() {
        std::cout<<"Caine a manca";
        return true;
    }
    int setAge(int newage) {
        age=newage;
        return age;
    }
    int getAge() {
        return age;
    }
    private:
    int age;
};
int main(){
    Caine c=Caine();
    c.manca();
    c.setAge(10);
    std::cout<<c.getAge();

  return 0;
    }


