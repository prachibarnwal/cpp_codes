//stone paper scissors;
#include<iostream>
#include<string.h>
#include <cstdlib>
using namespace std;
int main()
{
	char name[50],ch[10];
	int round,pscore = 0,cscore=0,n,i;
	char arr[3][10] = {"stone","paper","scissor"};
	
	cout<<"Enter Player's Name : ";
	cin>>name;
	cout<<"Rules for the Game : "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"There are 5 Rounds in this game."<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"For each Winning round you'll get a +3 increase "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"   For each Draw you'll get no points"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"   No Increase / Decrease for losing a round"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"            STARTING THE GAME "<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"         Computer V/S "<<name<<endl;
	cout<<"---------------------------------------------------"<<endl;
	for(i=0;i<5;i++)
	{
		cout<<"                 ROUND   "<<i+1<<" !!"<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<name<<" Enter Your Choice (stone / paper / scissor): ";
		cin>>ch;
		n = rand() % 3;
		char*ch1 = arr[n];
		cout<<"---------------------------------------------------"<<endl;
		cout<<name<<" Computer Choses : "<<ch1<<endl;
	
		if (strcmp(ch, "stone") == 0 && strcmp(ch1, "stone") == 0)
		{
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\tIt's a Draw"<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		else if (strcmp(ch, "stone") == 0 && strcmp(ch1, "paper") == 0)
		{
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\t\t Paper Grabs Stone "<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\t\tComputer Wins !!!"<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cscore += 3;
		}
		else if (strcmp(ch, "stone") == 0 && strcmp(ch1, "scissor") == 0)
		{
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\t\t Stone Breaks Scissor "<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\t\t"<<name<<" Wins !!!"<<endl;
			cout<<"---------------------------------------------------"<<endl;
			pscore += 3;
		}
		else if (strcmp(ch, "paper") == 0 && strcmp(ch1, "paper") == 0)
		{
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\tIt's a Draw"<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		else if (strcmp(ch, "paper") == 0 && strcmp(ch1, "scissor") == 0)
		{
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\t\t Scissor Cuts Paper "<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\t\tComputer Wins !!!"<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cscore += 3;
		}
		else if (strcmp(ch, "paper") == 0 && strcmp(ch1, "stone") == 0)
		{
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\t\t Paper Grabs Stone "<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\t\t"<<name<<" Wins !!!"<<endl;
			cout<<"---------------------------------------------------"<<endl;
			pscore += 3;
		}
		else if (strcmp(ch, "scissor") == 0 && strcmp(ch1, "scissor") == 0)
		{
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\tIt's a Draw"<<endl;
			cout<<"---------------------------------------------------"<<endl;
		}
		else if (strcmp(ch, "scissor") == 0 && strcmp(ch1, "stone") == 0)
		{
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\t\t Stone Breaks Scissor "<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cout<<"\t\tComputer Wins !!!"<<endl;
			cout<<"---------------------------------------------------"<<endl;
			cscore += 3;
		}
		else if (strcmp(ch, "scissor") == 0 && strcmp(ch1, "paper") == 0)
		{
		cout<<"---------------------------------------------------"<<endl;
		cout<<"\t\t Scissor Cuts Paper "<<endl;
		cout<<"---------------------------------------------------"<<endl;
		cout<<"\t\t"<<name<<" Wins !!!"<<endl;
		cout<<"---------------------------------------------------"<<endl;
		pscore += 3;
		}
		else
		{
			cout<<"INVALID CHOICE ENTERED -____- "<<endl;
			cout<<"---------------------------------------------------"<<endl;	
		}
	}
	cout<<"\t\tGAME OVER !!!"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	cout<<"\t\tCALCULATING RESULTS     !!"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	if (pscore > cscore)
	{
		cout<<name<<" WINS BY "<<pscore-cscore<<" POINTS !!"<<endl;
		cout<<"---------------------------------------------------"<<endl;
	}	
	else if (cscore > pscore)
	{
		cout<<"COMPUTER WINS BY "<<cscore -pscore<<" POINTS !!"<<endl;
		cout<<"---------------------------------------------------"<<endl;
	}
	else
	{
		cout<<"NOBODY WINS.....IT'S A DRAW  >___< "<<endl;
		cout<<"---------------------------------------------------"<<endl;
	}
	
	return 0;
}
//game by PRACHI BARNWAL
