#include<iostream>
#include<iomanip>
#include<fstream>
#include<conio.h>
#include<string>
#include<string.h>

using namespace std;
class bodar
{
public:
    string name;
    string birthDate;
    string age;
    string phoneNo;
    string Email_id;
    string nidNo;
    string addres;
    string gardianName;
    string gardianPh;
    string roomNo;
    string roomcon;
    string rent;
    string institute;
}add;
//All Functions 
void pass();
void mainMenu();
void add_new_student();
void edit_data();
void display_one_student_data();
void display_all_student_data();
void delete_data();
void delete_single_data();
void delete_all_data();
int  exit(){
    system("cls");
    cout<<"\n\n\t\tDeveloped By Shakil Ahmmed\t\t\n\n"<<endl;
    return 0;
}

int main()
{
    pass();
    //mainMenu();
    
}

// Function for Main Menu
void mainMenu(){
    system("cls");
    cout<<"\n\n\t\t\t\t\a\" WELCOME TO \"\t\t\t\t";
    cout<<"\n\t\t\t\xB2\xB2 HOSTEL MANAGEMENT SYSTEM \xB2\xB2\t\t\t\t\n";
    cout<<endl;
    cout<<"\n\n\t\t\t\xB2 MAIN MENU \xB2\t\t\t\n";
    cout<<endl;
    cout<<"\t\tPress 1 to add new stusent\t\t"<<endl;
    cout<<"\t\tPress 2 to edit student data\t\t"<<endl;
    cout<<"\t\tPress 3 to display single student data\t\t"<<endl;
    cout<<"\t\tPress 4 to display all student data\t\t"<<endl;
    cout<<"\t\tPress 5 to delete student data\t\t"<<endl;
    cout<<"\t\tPress 6 to exit the system\t\t"<<endl;
    cout<<"\n\n\t\tEnter number...";
    int n;
    cin>>n;


    switch (n)
    {
    case 1: add_new_student();
        break;
    case 2: edit_data();
        break;
    case 3:display_one_student_data();
        break;
    case 4:display_all_student_data();
        break;
    case 5:delete_data();
        break;
    case 6:exit();
        break;

    default:cout<<"\n\t\aYou Enter wrong input\t"<<endl;
        break;
    }

}// End of main menu function.


// function for add new student data:
void add_new_student(){

    system ("cls");
    ofstream file;
    file.open("boder_detals.txt",ios::out|ios::app);

    cout<<"\t\t\xB2 ADD STUDENT DATA \xB2\t\t\n"<<endl;
    cin.ignore();
    cout<<"Enter your name: ";
    getline(cin,add.name);
    cout<<"Enter your date of birth: ";
    getline(cin,add.birthDate);
    cout<<"Enter your age: ";
    cin>>add.age;
    cout<<"Enter your mobile number: ";
    cin>>add.phoneNo;
    cin.ignore();
    cout<<"Enter your E-mail id: ";
    getline(cin,add.Email_id);
    cout<<"Enter your NID/Birth certificat number: ";
    cin>>add.nidNo;
    //cin.ignore();
    cout<<"Enter your gardian name: ";
    getline(cin,add.gardianName);
    getline(cin,add.gardianName);
    cout<<"Enter your gardian mobile number: ";
    cin>>add.gardianPh;
    cout<<"Enter room number: ";
    cin>>add.roomNo;
    cin.ignore();
    cout<<"Enter Single or daouble room: ";
    getline(cin,add.roomcon);
    cout<<"Enter rent of room: ";
    cin>>add.rent;
    cin.ignore();
    cout<<"Enter your institute: ";
    getline(cin,add.institute);
    cout<<"Enter your adderse: ";
    getline(cin,add.addres);
    //cin.ignore();
    file<<add.name<<endl<<add.birthDate<<endl<<add.age<<endl<<add.phoneNo<<endl<<add.Email_id
        <<endl<<add.nidNo<<endl<<add.gardianName<<endl<<add.gardianPh<<endl<<add.roomNo
        <<endl<<add.roomcon<<endl<<add.rent<<endl<<add.institute<<endl<<add.addres<<endl<<"\n\n";
    file.close();
    system("cls");
    cout<<"\n\n\t\tData add sussfully.\t\t\n"<<endl;

    system("PAUSE");
    mainMenu();

}// End of add new student function.


//Function for edit student data:
void edit_data(){
    system ("cls");
    string pNo;
    int found=0;
    cout<<"\n\n\t\t\xB2 Edit Student Data \xB2\t\t\n\n";
    ifstream file;
    ofstream file1;

    file.open("boder_detals.txt",ios::in);
    if (!file)
    {
        cout<<"\n\n\t\tNo Data Found\t\t\n"<<endl;
        file.close();
    }
    else
    {
        cout<<"Enter phone number of student which you want to edit:"<<endl;
        cin>>pNo;
        file1.open("detals.txt",ios::out|ios::app);

        file>>add.name>>add.birthDate>>add.age>>add.phoneNo>>add.Email_id
            >>add.nidNo>>add.gardianName>>add.gardianPh>>add.roomNo
            >>add.roomcon>>add.rent>>add.institute>>add.addres;
        while (!file.eof())
        {
            if (pNo!=add.phoneNo)
            {
                file1<<add.name<<endl<<add.birthDate<<endl<<add.age<<endl<<add.phoneNo<<endl<<add.Email_id
                    <<endl<<add.nidNo<<endl<<add.gardianName<<endl<<add.gardianPh<<endl<<add.roomNo
                    <<endl<<add.roomcon<<endl<<add.rent<<endl<<add.institute<<endl<<add.addres<<endl<<"\n\n";
                //found++;
            }
            else
            {
                cin.ignore();
                cout<<"Enter your name: ";
                getline(cin,add.name);
                cout<<"Enter your date of birth: ";
                getline(cin,add.birthDate);
                cout<<"Enter your age: ";
                cin>>add.age;
                cout<<"Enter your mobile number: ";
                cin>>add.phoneNo;
                cin.ignore();
                cout<<"Enter your E-mail id: ";
                getline(cin,add.Email_id);
                cout<<"Enter your NID/Birth certificat number: ";
                cin>>add.nidNo;
                //cin.ignore();
                cout<<"Enter your gardian name: ";
                getline(cin,add.gardianName);
                getline(cin,add.gardianName);
                cout<<"Enter your gardian mobile number: ";
                cin>>add.gardianPh;
                cout<<"Enter room number: ";
                cin>>add.roomNo;
                cin.ignore();
                cout<<"Enter Single or daouble room: ";
                getline(cin,add.roomcon);
                cout<<"Enter rent of room: ";
                cin>>add.rent;
                cin.ignore();
                cout<<"Enter your institute: ";
                getline(cin,add.institute);
                cout<<"Enter your adderse: ";
                getline(cin,add.addres);
                //cin.ignore();
                file1<<add.name<<endl<<add.birthDate<<endl<<add.age<<endl<<add.phoneNo<<endl<<add.Email_id
                    <<endl<<add.nidNo<<endl<<add.gardianName<<endl<<add.gardianPh<<endl<<add.roomNo
                    <<endl<<add.roomcon<<endl<<add.rent<<endl<<add.institute<<endl<<add.addres<<endl<<"\n\n";
                found++;
                system("cls");
                cout<<"\n\n\t\tData Updated\t\t\n"<<endl;
            }
            file>>add.name>>add.birthDate>>add.age>>add.phoneNo>>add.Email_id
                >>add.nidNo>>add.gardianName>>add.gardianPh>>add.roomNo
                >>add.roomcon>>add.rent>>add.institute>>add.addres;
           /* if (found==0)
            {
                cout<<"No Data Found"<<endl;
                getch();
            }*/
        }
        if (found==0)
        {
            system("cls");
            cout<<"\n\n\t\t"<<pNo<<"\t\t ";
            cout<<"\n\tThis phone no. is not in file\t\t\n"<<endl;
        }
        //getch();
        file1.close();
        file.close();
        remove("boder_detals.txt");
        rename("detals.txt","boder_detals.txt");
    }
    system("PAUSE");
    mainMenu();

}


//Function of display One student data:
void display_one_student_data(){
    system("cls");
    int found=0;
    ifstream file;
    
    file.open("boder_detals.txt",ios::in);
    if (!file)
    {
        cout<<"\n\n\t\t\xB2 One Student Detals \xB2\t\t\n\n";
        cout<<"\tNo Data Found\t"<<endl;
        file.close();
    }
    else
    {
        string pNo;
        cout<<"\n\n\t\t\xB2 One Student Detals \xB2\t\t\n\n";
        cout<<"Enter Phone Number of Student Which detals you want to see:"<<endl;
        cin>>pNo;
        file>>add.name>>add.birthDate>>add.age>>add.phoneNo>>add.Email_id
            >>add.nidNo>>add.gardianName>>add.gardianPh>>add.roomNo
            >>add.roomcon>>add.rent>>add.institute>>add.addres;
        
        while (!file.eof())
        {
            if (pNo==add.phoneNo)
            {
                cout<<"\tStudent  Name:   "<<add.name<<endl;
                cout<<"\tBirth    Date:   "<<add.birthDate<<endl;
                cout<<"\tStudent  Age :   "<<add.age<<endl;
                cout<<"\tPhone    No  :   "<<add.phoneNo<<endl;
                cout<<"\tE-mail       :   "<<add.Email_id<<endl;
                cout<<"\tNID/B.C  No  :   "<<add.nidNo<<endl;
                cout<<"\tGardian  Name:   "<<add.gardianName<<endl;
                cout<<"\tGardian  P.No:   "<<add.gardianPh<<endl;
                cout<<"\tRoom     No  :   "<<add.roomNo<<endl;
                cout<<"\tRoom     Type:   "<<add.roomcon<<endl;
                cout<<"\tRoom     Rent:   "<<add.rent<<endl;
                cout<<"\tInstitute    :   "<<add.institute<<endl;
                cout<<"\tAddress      :   "<<add.addres<<endl;
                found++;
            }
            file>>add.name>>add.birthDate>>add.age>>add.phoneNo>>add.Email_id
                >>add.nidNo>>add.gardianName>>add.gardianPh>>add.roomNo
                >>add.roomcon>>add.rent>>add.institute>>add.addres;
            //getch();
        }

        if (found==0)
        {
            system("cls");
            cout<<"\n\n\t\t"<<pNo<<"\t\t ";
            cout<<"\n\tThis phone no. is not in file\t\t\n"<<endl;
        }
        //getch();
        file.close();
        
    }
    cout<<endl;
    system("PAUSE");
    mainMenu();
    
    
}


//Function for display all student data:
void display_all_student_data(){
    system("cls");
    int total=0;
    ifstream file;
    cout<<"\n\n\t\t\xB2 All Students Detals \xB2\t\t\n\n";
    file.open("boder_detals.txt",ios::in);
    if (!file)
    {
        cout<<"\n\n\t\tNo Data Found\t\t\n"<<endl;
        file.close();
    }
    else
    {
        file>>add.name>>add.birthDate>>add.age>>add.phoneNo>>add.Email_id
        >>add.nidNo>>add.gardianName>>add.gardianPh>>add.roomNo
        >>add.roomcon>>add.rent>>add.institute>>add.addres;
        while (!file.eof())
        {
            cout<<"\n\tStudent No: "<<total++<<endl;
            cout<<"\tStudent  Name:   "<<add.name<<endl;
            cout<<"\tBirth    Date:   "<<add.birthDate<<endl;
            cout<<"\tStudent  Age :   "<<add.age<<endl;
            cout<<"\tPhone    No  :   "<<add.phoneNo<<endl;
            cout<<"\tE-mail       :   "<<add.Email_id<<endl;
            cout<<"\tNID/B.C  No  :   "<<add.nidNo<<endl;
            cout<<"\tGardian  Name:   "<<add.gardianName<<endl;
            cout<<"\tGardian  P.No:   "<<add.gardianPh<<endl;
            cout<<"\tRoom     No  :   "<<add.roomNo<<endl;
            cout<<"\tRoom     Type:   "<<add.roomcon<<endl;
            cout<<"\tRoom     Rent:   "<<add.rent<<endl;
            cout<<"\tInstitute    :   "<<add.institute<<endl;
            cout<<"\tAddress      :   "<<add.addres<<endl;
            file>>add.name>>add.birthDate>>add.age>>add.phoneNo>>add.Email_id
                >>add.nidNo>>add.gardianName>>add.gardianPh>>add.roomNo
                >>add.roomcon>>add.rent>>add.institute>>add.addres;
            getch();
        }
        if (total==0)
        {
            cout<<"\n\n\t\tNo Data Found\t\t\n"<<endl;
        }

    }
    file.close();
    cout<<endl;
    system("PAUSE");
    mainMenu();

}//End of the display all student function.

//Function for delete data:
void delete_data(){
    system ("cls");
    int n;
    cout<<"\n\n\t\t\xB2 Delete Students Data \xB2\t\t\n\n";
    cout<<"\tPress 1 to delete single student data\t"<<endl;
    cout<<"\tPress 2 to delete all students data\t"<<endl;
    cout<<"\n\n\t\tPress here...";
    cin>>n;

    switch (n)
    {
    case 1: delete_single_data();
        break;
    case 2: delete_all_data();
        break;
    default:
        cout<<"\n\tYou press wrong number\t\n"<<endl;
        break;
    }
    mainMenu();
}//End of delete function.

//Function for delete all student data:
void delete_all_data(){
    system ("cls");
    ifstream file;
    file.open("boder_detals.txt",ios::in);
    if (!file)
    {
        cout<<"\n\n\t\tNo Data Found\t\t\n"<<endl;
        file.close();
    }
    else
    {
        //while (!file.eof())
        //{
            file.close();
            remove("boder_detals.txt");
            system("cls");
            //cout<<"\n\n\t\t All Data deleted.\t\t\n"<<endl;
        //}
        cout<<"\n\n\t\t All Data deleted.\t\t\n"<<endl;

    }
    //getch();
    system("PAUSE");
    mainMenu();
    
}

//Function for delete single student data:
void delete_single_data(){
    system ("cls");
    string pNo;
    int found=0;
    cout<<"\n\n\t\t\xB2 Delete Student Data \xB2\t\t\n\n";
    ifstream file;
    ofstream file1;
    file.open("boder_detals.txt",ios::in);
    if (!file)
    {
        cout<<"\n\n\t\tNo Data Found\t\t\n"<<endl;
        file.close();
    }
    else
    {
        cout<<"Enter phone number of student which you want to delete:"<<endl;
        cin>>pNo;
        file1.open("detals.txt",ios::out|ios::app);
        file>>add.name>>add.birthDate>>add.age>>add.phoneNo>>add.Email_id
            >>add.nidNo>>add.gardianName>>add.gardianPh>>add.roomNo
            >>add.roomcon>>add.rent>>add.institute>>add.addres;
        while (!file.eof())
        {
            if (pNo!=add.phoneNo)
            {
                file1<<add.name<<endl<<add.birthDate<<endl<<add.age<<endl<<add.phoneNo<<endl<<add.Email_id
                    <<endl<<add.nidNo<<endl<<add.gardianName<<endl<<add.gardianPh<<endl<<add.roomNo
                    <<endl<<add.roomcon<<endl<<add.rent<<endl<<add.institute<<endl<<add.addres<<endl<<"\n\n";

            }
            else{
                found++;
                system("cls");
                cout<<"\n\n\t\t Data deleted.\t\t\n"<<endl;
            }
            file>>add.name>>add.birthDate>>add.age>>add.phoneNo>>add.Email_id
                >>add.nidNo>>add.gardianName>>add.gardianPh>>add.roomNo
                >>add.roomcon>>add.rent>>add.institute>>add.addres;
            
        }
        if (found==0)
        {
            system("cls");
            cout<<"\n\n\t\t"<<pNo<<"\t\t ";
            cout<<"\n\tThis phone no. is not in file\t\t\n"<<endl;
        }
        
        
        file1.close();
        file.close();
        remove("boder_detals.txt");
        rename("detals.txt","boder_detals.txt");

    }
    system("PAUSE");
    mainMenu();
}



//Password function.
void pass(){
    int i=0,a=0;
    string userName="shakil";
    char password[10]="open@";
    string uName;
    char pWord[10],c=' ';
    do
    {
        system("cls");

        cout<<"\t\t\t\xB2 LOGIN FROM \xB2\t\t\t"<<endl;
        cout<<"\n        Enter your username:- ";
        cin>>uName;
        cout<<"\n        Enter your password:- ";
        while ((pWord[i]=getch())!='\r')
        {
                cout<<"*";
            i++;
        }
        pWord[i]='\0';
        i=0;

        if (userName.compare(uName)==0 && strcmp(password,pWord)==0)
        {
            cout<<"\n\n\n\t\tWelcome! Loging successful..\t\t\n\n"<<endl;
            system("PAUSE");
            mainMenu();
            break;

        }
        else{
            cout<<"\n\n\n\t\t Sorry! Username or Password is incurrect \t\t\n\n"<<endl;
            system("PAUSE");
            a++;

            //getch();
        }
    }
    while (a<2);
    {
    if (a>1)
        cout<<"\n\"You have to remember your password\""<<endl;
        getch();
        exit();
    }
}

