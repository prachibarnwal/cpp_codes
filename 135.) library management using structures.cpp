/*
LIBRARY MANAGEMENT project
to make two files named "books.dat" and "memebers.dat"

operations performed on file named book : input, show, search
DATA OF BOOK FILE : 
book_id, book_title, publisher, author, no of copies

operations performed : input, show, search 
DATA OF MEMBER FILE : 
mem_id, name, address, phone, email, number_of_books_issued
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
struct Book
{
	int b_id, cpy;
	char title[50], publisher[100], author[100];
};
struct Address
{
	int hno;
	char city[20];
	long int pin;
};
struct Member
{
	int mid, issue;
	char name[100],mail[60];
	Address a;
	char num[10];	
};
int main()
{
	int ch,bid,m_id,cnt;
	char ch1, tit[50],pub[100],aut[100];
	Book b;
	Member m;
	fstream file;
	fstream file1;
	cout<<"********************************************"<<endl;
	cout<<"\t!!  Library Management  !!"<<endl;
	cout<<"********************************************"<<endl;
	do
	{
		cout<<"\nPress 1 : Add a Book Details"<<endl;
		cout<<"Press 2 : Add a Member Details"<<endl;
		cout<<"Press 3 : Show All Book Details"<<endl;
		cout<<"Press 4 : Show All Member Deatils"<<endl;
		cout<<"Press 5 : Search For a Book"<<endl;
		cout<<"Press 6 : Search For a Member"<<endl;
		cout<<"Press 7 : Modify a Book Detail"<<endl;
	/*	cout<<"Press 8 : Modify a Member Detail"<<endl;
		cout<<"Press 9 : Delete a Book Detail"<<endl;
		cout<<"Press 10 : Delete a Member Detail"<<endl;
	*/	cout<<"Press 11 : Exit"<<endl;
		cout<<"\tEnter Your Choice -> ";
		cin>>ch;
		cout<<"********************************************"<<endl;
		switch(ch)
		{
			case 1:
				cout<<"Enter Book_Id, Number of Available Copies : ";
				cin>>b.b_id>>b.cpy;
				cin.ignore(1,'\n');
				cout<<"Enter Title of the Book : ";
				cin.getline(b.title,50);
				cout<<"Enter Author Name : ";
				cin.getline(b.author,100);
				cout<<"Enter Publisher Name : ";
				cin.getline(b.publisher,100);
				file.open("books.dat",ios :: app | ios :: binary);
				file.write((char*)&b, sizeof(b));
				cout<<"\tRecord Has Been Saved !!"<<endl;
				file.close();
				break;
			case 2:
				cout<<"Enter Member Id, Name : ";
				cin>>m.mid>>m.name;
				cout<<"Enter Address of the Member(H_No, City, Pin) : ";
				cin>>m.a.hno>>m.a.city>>m.a.pin;
				cout<<"Enter Mobile Number : ";
				cin>>m.num;
				cout<<"Enter e-Mail I'd : ";
				cin>>m.mail;
				cout<<"Enter Number of Books Issued Till Now : ";
				cin>>m.issue;
				file.open("member.dat", ios :: app | ios :: binary);
				file.write((char*)&m,sizeof(m));
				cout<<"\tData Stored !!!"<<endl;
				file.close();
				break;		
			case 3:
				file.open("books.dat",ios :: in | ios :: binary);
				cout<<"----------------------------------------------------------------------"<<endl;
				cout<<"B_Id\tTitle     \tPublisher    \tAuthor     \tCopies\n";
				while(file.read((char*)&b, sizeof(b)))
					cout<<b.b_id<<"\t"<<b.title<<"\t"<<b.publisher<<"\t"<<b.author<<"\t"<<b.cpy<<"\n";
				cout<<"----------------------------------------------------------------------"<<endl;
				file.close();
				break;	
			case 4:
				file.open("member.dat",ios :: in | ios::binary);
				cout<<"*******************************************************************\n";
				cout<<"M_Id\tName\tH_No,City\tPinCode\t  Phone\t\te_Mail\t\t\tIssued_Books\n";
				while(file.read((char*)&m,sizeof(m)))
					cout<<m.mid<<"\t"<<m.name<<"\t"<<m.a.hno<<","<<m.a.city<<"\t"<<m.a.pin<<"\t"<<m.num<<"\t"<<m.mail<<"\t\t"<<m.issue<<endl;
				cout<<"*******************************************************************\n";
				file.close();
				break;	
				
			case 5:
				cout<<"Enter the Book I'd to be Searched : ";
				cin>>bid;
				cnt = 0;
				file.open("books.dat", ios :: in | ios :: binary);
				while(file.read((char*)&b, sizeof(b)))
				{
					if(b.b_id == bid)
					{
						cout<<endl<<b.b_id<<"\t"<<b.title<<"\t"<<b.publisher<<"\t"<<b.author<<"\t"<<b.cpy<<"\n";
                        cnt ++;
						break;
					}
				}
				if(cnt == 0)
					cout<<"\tNo Book Record Found\n";
				file.close();
				break;
			case 6:
				cout<<"Enter the Member I'd to be Searched : ";
				cin>>m_id;
				cnt = 0;
				file.open("member.dat",ios::in | ios::binary);
				while(file.read((char*)&m, sizeof(m)))
				{
					if(m.mid==m_id)
					{
						cout<<m.mid<<"\t"<<m.name<<"\t"<<m.a.hno<<","<<m.a.city<<"\t"<<m.a.pin<<"\t"<<m.num<<"\t"<<m.mail<<"\t\t"<<m.issue<<endl;
						cnt++;
						break;
					}
				}
				if(cnt==0)
					cout<<"\tData Not Found !!!!\n";
				file.close();
				break;
			case 7:
				cout<<"Enter the Book I'd Whose Data has to be Modified : ";
				cin>>bid;
				cnt = 0;
				file.open("books.dat", ios :: in | ios :: binary);
				file1.open("temp.dat", ios :: out | ios :: binary);
				while(file.read((char*)&b,sizeof(b)))
				{
					if(bid == b.b_id)
					{
						cout<<"\tRecord Found !!!\n";
						cout<<b.b_id<<"\t"<<b.title<<"\t"<<b.publisher<<"\t"<<b.author<<"\t"<<b.cpy<<"\n";
						cnt++;
						cout<<"Do You Want to Modify the Data(Y/N) : ";
						cin>>ch1;
						if(ch1 == 'y' || ch1 == 'Y')
						{
							cout<<"Enter New Number of Available Copies : ";
							cin>>b.cpy;
							cin.ignore(1,'\n');
							cout<<"Enter Title of the Book : ";
							cin.getline(tit,50);
							cout<<"Enter Author Name : ";
							cin.getline(aut,100);
							cout<<"Enter Publisher Name : ";
							cin.getline(pub,100);
							strcpy(b.title,tit);
							strcpy(b.author,aut);
							strcpy(b.publisher,pub);
							cout<<"\tData Modified !!! \n";
						}
					}
					file1.write((char*)&b,sizeof(b));
				}
				file.close();
				file1.close();
				//code to modify whole "books.dat" file
				file.open("books.dat",ios::out | ios :: binary);
				file1.open("temp.dat",ios::in | ios :: binary);
				while(file1.read((char*)&b,sizeof(b)))
					file.write((char*)&b,sizeof(b));
				file.close();
				file1.close();
				if(cnt == 0)
					cout<<"\tRecord Not Found !!!\n";
					break;
		}
		
		
		
		
	}while(ch != 11);
	
	
	return 0;
}
