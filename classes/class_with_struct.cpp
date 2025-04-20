#include <iostream>
#include <string>

using namespace std;

struct Book{
    string title;
    string author;
    int year;
};

class Library {
    private:
        Book* books;
        int size;

    public:
        Library(int s){
            size = s;
            books = new Book[size];
        }

        void setBook(int index, string title, string author, int year)
        {
            if (index >= 0 && index < size)
            {
                books[index].title = title;
                books[index].author = author;
                books[index].year = year;
            }
        }

        void displayBooks()
        {
            cout << "\nLibrary Contents:\n";
            for (int i = 0; i < size; ++i)
            {
                cout << "Book " << i + 1 << ":\n";
                cout << "  Title : " << books[i].title << "\n";
                cout << "  Author: " << books[i].author << "\n";
                cout << "  Year  : " << books[i].year << "\n";
            }
        }

        ~Library(){
            delete[] books;
        }



};

int main(){

    int n = 2;
    Library library(n);

    library.setBook(0, "1984", "George Orwell", 1949);
    library.setBook(1, "To Kill a Mockingbird", "Harper Lee", 1960);

    library.displayBooks();

    return 0;

}