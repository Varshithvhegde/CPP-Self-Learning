#include <iostream>
#include <any>
#include <string>
using namespace std;
struct Node
{
    any data;
    Node *next;
};

class linkedlist
{
private:
    Node *head;

public:
    linkedlist(/* args */) : head(nullptr) {}
    // ~linkedlist();
    template <typename T>
    void insert(T value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }
    void display()
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->data.type() == typeid(int))
            {
                cout << any_cast<int>(current->data) << " ";
            }
            else if (current->data.type() == typeid(std::string))
            {

                cout << any_cast<string>(current->data) << " ";
            }
            current = current->next;
        }
        cout << endl;
    }
    ~linkedlist()
    {
        while (head != nullptr)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    linkedlist list;
    list.insert(10);
    list.insert(string("hello World"));
    list.display();
}