#include <iostream>
#include <vector>

using namespace std;

class List {
private:
    
public:
    vector<string> list;
    string name;
    void print_menu();
    void print_list();
    void add_item();
    void delete_item();
    List(){
        // constructor
    }
    ~List(){
        // deconstructor
    }
};
