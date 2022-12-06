#include<iostream>
#include<conio.h>  //for predifined getch()-- pauses output console
#include<fstream> //for input operations getline 
#include<iomanip>  //input output library-- sets basefield tag, precison values (decimals)
#include<string>   //strings
#include<cstring>  //char strings
#include<windows.h>  //contains declaration for functions in windows API (application program interface)

void menu();
void passcode();
void cpasscode();

using namespace std;

class one
{
    public:
    virtual void get()=0;
    virtual void show()=0;
};

class info: public one
{
    public:
    char all[999];
    char name[50], time[50];
    string num, age;
    void get()
    {
        system("cls");
        cin.sync();
        cout<<"\n Enter the patient's name: ";
        cin.getline(name,50);
        cout<<"\n Enter Appointment time: ";
        cin.getline(time,50);
        cout<<"\n Enter your age: ";
        cin>>age;
        cout<<"\n Enter Appointment number: ";
        cin>>num;
    }

    void show()
    {
        cout<<"\n Name: "<<name;
        cout<<"\n Age: "<<age;
        cout<<"\n No. :"<<num;
        cout<<"\n Time: "<<time;
    }
};

//1st doctor

class soham: public info
{
    public:
    info a1;
    void get()
    {
        system("cls");
        // ofstream out("soham.txt", ios:: app);
        // a1.get();
        // out.write((char*)  &a1, sizeof(a1));
        // out.close();

        ofstream out("Soham.txt", ios::app);
        {
            a1.get();
        }
        out<<"\n Name: "<<a1.name <<"\n Age: "<<a1.age<<"\n No.: "<<a1.num<<"\n Time: "<<a1.time;
        out.close();

        cout<<"Your entry has been saved"<<endl;
        getch();
        menu();
    }

    void show()
    {
        ifstream in;
        in.open("Soham.txt");
        if(!in)
        {
            cout<<"\n NO DATA IN FILE!!";
            cout<<"\n press any key to continue";
            getch();
            menu();
        }
        else
        {
            while(!in.eof())
            { 
                // in.read((char*)&a1,sizeof(a1));
                // a1.show();
                in.getline(all,999);
                cout<<all<<endl;
            }
            in.close();
            getch();
            menu();
        }
    }
};

//2nd doctor

class abdulla: public info
{
    public:
    info a1;
    void get()
    {
        system("cls");
        //ofstream out("abdulla.txt", ios:: app);
        //a1.get();
        //out.write((char*)  &a1, sizeof(info));
        //out.close();
        ofstream out("Abdulla.txt", ios::app);
        {
            a1.get();
        }
        out<<"\n Name: "<<a1.name <<"\n Age: "<<a1.age<<"\n No.: "<<a1.num<<"\n Time: "<<a1.time;
        out.close();

        cout<<"Your entry has been saved"<<endl;
        getch();
        menu();
    }

    void show()
    {
        ifstream in;
        in.open("Abdulla.txt");
        if(!in)
        {
            cout<<"\n NO DATA IN FILE!!";
            cout<<"\n press any key to continue";
            getch();
            menu();
        }
        else
        {
            while(!in.eof())
            {
                //in.read((char*)&a1, sizeof(a1));
                //a1.show();
                in.getline(all,999);
                cout<<all<<endl;
            }
            in.close();
            getch();
            menu();
        }
    }
};
 
//3rd doctor

class kaustub: public info
{
    public:
    info a1;
    void get()
    {
        system("cls");
        //ofstream out("kaustub.txt", ios:: app);
        //a1.get();
        //out.write((char*)  &a1, sizeof(info));
        //out.close();
         ofstream out("Kaustub.txt", ios::app);
        {
            a1.get();
        }
        out<<"\n Name: "<<a1.name <<"\n Age: "<<a1.age<<"\n No.: "<<a1.num<<"\n Time: "<<a1.time;
        out.close();

        cout<<"Your entry has been saved"<<endl;
        getch();
        menu();
    }

    void show()
    {
        ifstream in;
        in.open("Kaustub.txt");
        if(!in)
        {
            cout<<"\n NO DATA IN FILE!!";
            cout<<"\n press any key to continue";
            getch();
            menu();
        }
        else
        {
            while(!in.eof())
            {
                //in.read((char*)&a1,sizeof(a1));
                //a1.show();
                in.getline(all,999);
                cout<<all<<endl;
            }
            in.close();
            getch();
            menu();
        }
    }
};

//staff

class staff: public one
{
    public:
    char all[999];
    char name[50], age[20], sal[30], pos[20];

    void get()
    {
        ofstream out("staff.txt", ios::app);
        {
            system("cls");
            cin.sync();
            cout<<"\n Enter name: ";
            cin.getline(name,50);
            cout<<"\n Enter age: ";
            cin.getline(age,20);
            cout<<"\n Enter salary: ";
            cin.getline(sal,30);
            cout<<"\n Enter working position: ";
            cin.getline(pos,20);
        }
        out<<"\n Name: "<<name <<"\n Age: "<<age<<"\n Salary: "<<sal<<"\n Working position: "<<pos;
        out.close();
        cout<<"\n Your information has been saved!!";
        cout<<"\n PRESS ANY KEY TO CONTINUE!!";
        getch();
        menu();  
    }
    
    void show()
    {
        ifstream in("staff.txt");
        if(!in)
        {
            cout<<"\n Couldn't open file!";
        }
        while(!(in.eof()))
        {
            in.getline(all,999);
            cout<<all<<endl;
        }
        
        in.close();
        cout<<"\n PRESS ANY KEY TO CONTINUE!!";
        getch();
        menu();
    }
};

//page

class information 
{
    public:
    void drinfo()
    {
        system("cls");
        system("color F3");
        cout<<"\n\t\t 3 doctors avaliable"<<endl;
        cout<<"\t\t Doctor information and avalibility is provided as follows: "<<endl;
        cout<<"------------------------------------------------\n\n";
        cout<<"\t\t Dr. Soham [Neurologist] \n\n";
        cout<<"\t\t\t Timings: \n\n";
        cout<<"\t Monday to Friday \t\t 9am - 5pm \n";
        cout<<"\t Saturday         \t\t 9am - 1pm \n";
        cout<<"\t Sunday           \t\t Day Off \n\n";
        cout<<"------------------------------------------------\n\n";
        cout<<"\t\t Dr. Abdulla [Dermatologist] \n\n";
        cout<<"\t\t\t Timings: \n\n";
        cout<<"\t Monday to Friday \t\t 11am - 6pm \n";
        cout<<"\t Saturday         \t\t 12am - 3pm \n";
        cout<<"\t Sunday           \t\t Day Off \n\n";
        cout<<"------------------------------------------------\n\n";
        cout<<"\t\t Dr. Kaustub [Dentist] \n\n";
        cout<<"\t\t\t Timings: \n\n";
        cout<<"\t Monday to Friday \t\t 9am - 7pm \n";
        cout<<"\t Saturday         \t\t 11am - 7pm \n";
        cout<<"\t Sunday           \t\t 3pm - 6pm \n\n";
        cout<<"------------------------------------------------\n\n";
        cout<<"\n PRESS ANY KEY TO CONTINUE!!";
        getch();
        menu();
    }

};

void call_dr()
{
    system("cls");
    int choice;
    cout<<"\t\t\t Press 1 for Dr.Soham \n";
    cout<<"\t\t\t Press 2 for Dr.Abdulla \n";
    cout<<"\t\t\t Press 3 for Dr.Kaustub \n";
    cin>>choice;

    one *ptr;
    soham s3;
    abdulla s4;
    kaustub s5;

    switch(choice)
    {
        case 1:
            ptr=&s3;
            ptr -> get();
            break;
        
        case 2:
            ptr=&s4;
            ptr -> get();
            break;
        
        case 3:
            ptr=&s5;
            ptr -> get();
            break;

        default:
            cout<<"\n Please enter a valid input: ";

    }
}

void pinfoshow()
{
    system("cls");
    int choice;
    cout<<"\n\n\t Press 1 for Dr.Soham";
    cout<<"\n\n\t Press 2 for Dr.Abdulla";
    cout<<"\n\n\t Press 3 for Dr.Kaustub \n";
    cin>>choice;
    one *ptr;
    soham s3;
    abdulla s4;
    kaustub s5;

    switch(choice)
    {
        case 1:
            ptr=&s3;
            ptr -> show();
            break;
        
        case 2:
            ptr=&s4;
            ptr -> show();
            break;
        
        case 3:
            ptr=&s5;
            ptr -> show();
            break;

        default:
            cout<<"\n Please enter a valid input: ";
            getch();
            menu();
    }
}

//menu

void menu()
{
    system("cls");
    system("color FC");
    cout<<"\n\n";
    cout<<"\t\t     ________________________________________   \n";
    cout<<"\t\t    |                MAIN MENU               |  \n";
    cout<<"\t\t    |       Hospital Management System       |  \n";
    cout<<"\t\t    |________________________________________|  \n\n";

    cout<<"\t\t Press 1-> Availibilty of Doctor: \n";
    cout<<"\t\t Press 2-> Doctor Appointemnt: \n";
    cout<<"\t\t Press 3-> Saving staff info: \n";
    cout<<"\t\t Press 4-> Checking patient appointment menu: \n";
    cout<<"\t\t Press 5-> Checking staff information menu: \n";
    cout<<"\t\t Press 6-> Change Password: \n";
    cout<<"\t\t Press 7-> Log out: \n";
    cout<<"\t\t Press 8-> Exit: \n";

    information a1;
    one *ptr;
    staff a2;
    int i=0;
    int a;
    cin>>a;

    switch(a)
    {
        case 1:
            a1.drinfo();
            break;
        
        case 2:
            call_dr();
            break;
        
        case 3:
            ptr=&a2;
            ptr->get();
            break;

        case 4:
            pinfoshow();
            break;
        
        case 5:
            ptr=&a2;
            ptr->show();
            break;

        case 6:
            cpasscode();
            break;
        
        case 7:
            passcode();
            break;

        case 8:
            exit(0);
            break;

        default:
            cout<<"\n Please enter a valid input: ";
    }
    
}  

//password

void passcode()
{
    system("cls");
    char all[999];
    char p1[50], p2[50], p3[50];
    system("color Fc");
    // ifstream in("password.txt");
    // {
    //     cin.sync();
    //     cout<<"\n\n\t\t Enter Password to Login->  ";
    //     cin.getline(p1,50);
    //     cout<<"\n\n\t\t Re-enter-> ";
    //     cin.getline(p2,50);
        
    //     if(strcmp(p2,p1)==0)
    //     {
    //         menu();
    //     }
    //     else
    //     {
    //         cout<<"\n\n\t Incorrect Password, Try Again!!";
    //         Sleep(999);
    //         passcode();
    //     }     
    // }
    // in.close();

    ifstream in;
        in.open("password.txt");
        
        if(!in)
        {
            cout<<"\n NO DATA IN FILE!!";
            cout<<"\n press any key to continue";
            getch();
            menu();
        }
        else
        {
            while(!(in.eof()))
            {
                in.getline(all,999);
            }

            cin.sync();
        cout<<"\n\n\t\t Enter Password to Login->  ";
        cin.getline(p1,50);
        cout<<"\n\n\t\t Re-enter-> ";
        cin.getline(p2,50);
        
        if(strcmp(p2,p1)==0)
        {
            if(strcmp(all,p1)==0)
            {
                menu();
            }
            else
            {
                cout<<"Wrong Password!!";
                cout<<"\n\n Please Try Again!!\n";
                system("pause");
                passcode();
            }
        }
        else
        {
            cout<<"Password Mismatch!!";
            cout<<"\n\n Please Try Again!!\n";
            system("pause");
            passcode();
        }
            
        }
}

//change password 

void cpasscode()
{
    char n[50];
    system("cls");
    ofstream out("password.txt");
    {
        cin.sync();
        cout<<"\n\t\t Enter New Password: ";
        cin.getline(n,50);
        out<<n;
    }
    out.close();
    cout<<"\n\t\t Password Changed Successfully!!";
    getch();
    passcode();
}


int main()
{ 
    passcode();
    system("pause");
}