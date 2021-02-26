#include <iostream>
using namespace std;

template <class T>
class stack
{
private:
    T *Tableau;
    int premier;
    int taille;
 
public:
    stack(int size);
    void push(const T &);
    T pop();
    T peek();
    int size() const;
    bool Empty() const;
    ~stack() {
        delete[] Tableau;
    }
};

template <class T>
stack<T>::stack(int size)
{
    Tableau = new T[size];
    taille = size;
    premier = -1;
}

template <class T>
void stack<T>::push(const T &x)
{
    if (premier==taille-1)
    {
        cout << "Stack complet\n";
        exit(EXIT_FAILURE);
    }
    cout << "Insertion de : " << x << endl;
    Tableau[++premier] = x;
}

template <class T>
T stack<T>::peek()
{
    if (!Empty()) {
        return Tableau[premier];
    }
}

template <class T>
int stack<T>::size() const
{
    return premier + 1;
}

template <class T>
bool stack<T>::Empty() const
{
    return premier == -1;               
}

template <class T>
T stack<T>::pop()
{
    if (Empty())
    {
        cout << "Stack vide \n";
        exit(EXIT_FAILURE);
    }
 
    cout << "on enleve : " << peek() << endl;
    return Tableau[premier--];
}
