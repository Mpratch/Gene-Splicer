/*	Project:    Gene Splicer
	Name:       Matthew Pratscher
    Partner:    PARTNER'S NAME IF ANY
    Class:      CSC 1810 - Section 1
*/

#include <iostream>
#include<gene.h.cpp>
using namespace std;

int main(int argc, char *argv[])
{


	{
		int userchoice = 0;
		cout << "Choose an option(1-6):" << endl;
		cout << "1:Create a chromosome" << endl
			 << "2:Analyze a chromosome" << endl
			 << "3:Output a chromosome" << endl
			 << "4:Input a chromosome" << endl
			 << "5:Combine chromosomes" << endl
			 << "6:Exit program" << endl;

		cin >> userchoice;

		if (userchoice == 1)
		{
			//Create chromosome function
			cout << "You will start by creating a gene:" << endl;

		gene gene1;
		gene1.input();




		}
		else if (userchoice == 2)
		{
			//analyze chromosome function
			cout << "analyze chromosome" << endl;
		}
		else if (userchoice == 3)
		{
			//output chromosome to file function
			cout << "output chromosome" << endl;
		}
		else if (userchoice == 4)
		{
			//Input chromosome from file function
			cout << "input chromosome" << endl;
		}
		else if (userchoice == 5)
		{
			//combine chromosomes function
			cout << "combine chromosomes" << endl;
		}
		else
		{
			//exit
			cout << "Exiting" << endl;
		}
	}
	char c;
	cout << "Hit enter to exit:";
	cin.get(c);

	return 0;
}
class gene{
public:
    string name;
    string trait;
    string alleleavariant;
    string alleleatype;
    string alleleanucleotide;
    string allelebvariant;
    string allelebtype;
    string allelebnucleotide;
 void input(){
cout<< "Enter the following to create your gene:"<< endl;
cout << "Name of gene:";
cin >> name;
endl;
cout<<"Gene trait:";
cin >> trait;
endl;
cout << " Allele a variant:";
cin >> alleleavariant;
endl;
cout<< "Allele a type:";
cin >> alleleatype;
endl;
cout << "Allele a nucleotide sequence";
cin >> alleleanucleotide;
endl;
cout<< "Allele b variant:";
cin>> allelebvariant;
endl;
cout << "Allele b type:";
cin >> allelebtype;
endl;
cout << "Allele b nucleotide sequence";
cin>> allelebnucleotide;
endl;

 }




};









class allele
{
public:
    string nucleotide;
    string variantName;
    string variantType;





};
class Chromosome
{
public:



};
class geneSequencer
{

};
