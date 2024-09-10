#include<iostream>
using namespace std;
class Book{
private:
int BookID;
int pages;
float price;
public:
void setBookID(int ID){
    BookID = ID;
}
void setpages(int p){
    pages=p;
}
void setprice(float pr){
    price= pr;
}

int getBookID(){
    return BookID;
}
int getpages(){
    return pages;
}
float getprices(){
    return price;
}

void showBookdetails(){
    cout<<"BookID"<<BookID<<endl;
    cout<<"pages"<<pages<<endl;
    cout<<"prices"<<price<<endl;
}
};
int main(){
    Book*book1 = new Book();
    Book*book2 = new Book();

    book1->setBookID(105);
    book1->setpages(135);
    book1->setprice(1000);

    book2->setBookID(104);
    book2->setpages(1045);
    book2->setprice(1000);

    cout<<"Costlier book detail" <<endl;
if (book1->getprices() > book2->getprices() ){
    book1->showBookdetails();
}
else {
    book2->showBookdetails();
}
delete book1;
delete book2;
return 0;
}