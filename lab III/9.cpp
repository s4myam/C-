// 9. Overload != for Book
#include <iostream>
using namespace std;

class Book
{
public:
    string title, author;
    Book(string t = "", string a = "") : title(t), author(a) {}
    bool operator!=(const Book &b)
    {
        return title != b.title || author != b.author;
    }
};

int main()
{
    Book b1("Book A", "Author X"), b2("Book A", "Author Y");
    cout << (b1 != b2 ? "Different" : "Same") << endl;
    return 0;
}