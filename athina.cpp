
#include<iostream>  
#include<fstream> 
#include<iomanip> 
#include <string>


#define TEXT_COL (3)
#define TEXT_ROW (12)

using namespace std;
const int COLS=3;


int numOfstudent();
int quiz(int[TEXT_ROW][TEXT_COL]); 
void readFromTextFile(int[TEXT_ROW][TEXT_COL], string);
void testArrayContent(int[TEXT_ROW][TEXT_COL]); 
void calculator();
void createStudentId(int);
void score(int, int, int);
bool hasQuizTaken(int, int);
bool isStudentExist (int, string);


int triangle(int[][COLS],int);
int rectangle(int[][COLS],int);
int parallelogram(int[][COLS],int);
void AreaofShape();


ifstream inputFile; 
fstream outFile;

int main ()
{   

	char choice;
	int option,shape,studentID, exist, 	Texist, Rexist, Pexist, student, t, r, p;
	int TriangleMark, RectangleMark, ParallelogramMark, TM , RM , PM ; 
	
  	cout<<"\t\t welcome to my shape program \n";
    cout<<"\nEnter Your StudentID : ";
	cin>>studentID;
	cout<<endl;
         
        outFile.open("studentMarks.txt");
     	while(!outFile.eof())
    	
    	
    	
    do 
    { 
    cout<<"Enter 1: Test Yourself with Quiz based on specific shape\n";
	cout<<"Enter 2: Area of Shapes\n";
	cout << "Enter 3: EXIT\n";
	cout << "please key in the number" << endl;
		

	cin>>option;
	
	
	
    switch(option)
    { 	
		
		
	case 2:
		{
		  AreaofShape();
		  break;
     	}
    	
		
             
    case 1:
    	{
        if (exist==1 && Texist==1 && Rexist==1 && Pexist== 1)
        {
           	 cout<<"\nall questions are finished. you got "<<t<<" mark for triangle, "<< r<<" mark for rectangle and "<< p<< " mark for parallelogram "<<endl;
           	 cout<<"You are not allowed to take any quiz ";
		}
		else 
		{
		cout << "please choose the shape you want to learn" << endl;
		cout << "1. triangle\n";
		cout << "2. rectangle\n";
		cout << "3. parallelogram\n";
		cout << "4. exit\n";
		cout << "please key in the number" << endl;
		
    	  cin>>shape;
		  cout<<endl;
	    
		if(shape == 1)
        {  
            if( exist == 1 && Texist==1 )  
           {
           	 cout<<"you have taken this shape Quiz, you can back to main menu and pick another shape "<<t<<endl;
           	
		   }


		   
            else
           {
             inputFile.open("Triangle.txt");
             const int ROWS=12, COLS=3;
             int quiz[ROWS][COLS]; 
             TriangleMark = triangle(quiz,12);
           }
          }
     	else if (shape == 2)
        {  
           if (exist==1 && Rexist==1) 
            { 
			  cout<<"you have taken this shape Quiz, you can back to main menu and pick another shape "<<r<<endl;
	        }
	        else
            {
            	
            	
             inputFile.open("Rectangle.txt");
             const int ROWS=12, COLS=3;
             int quiz[ROWS][COLS];
             RectangleMark = rectangle(quiz,12);
            }  
    	}
    	else if (shape == 3)
        {
          if(exist==1 && Pexist==8) 
           {
            cout<<"you have taken this shape Quiz, you can back to main menu and pick another shape "<<p<<endl;	
	       }
	     
		 
		  else
		    {
		     inputFile.open("Parallelogram.txt");
             const int ROWS=12, COLS=3;
             int quiz[ROWS][COLS];
             ParallelogramMark= parallelogram(quiz,12);
            }
    	}
       }
    	break;
        }
    }
    cout<<endl<<"\nDo You want learn more ? \n";
    cout<<"\nIf yes Enter Y to proceed or Enter any key to quit the program \n"; 
    cin>>choice;
    cout<<endl;
    }
	while(choice== 'Y' );
	cout<<"Thank you "<<endl;
    
    outFile.open("studentMarks.txt", ios_base::app);	
    while (outFile.eof())	
    (TriangleMark< 0)? TM =0: (TM=TriangleMark);
    (RectangleMark< 0)? RM =0: (RM=RectangleMark);
    (ParallelogramMark< 0)? TM =0: (PM=ParallelogramMark);

	outFile<<endl<<studentID<<" "<< TM <<" "<< RM << " " << PM ;
    outFile.close();
  return 0;
}   
int triangle (int quiz[][COLS], int rows) 
{ 
	int Area, Base, Height, answer, mark;
		
    cout<<"\nwelcome to the 1st program quiz:\n";
	cout<<"______________________________________\n";
	cout<<"SECTION 1 : FIND THE AREA OF TRIANGLE\n";
	
	rows=12;
	int &b = rows; 
	b=3;
	
	double totalmark=0;
	double score;
	

	for (int i=0;i<=b;i++)
	{
	inputFile >> Area>>Base>>Height;
	cout<<"\nQUESTION: \n\n"<<i+1;
	cout<<"\nBase = "<<Base;
	cout<<"\nHeight = "<<Height;
	cout<<"\nArea = ";
	cin>>answer;
	
		if(answer==Area)
		{
			mark=1;
			cout<<"Excellent!you got 1 mark"<<endl;
	    }
		else 
		{
			mark=0;
			cout << "incorrect!" << endl;
			cout << "the correct answer is = " << Area << endl;
        } 
         totalmark=totalmark + mark ;
    }
	 
    cout<<"\nNext step\n";
    cout<< "\nSECTION 2 : FIND THE HEIGHT OF TRIANGLE\n";
    b=7;
    
    
    for (int i=4;i<=b;i++)
	{
	inputFile >> Area>>Base>>Height;
	cout<<"\nQUESTION: \n\n "<<i+1;
	cout<<"\n----------";
	cout<<"\nArea = "<<Area;
	cout<<"\nBase = "<<Base;
	cout<<"\nHeight = ";
	cin>>answer;
	
		if(answer==Height)
		{
			mark=1;
			cout<<"Excellent!you got 1 mark"<<endl;
	    }
		else 
		{
			mark=0;
			cout << "incorrect!" << endl;
			cout << "the correct answer is = " << Height << endl;
        } 
         totalmark=totalmark + mark ;
    }
      cout<<"\nNext step\n";
      cout<< "\nSECTION 3 : FIND THE BASE OF TRIANGLE \n";
      
    b=11;
    
    for (int i=8;i<=b;i++)
	{
	inputFile >> Area>>Base>>Height;
	cout<<"\nQUESTION: \n\n "<<i+1;
	cout<<"\nArea = "<<Area;
	cout<<"\nHeight = "<<Height;
	cout<<"\nBase = ";
	cin>>answer;
	
		if(answer==Base)
		{
			mark=1;
			cout<<"Excellent!you got 1 mark"<<endl;
	    }
		else 
		{
			mark=0;
			cout << "incorrect!" << endl;
			cout << "the correct answer is = " << Base << endl;
        } 
         totalmark=totalmark + mark ;
    }
    	cout<<"\nYour total mark is               : "<<totalmark;
	cout << "\nyour total mark in percentage is : " << (totalmark/12)*100 << "%\n" << endl;

	inputFile.close();
	return totalmark;
}   
int rectangle (int quiz[][COLS], int rows) 
{
	int Area, Width, Length, answer, mark;
	cout<<"\n weelcome to the 2nd program quiz: \n";
	cout<<"\n____________________________________\n";
	cout<< "SECTION 1 : FIND THE AREA OF A RECTANGLE \n";
	
	rows=12;
	int b = rows; 
	b=3;
	
	double totalmark=0;
	double score;
	

	for (int i=0;i<=b;i++)
	{
	inputFile >> Area>>Width>>Length;
	cout<<"\nQUESTION: \n\n "<<i+1;
	cout<<"\nWidth = "<<Width;
	cout<<"\nLength = "<<Length;
	cout<<"\nArea = ";
	cin>>answer;
	
		if(answer==Area)
		{
			mark=1;
			cout<<"Excellent!you got 1 mark"<<endl;
	    }
		else 
		{
			mark=0;
			cout << "incorrect!" << endl;
			cout << "the correct answer is = " << Area << endl;
        } 
         totalmark=totalmark + mark ;
    }
	 
	cout<<"\nNext step\n";
    cout<< "\nSECTION 2 : FIND THE WIDTH OF A RECTANGLE \n";
    b=7; 
    
    
    for (int i=4;i<=b;i++)
	{
	inputFile >> Area>>Width>>Length;
	cout<<"\nQUESTION: \n\n "<<i+1;
	cout<<"\nArea = "<<Area;
	cout<<"\nLength = "<<Length;
	cout<<"\nWidth = ";
	cin>>answer;
	
		if(answer==Width)
		{
			mark=1;
			cout<<"Excellent!you got 1 mark"<<endl;
	    }
		else 
		{
			mark=0;
			cout << "incorrect!" << endl;
			cout << "the correct answer is = " << Width << endl;
        } 
         totalmark=totalmark + mark ;
    }
      cout<<"\nNext step\n";
      cout<< "\nSECTION 3 : FIND THE LENGTH OF A RECTANGLE \n";
      
    b=11;
    

    for (int i=8;i<=b;i++)
	{
	inputFile >> Area>>Width>>Length;
	cout<<"\nQUESTION: \n\n "<<i+1;
	cout<<"\nArea = "<<Area;
	cout<<"\nWidth = "<<Width;
	cout<<"\nLength = ";
	cin>>answer;
	
		if(answer==Length)
		{
			mark=1;
			cout<<"Excellent!you got 1 mark"<<endl;
	    }
		else 
		{
			mark=0;
			cout << "incorrect!" << endl;
			cout << "the correct answer is = " << Length << endl;
        } 
         totalmark=totalmark + mark ;
    }

    cout<<"\nYour total mark is               : "<<totalmark;
	cout << "\nyour total mark in percentage is : " << (totalmark/12)*100 << "%\n" << endl;

	inputFile.close();
	return totalmark;
}
int parallelogram (int quiz[][COLS], int rows) 
{
	int Area, Base, Height, answer, mark;
		
    if (!inputFile) 
	
	cout<<"\n weelcome to the 3rd program quiz: \n";
	cout<<"\n____________________________________\n";
	cout<<"SECTION 1 : FIND THE AREA OF PARALLELOGRAM\n";
	
	rows=12;
	int &b = rows; 
	b=3;
	
	double totalmark=0;
	double score;
	

	for (int i=0;i<=b;i++)
	{
	inputFile >> Area>>Base>>Height;
	cout<<"\nQUESTION: \n\n "<<i+1;
	cout<<"\nBase = "<<Base;
	cout<<"\nHeight = "<<Height;
	cout<<"\nArea = ";
	cin>>answer;
	
		if(answer==Area)
		{
			mark=1;
			cout<<"Excellent!you got 1 mark"<<endl;
	    }
		else 
		{
			mark=0;
			cout << "incorrect!" << endl;
			cout << "the correct answer is = " << Area << endl;
        } 
         totalmark=totalmark + mark ;
    }
	 cout<<"\nNext step\n";
    cout<< "\nSECTION 2 : FIND THE HEIGHT OF PARALLELOGRAM\n";
    b=7; 
    
    
    for (int i=4;i<=b;i++)
	{
	inputFile >> Area>>Base>>Height;
	cout<<"\nQUESTION: \n\n "<<i+1;
	cout<<"\nArea = "<<Area;
	cout<<"\nBase = "<<Base;
	cout<<"\nHeight = ";
	cin>>answer;
	
		if(answer==Height)
		{
			mark=1;
			cout<<"Excellent!you got 1 mark"<<endl;
	    }
		else 
		{
			mark=0;
			cout << "incorrect!" << endl;
			cout << "the correct answer is = " << Base << endl;
        } 
         totalmark=totalmark + mark ;
    }
      cout<<"\nNext step\n";
      cout<< "\nSECTION 3 : FIND THE BASE OF PARALLELOGRAM \n";
      
    b=11;
    
    for (int i=8;i<=b;i++)
	{
	inputFile >> Area>>Base>>Height;
	cout<<"\nQUESTION: \n\n "<<i+1;
	cout<<"\nArea = "<<Area;
	cout<<"\nHeight = "<<Height;
	cout<<"\nBase = ";
	cin>>answer;
	
		if(answer==Base)
		{
			mark=1;
			cout<<"Excellent!you got 1 mark"<<endl;
	    }
		else 
		{
			mark=0;
			cout << "incorrect!" << endl;
			cout << "the correct answer is = " << Base << endl;
        } 
         totalmark=totalmark + mark ;
    }
	cout<<"\nYour total mark is               : "<<totalmark;
	cout << "\nyour total mark in percentage is : " << (totalmark/12)*100 << "%\n" << endl;
		
	inputFile.close();
	return totalmark;
}


void AreaofShape()
{         
          double base, height,length, width, area;
	      cout<<"\n\tAREA FORMULAS \n";
		  cout<<"Triangle = (base*height)/2\n";
		  cout<<"Rectangle = length * width\n";
		  cout<<"Parallelogram = base * height\n ";
		  cout<<"\nTOPIC 1 : TRIANGLE\n";
          cout<<"\nGive Me The BASE And HEIGHT OF TRIANGLE, I Will Tell You The AREA OF A TRIANGLE\n";
          cout<<"Base = ";
		  cin>>base;
		  cout<<"Height = ";
          cin>>height;
          area=(base*height)/2;
          cout << fixed << showpoint << setprecision(2);
          cout<<"Area = "<<area<<endl;
          
    
          cout<<"\nGive Me The AREA & HEIGHT, I will tell you the Base of a Triangle \n"; 
          cout<<"Area = ";
		  cin>>area;
		  cout<<"Height = ";
          cin>>height;
          base=(area*2)/height;
          cout << fixed << showpoint << setprecision(2);
          cout<<"Base = "<<base<<endl;
          
           cout<<"\nGive Me AREA & BASE, I will tell you the Height of a Triangle\n";
          cout<<"Area = ";
		  cin>>area;
		  cout<<"Base = ";
          cin>>base;
          height=(area*2)/base;
          cout << fixed << showpoint << setprecision(2);
          cout<<"Height = "<<height<<endl;
          
          cout<<"\nTOPIC 2 : RECTANGLE\n";
          cout<<"\nGive Me The LENGTH And WIDTH OF RECTANGLE, I Will Tell You The AREA OF A RECTANGLE\n";
          cout<<"Length = ";
		  cin>>length;
		  cout<<"Width = ";
          cin>>width;
          area=length * width;
          cout << fixed << showpoint << setprecision(2);
          cout<<"Area = "<<area<<endl;
        
		
          cout<<"\nGive Me The AREA & WIDTH OF RECTANGLE, I Will Tell You The Length OF A RECTANGLE\n";
          cout<<"Area = ";
		  cin>>area;
		  cout<<"Width = ";
          cin>>width;
          length=area / width;
          cout << fixed << showpoint << setprecision(2);
          cout<<"Length = "<<length<<endl;
          
          cout<<"\nGive Me The AREA & LENGTH of RECTANGLE, I Will Tell You The WIDTH OF A RECTANGLE\n";
          cout<<"Area = ";
		  cin>>area;
		  cout<<"Length = ";
          cin>>length;
          width=area / length;
          cout << fixed << showpoint << setprecision(2);
          cout<<"Width = "<<width<<endl;
          
          cout<<"\nTOPIC 3 : PARALLELOGRAM\n";
          cout<<"\nGive Me The BASE AND HEIGHT OF PARALLELOGRAM, I Will Tell You The AREA OF A PARALLELOGRAM\n";
          cout<<"Base = ";
		  cin>>base;
		  cout<<"Height = ";
          cin>>height;
          area=base*height;
          cout << fixed << showpoint << setprecision(2);
          cout<<"Area = "<<area<<endl;
          
        
           cout<<"\nGive Me The AREA & HEIGHT OF PARALLELOGRAM, I Will Tell You The BASE OF A PARALLELOGRAM\n";
          cout<<"Area = ";
		  cin>>area;
		  cout<<"Height = ";
          cin>>height;
          base=area/height;
          cout << fixed << showpoint << setprecision(2);
          cout<<"Base = "<<base<<endl;
          
           cout<<"\nGive Me The AREA & BASE OF PARALLELOGRAM, I Will Tell You The HEIGHT OF A PARALLELOGRAM\n";
          cout<<"Area = ";
		  cin>>area;
		  cout<<"Base = ";
          cin>>base;
          height=area/base;
          cout << fixed << showpoint << setprecision(2);
          cout<<"Height = "<<height<<endl;
          cout<<endl<<"very good! you did well";
}


