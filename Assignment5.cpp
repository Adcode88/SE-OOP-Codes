#include <iostream>
using namespace std;

class publication{
   
   public:
   float price;
   string title;

   void getdata(){
      cout<<"Enter the Title of the Book:"<<endl;
      cin>>title;
      cout<<"Enter the Price of the Book:"<<endl;
      cin>>price;
   }
   void showdata(){

            cout<<"The Title of the Book is:"<<title<<endl;
            cout<<"The Price of the Book is:"<<price<<endl;
      }
   };

class book : public publication{
   public:
   int page;

   void getpages(){
      getdata();
      cout<<"Enter number of Pages in the Book:"<<endl;
      cin>>page;
   }

   void showpages(){
      showdata();
      cout<<"The number of Pages in the Book is:"<<page<<endl;
      }
   };


class tape : public publication{
   public:
   float time;

   void gettime(){
      cout<<"Enter the Playing Time of the Book in Hours:"<<endl;
      cin>>time;
   }

   void showtime(){
      cout<<"The Playing Time of the Book in Hours is:"<<time<<endl;
      }
   };

int main() {

   book b;
   tape t;

   b.getpages();
   t.gettime();

   try{
      if(b.price<=0){
         throw(b.price);
         }
      else if(b.page<=0){
         throw (b.page);
         }
      else if(t.time<=0){
         throw (t.time);
         }
      else{
         cout<<endl;
         b.showpages();
         t.showtime();
         }
      }
   catch(float price){
      cout<<"Book cannot have "<<price<<" price"<<endl;
      }
   catch(int page){
      cout<<"Book cannot have "<<page<<" pages"<<endl;
      }
   catch(float time){
      cout<<"Book cannot have "<<time<<" time"<<endl;
      }

return 0;
}