#include <iostream>

using namespace std;

struct Book {

    string title;
    string author;
};

int main(){


    Book book[3] = {
        {"Harry Potter", "J.K. Rowling"},
        {"The Lord of the Rings", "J.R.R. Tolkien"},
        {"The Hobbit", "J.R.R. Tolkien"}
    };

    for (int i = 0 ; i < 3 ; i++){
        cout << book[i].title << " by " << book[i].author << endl;
    }

    return 0;

}