/*
Create an address book using array of structures 
Structure should contain : name, phone, address
Address named structure should further contain : h_no, city, pincode
Operations to be performed : 
1. add a new conatct
2. modify
3. search on the basis of phone
4. search on the basis of city
5. delete a contact
*/
#include<iostream>
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
	int a,c,i;
	Contact arr[50];
	Contact arr2[20];
	int pos = 0,val = 0,cnt = 0;
	char num[15],cit[20],ch;				
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
		cin>>a;
		switch(a)
		{
			case 5:
				cout<<"Enter the Mobile Number whose Record has to be Deleted : ";
				cin>>num;
				for(i=0;i<pos;i++)
				{
					val = str_cmp(num,arr[i].phone);
					c = i;
					if(val != 0)
					break;	
				}
				if(val != 0)
				{
					cout<<"\tCurrent Record : "<<endl;
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        			cout<<"Name\tMobile_Number\tH_No,City\tPin"<<endl;
       				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cout<<arr[c].name<<"\t"<<arr[c].phone<<"\t"<<arr[c].a.h_no<<","<<arr[c].a.city<<"\t"<<arr[c].a.pin<<endl;
					cout<<"Do You Want to Delete tha Data (Y/N) : ";
					cin>>ch;
					if(ch== 'Y' || ch == 'y')
					{
						for(i = c; i < pos-1; i++)
							arr[i] = arr[i+1];
						pos--;
						cout<<"\tData Deleted !!!"<<endl;
					}
				}
				else
					cout<<"\tRECORD NOT FOUND !!!\n";
				break;
			case 4:
				cout<<"Enter the City Name Whose Records has to be Searched : ";
				cin>>cit;
				for(i=0;i<pos;i++)
				{
					val = str_cmp(cit,arr[i].a.city);
					if(val != 0)
					{
						arr2[cnt] = arr[i];
						cnt++;
						cout<<cnt<<endl;
					}
				}
				if(cnt > 0)
				{
					cout<<"\tFound Record : "<<endl;
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    	    		cout<<"Name\tMobile_Number\tH_No,City\tPin"<<endl;
       				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					for(i=0;i<cnt;i++)
						cout<<arr2[i].name<<"\t"<<arr2[i].phone<<"\t"<<arr2[i].a.h_no<<","<<arr2[i].a.city<<"\t"<<arr2[i].a.pin<<endl;
				}
				else
					cout<<"\tRECORD NOT FOUND !!!\n";
				break;
			case 3:
				cout<<"Enter the Mobile Number whose Data has to be Searched : ";
				cin>>num;
				for(i=0;i<pos;i++)
				{
					val = str_cmp(num,arr[i].phone);
					c = i;
					if(val != 0)
					break;	
				}
				if(val != 0)
				{
					cout<<"\tFound Record : "<<endl;
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        			cout<<"Name\tMobile_Number\tH_No,City\tPin"<<endl;
       				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cout<<arr[c].name<<"\t"<<arr[c].phone<<"\t"<<arr[c].a.h_no<<","<<arr[c].a.city<<"\t"<<arr[c].a.pin<<endl;
				}
				else
					cout<<"\tRECORD NOT FOUND !!!\n";
				break;
			case 2:
				cout<<"Enter the Mobile Number whose Data has to be Modified : ";
				cin>>num;
				for(i=0;i<pos;i++)
				{
					val = str_cmp(num,arr[i].phone);
					c = i;
					if(val != 0)
					break;	
				}
				if(val !=0)
				{
					cout<<"Current Data is : "<<endl;
					cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        			cout<<"Name\tMobile_Number\tH_No,City\tPin"<<endl;
       				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
					cout<<arr[c].name<<"\t"<<arr[c].phone<<"\t"<<arr[c].a.h_no<<","<<arr[c].a.city<<"\t"<<arr[c].a.pin<<endl;
					cout<<"Enter New Name : ";
          			cin>>arr[c].name;
          			cout<<"Enter Updated House_number, City, Pin : ";
          			cin>>arr[c].a.h_no>>arr[c].a.city>>arr[c].a.pin;
       				cout<<"\tDATA UPDATED !!!\n";	
				}
				else
					cout<<"\tRECORD NOT FOUND !!!\n";
				break;
			case 6:
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				cout<<"Name\tMobile_Number\tH_No,City\tPin"<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
				for(i=0;i<pos;i++)
					cout<<arr[i].name<<"\t"<<arr[i].phone<<"\t"<<arr[i].a.h_no<<","<<arr[i].a.city<<"\t"<<arr[i].a.pin<<endl;
				break;
			case 1:
				cout<<"Enter Name, Number : ";
				cin>>arr[pos].name>>arr[pos].phone;
				cout<<"Enter House_number, City, Pin : ";
				cin>>arr[pos].a.h_no>>arr[pos].a.city>>arr[pos].a.pin;
				cout<<"\tData Added SuccessFully !!\n"<<endl;
				pos++;
				break;
		}
	}while(a!=7);
	return 0;
}
