#include <iostream>
#include <string>

class MyClass {
private:
    int myVariable;
    std::string myString;

public:
    void setMyVariable(int value) {
        myVariable = value;
    }

    int getMyVariable() const {
        return myVariable;
    }

    void setMyString(const std::string& str) {
        myString = str;
    }

    std::string getMyString() const {
        return myString;
    }
};

int main() {
    MyClass obj;
    obj.setMyVariable(42);
    obj.setMyString("Hello, world!");

    std::cout << "MyVariable: " << obj.getMyVariable() << std::endl;
    std::cout << "MyString: " << obj.getMyString() << std::endl;

    return 0;
}
