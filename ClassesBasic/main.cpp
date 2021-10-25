#include <iostream>
#include <vector>
#include <time.h>

// creating dynamic class objects 
/*
class Myclass {
public:
    void printText(std::string text) {
        tempText = text;
        std::cout << tempText;
    }
    //inline function 
    inline void assignvalue() {
        tempText = { " " };
    }
private:
    std::string tempText;
};
class Rootclass {
public:
    int rootID;
};

class Child :public Myclass , public Rootclass {
    
};
int main() {
    Myclass* c1 = new Myclass();
    c1->printText("This is a text code ");

    Child *ch1 = new Child();
    ch1->rootID = 0;

    delete(c1);
    return 0;
}



*/

/*
// Creating Object statically and Dynamically 

class Ctest {
public:
    Ctest() {
        std::cout << "Object Created...";
        value = 0;
    }
    Ctest(int n) {
        std::cout << "Object " << n << "Created " << std::endl;
    }
   
    int value;
};


std::vector<Ctest*> ClassOBJ;
std::vector<Ctest> ClassOBJ2;
int main() {
    size_t sz = 10000;
    ClassOBJ.resize(sz);
    clock_t tStart = clock();
    for (int i = 0; i < sz; i++) {
        Ctest* obj = new Ctest(i);
        ClassOBJ[i]= obj;
        ClassOBJ[i]->value = i;
    }

    ClassOBJ[10]->value = 100;
    ClassOBJ[20]->value = 200;
    std::cout << ClassOBJ[10]->value << "   " << ClassOBJ[20]->value << std::endl;
    for (int i = 0; i < sz; i++) {
        std::cout << ClassOBJ[i]->value << std::endl;
        delete(ClassOBJ[i]);
    }

    std::cout << "\n Time taken: " << ((double)(clock() - tStart) / CLOCKS_PER_SEC);
    ClassOBJ2.resize(sz);
    clock_t tStart2 = clock();
    for (int i = 0; i < sz; i++) {
        ClassOBJ2[i].value = i;
        std::cout << ClassOBJ2[i].value << std::endl;
    }
   // for (int i = 0; i < sz; i++) {
    //    ClassOBJ2[i].~Ctest();
    //}
    std::cout << "\n Time taken Object 2: " << ((double)(clock() - tStart2) / CLOCKS_PER_SEC);

    return 0;
}

*/



//class Person {
//public:
//    Person() {
//        std::cout << "Default constructor" << std::endl;
//    }
//    Person(int a) {
//        std::cout << a << std::endl;
//    }
//    ~Person() {
//        
//    }
//}p;
//
//Person p1;
//Person p2;
//Person* p4ptr1 = new Person;
//Person* p4ptr2 = new Person;
//int main() {
//    Person* p4ptr3 = new Person(10);
//    // free the memory 
//    delete(p4ptr1);
//    delete(p4ptr2);
//    delete(p4ptr3);
//    return 0;
//}


int main() {

 }