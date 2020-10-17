#include <iostream>
#include "Organism.cpp"
using namespace std;

void gui();
Organism variable(" ", 0, 0, 0, 0);
string s;
int selectionA;
int selectionB;
int main(){
    gui();
    variable.Initialization(selectionA);
    s = variable.Sequence(selectionB);
    cout << s;
    return 0;
}

void gui(){
    cout << "Please select the organism of your choice: \n"
    << "(1) Chicken \n"
    << "(2) E. coli \n"
    << "(3) Grasshopper\n"
    << "(4) Human \n"
    << "(5) Maize \n"
    << "(6) Octopus \n"
    << "(7) Rat \n"
    << "(8) Sea Urchin \n"
    << "(9) Wheat \n"
    << "(10) Yeast \n"
    << "(11) φX174 \n";
    cin >> selectionA;
    cout <<"Please enter a desired length\n";
    cin >> selectionB;
}
