//Marks Required for Grade CALCULATOR
#include <iostream>
using namespace std;
class Subject
{
	public:
		//string name;
		float c1,c2,c3,c4,thm,lbm;
		float intm,finm;
		char typec;
		
		void inputmarks()
		{
			cout<<"\t\t______________________________________________________________\n"<<endl;
			cout<<"\t\t\t\t   ~  MARKS CALCULATOR  ~\n";
			cout<<"\t\t______________________________________________________________\n"<<endl;
			cout<<"\t\t\tCourse type: Joint / Theory ?\n"<<endl;
			cout<<"\t\t\t( Type J or j for Joint course";
			cout<<"\n\t\t\t\t     OR\n\t\t\tType T or t for Theory course )"<<endl;
			cout<<"\t\t______________________________________________________________\n"<<endl;
		    cout<<"\t\t\tPress letter: ";
			cin>>typec;

		    cout<<"\t\t______________________________________________________________\n"<<endl;
		    
			cout<<"\t\t\tEnter Test-1 marks (out of 25): "; 
			cin>>c1;
		    if(c1>25 || c1<0)
		    {
		    	cout<<"\n\t\t\tInvalid Marks. Enter again: ";
		    	cin>>c1;
		    	cout<<endl;
			}
			
		    cout<<"\t\t\tEnter Test-2 marks (out of 50): "; 
			cin>>c2;
		    if(c2>50 || c2<0)
		    {
		    	cout<<"\n\t\t\tInvalid Marks. Enter again : ";
		    	cin>>c2;
		    	cout<<endl;
			}
			
			cout<<"\t\t\tEnter Test-3 marks (out of 50): "; 
			cin>>c3;
			while(c3>50 || c3<0)
		    {
		    	cout<<"\n\t\t\tInvalid Marks. Enter again :";
		    	cin>>c3;
		    	cout<<endl;
			}
			
		    cout<<"\t\t\tEnter Test-4 marks (out of 25): "; 
			cin>>c4; 
			if(c4>25 || c4<0)
		    {
		    	cout<<"\n\t\t\tInvalid Marks. Enter again: ";
		    	cin>>c4;
		    	cout<<endl;
			}
			cout<<endl;
		    
		    intm = (c1/25)*10 + (c2/50)*15 + (c3/50)*15 + (c4/25)*10;
		    
			switch(typec)
			{
				case 'J':
				case 'j':
					
					cout<<"\t\tEnter final exam theory marks for the subject (out of 75): ";
			        cin>>thm; 
			        cout<<"\t\tEnter final exam lab marks for the subject (out of 25): ";
			        cin>>lbm;
			        finm = (thm/75)*25 + lbm;
			        break;
			        
			    case 'T':
			    case 't':
			    	{
			    		cout<<"\t\tEnter theory marks for the subject (out of 75) :";
				        cin>>thm;
				        finm=(thm/75)*50;
					}
					
					default:
						cout<<"\t\t\tInvalid input. Try again."<<endl;
			}
			
		}
		void grade()
		{
				float totm;
				totm=intm+finm;
				cout<<endl;
				
				cout<<"\n\t\t______________________________________________________________\n"<<endl;
				cout<<"\t\t\tGrades:\n\t\t\tO : 91.1-100";
				cout<<"\n\t\t\tA+ : 81.1-91\n\t\t\tA : 71.1-81";
				cout<<"\n\t\t\tB+ : 61.1-71\n\t\t\tB : 50-61";
				cout<<"\n\t\t\tF (Fail) : Below 50\n"<<endl;
				cout<<"\t\t______________________________________________________________\n"<<endl;
				cout<<"\t\t--------------------------------------------------------------\n"<<endl;
				
				if(totm>91)
				cout<<"\t\t\tYour Grade: O\n"<<endl;
				
				else if(totm<=91 && totm>81)
				cout<<"\n\t\t\tYour Grade: A+"<<endl;
				
				else if(totm<=81 && totm>71)
				cout<<"\n\t\t\tYour Grade: A"<<endl;
				
				else if(totm<=71 && totm>61)
				cout<<"\n\t\t\tYour Grade: B+"<<endl;
				
				else if(totm<=61 && totm>=50)
				cout<<"\n\t\t\tYour Grade: B"<<endl;
				
				else
				cout<<"\n\t\t\tYour Grade: F.\n\t\t\tYou've failed this subject."<<endl;
		}
};

int main()
{
    Subject s1;
    s1.inputmarks();
    s1.grade();
    cout<<"\t\t______________________________________________________________\n"<<endl;
    cout<<"\t\t--------------------------------------------------------------"<<endl;
    
	return 0;
}
