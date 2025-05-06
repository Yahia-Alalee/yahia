#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
#include<conio.h>
#include<cctype>
#include<Windows.h>

using namespace std;

void greatToAylol()
{
cout<<"\t\t\t\t\t******************************************\n";
cout<<"\t\t\t\t\t*                                        *\n";
cout<<"\t\t\t\t\t* Message of Thanks to the Management    *\n";
cout<<"\t\t\t\t\t* of aylol university college            *\n";
cout<<"\t\t\t\t\t*                                        *\n";
cout<<"\t\t\t\t\t* we extent our sincere thanks and       *\n";
cout<<"\t\t\t\t\t* apprecition to the management of       *\n";
cout<<"\t\t\t\t\t* aylol university college               *\n";
cout<<"\t\t\t\t\t* aylol university college for their     *\n";
cout<<"\t\t\t\t\t* outstanding efforts in providing a     *\n";
cout<<"\t\t\t\t\t* stimulating and excellent educational  *\n";
cout<<"\t\t\t\t\t* environment .                          *\n";
cout<<"\t\t\t\t\t*                                        *\n";
cout<<"\t\t\t\t\t* THANK YOU FOR YOUR CONTINUOUS SUPPORT  *\n";
cout<<"\t\t\t\t\t* TO YOUR STUDENTS AND YOUR CONTRIBUTION *\n";
cout<<"\t\t\t\t\t* TO BULIDING A BRIGHT FUTURE            *\n";
cout<<"\t\t\t\t\t******************************************\n";

}
void openHelpOptions()
{

 char choice[10];
 

	cout<<"enter (1) for chatgpt "<<endl;
	cout<<"enter (2) for google "<<endl;
    
    cin.getline(choice, 10);

    if (strcmp(choice, "1") == 0) {
        system("start https://chat.openai.com");
    } else if (strcmp(choice, "2") == 0) {
        system("start https://www.google.com");
	}
}
void  showAppreciation()
{
	cout<<"____________________________________"<<endl;
   cout<<"|                                     |"<<endl;
   cout<<"|                                     |"<<endl;
   cout<<"|  WE EXTENT OUR SINCER THANKE TO :   |"<<endl;
   cout<<"|                                     |"<<endl;
   cout<<"|  -Dr . Waleed Dahia                 |"<<endl;
   cout<<"|  -Dr .Najlaa Abutalib               |"<<endl;
   cout<<"|                                     |"<<endl;
   cout<<"|    For Your Excellent Cooperation   |"<<endl;
   cout<<"|   And Your Energetic interaction    |"<<endl;
   cout<<"|_____________________________________|"<<endl;
   cout<<endl;
}
void  printITTitle() {
    
    cout << "\t\t\t\t\t\t _____       _______    \n";
    cout << "\t\t\t\t\t\t|_   _|     |__   __|   \n";
    cout << "\t\t\t\t\t\t  | |          | |     \n";
    cout << "\t\t\t\t\t\t  | |          | |    \n";
    cout << "\t\t\t\t\t\t _| |_         | |   \n";
    cout << "\t\t\t\t\t\t|_____|        |_|  \n" ;
    
}
void printPharmacyTitle() {
    cout << "\t\t\t\t\t\t_ ____     _   _         /\\        \n";            
    cout << "\t\t\t\t\t\t|  _  \    | | | |       /  \\     \n";
    cout << "\t\t\t\t\t\t| |_) |   | |_| |      / /\\ \\    \n";
    cout << "\t\t\t\t\t\t|  __/    |  _  |     / ____ \\   \n";
    cout << "\t\t\t\t\t\t|_|       |_| |_|    /        \\  \n";
    cout << "\t\t\t\t\t\t                                                                         \n";
}
void  printNursingTitle(){

cout <<"\t\t\t\t\t\t_     _ _    _  ____     \n";
cout <<"\t\t\t\t\t\t| \\ | || | | ||  _ \\   \n";
cout <<"\t\t\t\t\t\t|  \\| || | | || |_) ||   \n";
cout <<"\t\t\t\t\t\t| |\\  || |_| || | _<||   \n";
cout <<"\t\t\t\t\t\t|_| \\_|\\____/ |_|   \\\ |\n";
}
void printmidwiferyTitle(){
    cout << "\t\t\t\t\t\t __  __    _____   ____                            \n";
    cout << "\t\t\t\t\t\t|  \\/  |  |_   _| |  _ \\                             \n";
    cout << "\t\t\t\t\t\t| |\\/| |    | |   | | | |                             \n";
    cout << "\t\t\t\t\t\t| |  | |  _ | |_  | |_| |                              \n";
    cout << "\t\t\t\t\t\t|_|  |_|  |_____| |____/                                \n";  
}	
void printbusinessTitle(){


    cout << "\t\t\t\t\t\t ____            /\\          \n";
    cout << "\t\t\t\t\t\t| __ )          /  \\         \n";
    cout << "\t\t\t\t\t\t|  _ \\         / /\\ \\         \n";
    cout << "\t\t\t\t\t\t| |_) |   _   / ____ \\         \n";
    cout << "\t\t\t\t\t\t|____/   |_| /        \\          \n";
    cout << "     \n";
}
void printAylolTitle(){ 
	cout << "\t\t\t\t\t\t           __     __    ___     ___      ___          _   _    _   _      ____       \n"; 
	cout << "\t\t\t\t\t\t       /\\  \\ \\   / /   |  |    / _ \\     |  |        | | | |  | \\ | |    / ___|          \n";
	cout << "\t\t\t\t\t\t      /  \\  \\ \\_/ /    |  |   | | | |    |  |        | | | |  |  \\| |    | |             \n";
	cout << "\t\t\t\t\t\t     / /\\ \\  \\\   /     |  |   | | | |    |  |        | | | |  | . ` |    | |             \n";
	cout << "\t\t\t\t\t\t    / ____ \\  | |      |  |__ | |_| |    |  |__  _   | |_| |  | |\\  |  _ | |___       \n";
	cout << "\t\t\t\t\t\t   /        \\ |_|      |_____| \\___/     |_____||_|   \\___/   |_| \\_| |_|\\\____|          \n";
	   




}														           
void toLowerCase(char* str) {
    for (int i = 0; str[i]; ++i) {
        str[i] = tolower(str[i]);
    }
}
void detectDepartment(char nnn[],int &c){
	
	const char* nnnm[]={"it","pharmacy","nursing","midwifery","business","managers"};
	const int mm=6;
	//int c=0;
	char* hh= strtok(nnn," ");

	while(hh != nullptr)
 {
	for(int i=0;i<mm;i++)
	{
	    if(strcmp(hh,nnnm[i])==0)
	     {
	      c=i+1;
	break;
	    }
	
	}
	
	hh=strtok(nullptr ," ");
 }

	}
void greetBasedOnTime()
{
 time_t now=time(0);
tm *time=localtime(&now);

if(time->tm_hour >=5 && time->tm_hour <12)
{
cout<<"\t\t------------------"<<endl;
cout<<"\t\t|GOOD MORNING SIR!"<<endl;
cout<<"\t\t-----------------"<<endl;
}
else if(time->tm_hour >=12 && time->tm_hour <17)
{
	cout<<"\t\t -------------------"<<endl;
	cout<<"\t\t|GOOD AFTERNOON SIR!"<<endl;
	cout<<"\t\t --------------------"<<endl;
}
else if(time->tm_hour >=17 && time->tm_hour <21)
{
cout<<"\t\t----------------"<<endl;
cout<<"\t\t|GOOD EVENUNG SIR!"<<endl;
cout<<"\t\t---------------"<<endl;
}
else 
{
cout<<"\t\t-----------------"<<endl;
cout<<"\t\t|GOOD NIGHT SIR! |"<<endl;
cout<<"\t\t----------------"<<endl;
}

}
void showCollegeInfo()
{

ifstream file("aylolb.txt");

if(!file)
{
cerr<<"not open "<<endl;
return ;
}


string  line;
//bool found=false;

while (getline(file,line))
{
  
	cout<<line<<endl;
}
file.close();


}
void  searchInFile(const char* fillname ,const char* keyword)
{

string search;
search =keyword;


ifstream file(fillname);

if(!file)
{
cerr<<"not open "<<endl;
return ;
}
file.seekg(0);
string  line;
bool found=false;

while (getline(file,line))
{
   if(!found)
   {
	   if(line.find(search)!= string ::npos) 
	   {
	   found =true;
	   cout<<endl;
	   }
	   else
	   {
	   
	   continue;
	   }
  }
   if(line==".")
   {
   break;
   }
   else
   {
   cout<<line<<endl;
   }
}
cout<<endl;

if (!found)
{
openHelpOptions();     
}

file.close();

	
}
void question()
{
	 int b=0;
	const char* word[]={"what", "where","why","is", "are","when","?","who"};
const int num_word=8;
	char input[250];
	char keyword[250];
	char onthrword[250];

	
	while(true)
	{
		cout<<"ENTER YOYR QUESTION OR (EXITE) FOR EXITING"<<endl;
	cout<<"=>\t";
	cin.getline(input,250);

	
	toLowerCase(input);

	if(strcmp(input,"exite")==0 || strcmp(input,"exit")==0 )
	{
		system("cls");
		greatToAylol();
	break;
	}


	keyword[0]='\0';
	 onthrword[0]='\0';
	char* kk= strtok(input," ");
	while(kk != nullptr)
{
	toLowerCase(kk);
    bool is_word=false;
	for(int i=0;i<num_word;++i)
	{
	  if(strcmp(kk, word[i])==0)
	  {
	  is_word=true;
	  break;
	  }
	}

	if(is_word)
	{
	strcat(onthrword, kk);
	strcat(onthrword," ");
	}
	else 
	{
	strcat(keyword,kk);
	strcat(keyword," ");
	}

	kk= strtok(nullptr, " ");
}


	int len =strlen(keyword);
	  if(len>0 && keyword[len-1]==' ')
	  {
	  keyword[len-1]='\0';
	  }
	
	 detectDepartment(keyword,b);
	
	  system("cls");
        showAppreciation();

        switch (b) {
            case 1:
                printITTitle();
                searchInFile("it.txt", keyword);
                break;
            case 2:
                printPharmacyTitle();
                searchInFile("pharmacy.txt", keyword);
                break;
            case 3:
                printNursingTitle();
                searchInFile("nursing.txt", keyword);
                break;
            case 4:
				printmidwiferyTitle();
                searchInFile("midwifery.txt", keyword);
                break;
            case 5:
				 printbusinessTitle();
                searchInFile("business.txt", keyword);
                break;
			case 6:
			printAylolTitle();
			searchInFile("managers.txt", keyword);
			break;
            default:
                openHelpOptions();
                return;
	  } 
	}
}
void choose()
{
	char bb[10];

cout<<"\t\t\t\t\t                                              |"<<endl;
cout<<"\t\t\t\t\t               DO YOU WANT TO KNOW MORE       |"<<endl;
cout<<"\t\t\t\t\t  =======>     ABOUT AYLOL COLLEG             |"<<endl;
cout<<"\t\t\t\t\t             enter (yes) or (no) for exite    |"<<endl;

cin.getline(bb,10);

toLowerCase(bb);
system("cls");
if(strcmp(bb,"yes")==0)
{
	printAylolTitle();
showCollegeInfo();
question();
}
else
{
question();
}
}
int main()
{
	
	
cout<<"\t\t\t\t\t _________________________________________"<<endl;
cout<<"\t\t\t\t\t|            MY NAME IS JAN               |"<<endl;
cout<<"\t\t\t\t\t|I AM A PRIVATE ASSISTANT AT AYLOL COLLEGE|"<<endl;
cout<<"\t\t\t\t\t|          HOW CAN I HELP YOU             |"<<endl;
cout<<"\t\t\t\t\t|_________________________________________|"<<endl;

char nn[10];
cout<<"==>";
cin.getline(nn,10);
greetBasedOnTime();

choose();
		
return 0;
}