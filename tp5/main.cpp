#include <iostream>
#include "list.h"

int main(int argc, char const *argv[])
{
    stack<string> tab(5);
    tab.push("1");
    tab.push("2");
    tab.push("3");
    tab.pop();
    tab.push("4");
    cout << "premier element : " << tab.peek() << endl;
    cout << "taille du tableau : " << tab.size() << endl;
    tab.pop();
    tab.pop();
    tab.pop();
    if (tab.Empty()) {
        cout << "Vide \n";
    }
    return 0;
}
