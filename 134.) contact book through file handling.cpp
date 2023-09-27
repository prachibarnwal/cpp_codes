/*
Create an address book using array of structures and store them in a 
binary file. Structure should contain : name, phone, address
Address named structure should further contain : h_no, city, pincode
Operations to be performed : 
1. add a new conatct
2. modify
3. search on the basis of phone
4. search on the basis of city
5. delete a contact
6.) to show all contacts
*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
struct Address
{
	int h_no;
	char city[20];
	long int pin;
};
struct Contact
{
	char name[60];
	char phone[15];
	Address a;
};

int str_cmp(char a[20], char b[20])
{
	int cnt = 0;
	while(a[cnt] != '\0' || b[cnt] != '\0')
	{
		if(a[cnt] == b[cnt])
			cnt++;
		else
			return 0;
	}
	return cnt;
}
int main()
{
	Contact c;
	int ch,val,hno,pinc,cnt=0;
	char num[15],choice,name1[60],city1[20];
	fstream file;
	fstream file1;
	do
	{
		cout<<"\nPress 1 - Add a New Contact"<<endl;
		cout<<"Press 2 - Modify an Existing Contact"<<endl;
		cout<<"Press 3 - Search on the Basis of Number"<<endl;
		cout<<"Press 4 - Search on the Basis of City"<<endl;
		cout<<"Press 5 - Delete a Contact"<<endl;
		cout<<"Press 6 - Show All Contacts"<<endl;
		cout<<"Press 7 - Exit\n"<<endl;
		cout<<"Enter Your Choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter Name, Number : ";
				cin>>c.name>>c.phone;
				cout<<"Enter H_No, City, Pin : ";
				cin>>c.a.h_no>>c.a.city>>c.a.pin;
				file.open("contacts.dat",ios::app | ios::binary);
				file.write((char*)&c,sizeof(c));
				cout<<"\tData Stored  !!!"<<endl;
				file.close();
				break;
			case 2:
				cout<<"Enter the Number whose Data has to be Modified : ";
				cin>>num;
				file.open("contacts.dat", ios::in | ios::binary);
				file1.open("temp.dat",ios :: out | ios :: binary);
				while(file.read((char*)&c,sizeof(c)))
				{
					val = str_cmp(num,c.phone);
					if(val != 0)
					{
						cout<<"\tFound Data ::"<<endl;
						cout<<c.name<<"\t"<<c.phone<<"\t"<<c.a.h_no<<","<<c.a.city<<"\t"<<c.a.pin<<endl;
						cout<<"Do you want to Modify the Data (Y/N) : ";
						cin>>choice;
						if(choice == 'y' || choice == 'Y')
						{
							cout<<"\nEnter Updated Name : ";
							cin>>name1;
							cout<<"Enter Updated H_No, City, Pin : ";
							cin>>hno>>city1>>pinc;
							cout<<endl;
							strcpy(c.name,name1);
							strcpy(c.a.city, city1);
							c.a.h_no = hno;
							c.a.pin = pinc;
							cout<<"\tData Modified !!!"<<endl;
						}					
					}
					file1.write((char*)&c,sizeof(c));
				}
				file.close();
				file1.close();
				//code to update whole "contacts.dat" file 
				file.open("contacts.dat",ios :: out | ios :: binary);
				file1.open("temp.dat",ios :: in | ios::binary);
				while(file1.read((char*)&c,sizeof(c)))
				{
					file.write((char*)&c,sizeof(c));
				}
				file.close();
				file1.close();
				break;
			case 3:
				cout<<"Enter the Number whose Data has to be Searched : ";
				cin>>num;
				file.open("contacts.dat", ios::in | ios::binary);
				while(file.read((char*)&c,sizeof(c)))
				{
					val = str_cmp(num,c.phone);
					if(val != 0)
					{
						cout<<"\tData Found !!!"<<endl;
						break;
					}
				}
				if(val != 0)
				{
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cout<<c.name<<"\t"<<c.phone<<"\t"<<c.a.h_no<<","<<c.a.city<<"\t"<<c.a.pin<<endl;
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				}
				else
					cout<<"\tRecord Not Found !!!"<<endl;
				file.close();
				break;
			case 4:
				cout<<"Enter the City Name whose Data has to be Searched : ";
				cin>>num;
				file.open("contacts.dat", ios::in | ios::binary);
				while(file.read((char*)&c,sizeof(c)))
				{
					val = str_cmp(num,c.a.city);
					if(val != 0)
					{
						cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
						cout<<c.name<<"\t"<<c.phone<<"\t"<<c.a.h_no<<","<<c.a.city<<"\t"<<c.a.pin<<endl;
						cnt++;
					}
				}
				if(cnt == 0)
					cout<<"\tRecord Not Found !!!"<<endl;
				file.close();
				break;
			case 5:
				cout<<"Enter the Number whose Data has to be Deleted : ";
				cin>>num;
				file.open("contacts.dat", ios::in | ios::binary);
				file1.open("temp.dat",ios :: out | ios :: binary);
				while(file.read((char*)&c,sizeof(c)))
				{
					val = str_cmp(num,c.phone);
					if(val != 0)
					{
						cout<<"\tFound Data ::"<<endl;
						cout<<c.name<<"\t"<<c.phone<<"\t"<<c.a.h_no<<","<<c.a.city<<"\t"<<c.a.pin<<endl;
						cout<<"Do you want to Delete the Data (Y/N) : ";
						cin>>choice;
						if(choice == 'y' || choice == 'Y')
						{
							cout<<"\tData Deleted !!!"<<endl;	
							continue;
						}
					}
					file1.write((char*)&c,sizeof(c));
				}
				file.close();
				file1.close();
				//code to update whole "contacts.dat" file 
				file.open("contacts.dat",ios :: out | ios :: binary);
				file1.open("temp.dat",ios :: in | ios::binary);
				while(file1.read((char*)&c,sizeof(c)))
				{
					file.write((char*)&c,sizeof(c));
				}
				file.close();
				file1.close();
				break;
			case 6:
				file.open("contacts.dat",ios::in | ios :: binary);
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				while(file.read((char*)&c,sizeof(c)))
				{
					cout<<c.name<<"\t"<<c.phone<<"\t"<<c.a.h_no<<","<<c.a.city<<"\t"<<c.a.pin<<endl;
				}
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				file.close();
				break;
		}
	}while(ch != 7);
	return 0;
}
