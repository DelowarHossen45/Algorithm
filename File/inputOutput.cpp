#include <fstream>
#include <iostream>
using namespace std;
 
int main () {
   char data[100];
   int n;

   // open a file in write mode.
   ofstream outfile;
   outfile.open("C:\\Users\\Delowar Hossen Apple\\Desktop\\Algorithm\\File\\filenam .txt");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "; 
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;
   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile; 
   infile.open("C:\\Users\\Delowar Hossen Apple\\Desktop\\Algorithm\\File\\filenam .txt"); 
 
   cout << "Reading from the file" << endl; 
   infile >> data; 

 
   infile >> data; 
   cout << data << endl; 

   // close the opened file.
   infile.close();

   return 0;
}
