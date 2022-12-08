#include<iostream>
#include<fstream>
#include<iomanip>


using namespace std;


void mainMenu();


int Management
{
     public:

        Management()
        {
            mainMenu();
        }
};

class Details
{
    public:
        static string name, gender;
        int phoneNo;
        int age;
        string add;
        static int cId;
        char arr[100];

        void information
        {
            cout<<"\n Enter the customer ID :";
            cin>>cId;
            cout<<"\n Enter the name:";
            cin>>name;
            cout<<"\nenter the age";
            cin>>age;
            cout<<"\n Address";
            cin>>add;
            cout<<"\n Gender";
            cin>>gender;
            cout<<"your details are saved with us\n"<<endl;

        }
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN[]={"Dubai","Canada","Uk","USA","Australia","Europe"};

            for(int a=0;a<6;a++)
            {
                cout<<(a+1)<<".flight to"<<flight[a]<<endl;

            }

            cout<<"\n Welcome to AIrlines!"<<endl;
            cout<<"Press the number of the county of which you want to book the flight";
            cin>>choice;

            switch(choice)
            {
                case 1:
                    {
                        cout<<"______________Welcome to Dubai emirates__________\n"<<endl;

                        cout<<"your comfort is our priority enjoy the journey"<<endl;

                        cout<<"following are the flightrs \n"<<endl;

                        cout<<"1.DUB -498"<<endl;
                        cout<<"\t08-0-2022 8:00am 10hrs Rs. 14000"<<endl;
                        out<<"1.DUB -678"<<endl;
                        cout<<"\t08-0-2022 8:00am 18hrs Rs. 9000"<<endl;
                        cout<<"1.DUB -567"<<endl;
                        cout<<"\t08-0-2022 8:00am 13hrs Rs. 12000"<<endl;

                        cout<<"\n select the flight you want to book";
                        cin>>choice1;

                        if(choice1 == 1)
                        {
                            charges = 14000;
                            cout<<"\n you have successfully booked the flight DUB - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1 == 2)
                        {
                            charges = 9000;
                            cout<<"\n you have successfully booked the flight DUB - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;
                        }
                         else if(choice1 == 3)
                        {
                            charges = 12000;
                            cout<<"\n you have successfully booked the flight DUB - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"invalid input shifting to the prev menu"<<endl;
                            flight();
                        }
                        cout<<"press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back == 1)
                        {
                            mainMenu();
                        }
                    }

                case 2:
                    {
                        cout<<"______________Welcome to canadaian emirates__________\n"<<endl;

                        cout<<"your comfort is our priority enjoy the journey"<<endl;

                        cout<<"following are the flightrs \n"<<endl;

                        cout<<"1.CA -198"<<endl;
                        cout<<"\t08-0-2022 8:00am 10hrs Rs. 34000"<<endl;
                        out<<"1.CA -678"<<endl;
                        cout<<"\t08-0-2022 8:00am 18hrs Rs. 19000"<<endl;
                        cout<<"1.CA -567"<<endl;
                        cout<<"\t08-0-2022 8:00am 13hrs Rs. 32000"<<endl;

                        cout<<"\n select the flight you want to book";
                        cin>>choice1;

                        if(choice1 == 1)
                        {
                            charges = 34000;
                            cout<<"\n you have successfully booked the flight CA
                             - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1 == 2)
                        {
                            charges = 19000;
                            cout<<"\n you have successfully booked the flight CA - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;
                        }
                         else if(choice1 == 3)
                        {
                            charges = 32000;
                            cout<<"\n you have successfully booked the flight CA - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"invalid input shifting to the prev menu"<<endl;
                            flight();
                        }
                        cout<<"press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back == 1)
                        {
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }

                case 3:
                    {
                        
                        cout<<"______________Welcome to uk emirates__________\n"<<endl;

                        cout<<"your comfort is our priority enjoy the journey"<<endl;

                        cout<<"following are the flightrs \n"<<endl;

                        cout<<"1.uk -198"<<endl;
                        cout<<"\t08-0-2022 8:00am 10hrs Rs. 24000"<<endl;
                        out<<"1.uk -678"<<endl;
                        cout<<"\t08-0-2022 8:00am 18hrs Rs. 19000"<<endl;
                        cout<<"1.uk -567"<<endl;
                        cout<<"\t08-0-2022 8:00am 13hrs Rs. 32000"<<endl;

                        cout<<"\n select the flight you want to book";
                        cin>>choice1;

                        if(choice1 == 1)
                        {
                            charges = 24000;
                            cout<<"\n you have successfully booked the flight CA
                             - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1 == 2)
                        {
                            charges = 19000;
                            cout<<"\n you have successfully booked the flight CA - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;
                        }
                         else if(choice1 == 3)
                        {
                            charges = 32000;
                            cout<<"\n you have successfully booked the flight CA - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"invalid input shifting to the prev menu"<<endl;
                            flight();
                        }
                        cout<<"press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back == 1)
                        {
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }

                    case 4:
                      {
                        
                        cout<<"______________Welcome to usa emirates__________\n"<<endl;

                        cout<<"your comfort is our priority enjoy the journey"<<endl;

                        cout<<"following are the flightrs \n"<<endl;

                        cout<<"1.usa -198"<<endl;
                        cout<<"\t08-0-2022 8:00am 10hrs Rs. 54000"<<endl;
                        out<<"1.usa -678"<<endl;
                        cout<<"\t08-0-2022 8:00am 18hrs Rs. 39000"<<endl;
                        cout<<"1.usa -567"<<endl;
                        cout<<"\t08-0-2022 8:00am 13hrs Rs. 52000"<<endl;

                        cout<<"\n select the flight you want to book";
                        cin>>choice1;

                        if(choice1 == 1)
                        {
                            charges = 54000;
                            cout<<"\n you have successfully booked the flight CA
                             - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1 == 2)
                        {
                            charges = 39000;
                            cout<<"\n you have successfully booked the flight CA - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;
                        }
                         else if(choice1 == 3)
                        {
                            charges = 52000;
                            cout<<"\n you have successfully booked the flight CA - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"invalid input shifting to the prev menu"<<endl;
                            flight();
                        }
                        cout<<"press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back == 1)
                        {
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }

                    case 5:
                     {
                        
                        cout<<"______________Welcome to australia emirates__________\n"<<endl;

                        cout<<"your comfort is our priority enjoy the journey"<<endl;

                        cout<<"following are the flightrs \n"<<endl;

                        cout<<"1.usa -198"<<endl;
                        cout<<"\t08-0-2022 8:00am 10hrs Rs. 44000"<<endl;
                        out<<"1.usa -678"<<endl;
                        cout<<"\t08-0-2022 8:00am 18hrs Rs. 39000"<<endl;
                        cout<<"1.usa -567"<<endl;
                        cout<<"\t08-0-2022 8:00am 13hrs Rs. 42000"<<endl;

                        cout<<"\n select the flight you want to book";
                        cin>>choice1;

                        if(choice1 == 1)
                        {
                            charges = 44000;
                            cout<<"\n you have successfully booked the flight CA
                             - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;

                        }
                        else if(choice1 == 2)
                        {
                            charges = 39000;
                            cout<<"\n you have successfully booked the flight CA - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;
                        }
                         else if(choice1 == 3)
                        {
                            charges = 42000;
                            cout<<"\n you have successfully booked the flight CA - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"invalid input shifting to the prev menu"<<endl;
                            flight();
                        }
                        cout<<"press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back == 1)
                        {
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }
                case 6:

                      {
                        
                        cout<<"______________Welcome to european emirates__________\n"<<endl;

                        cout<<"your comfort is our priority enjoy the journey"<<endl;

                        cout<<"following are the flightrs \n"<<endl;

                        cout<<"1.EU -198"<<endl;
                        cout<<"\t08-0-2022 8:00am 10hrs Rs. 44000"<<endl;
                        out<<"1.EU -678"<<endl;
                        cout<<"\t08-0-2022 8:00am 18hrs Rs. 39000"<<endl;
                        cout<<"1.EU -567"<<endl;
                        cout<<"\t08-0-2022 8:00am 13hrs Rs. 42000"<<endl;

                        cout<<"\n select the flight you want to book";
                        cin>>choice1;
                        cout<<" go back to menu and take the ticket"<<endl;
                        }
                         else if(choice1 == 3)
                        {
                            charges = 42000;
                            cout<<"\n you have successfully booked the flight CA - 498"<<endl;
                            cout<<"you can go back to menu and take the ticket"<<endl;
                        }
                        else{
                            cout<<"invalid input shifting to the prev menu"<<endl;
                            flight();
                        }
                        cout<<"press any key to go back to the main menu:"<<endl;
                        cin>>back;

                        if(back == 1)
                        {
                            mainMenu();
                        }
                        else{
                            mainMenu();
                        }
                    }

                    default:
                    {
                        cout<<"invalid input, shifting you to the main menu"<<endl;
                        mainMenu();
                        break;
                    }

                    }
                       
            }
        };


        float registration :: charges;
        int registration::choice;



        class ticket: public registration, Details

        {
            public:

                void Bill()
                {
                    string destination="";
                    ofstream outf("records.txt");
                    {
                        outf<<"____________xyz airlines_______"<<endl;
                        outf<<"____________ticket_________________"<<endl;
                        outf<<"___________________________________________"<<endl;

                        outf<<"customer id "<<Details::cId<<endl;
                        outf<<"customer name "<<Details::name<<endl;
                        outf<<"customer gender "<<Details::gender<<endl;
                        outf<<"\tDescription "<<endl;

                        if(registration::choice==1)
                        {
                            destination="Dubai";
                        }
                         else if(registration::choice==2)
                        {
                            destination="Canada";
                        }
                        else if(registration::choice==3)
                        {
                            destination="Uk";
                        }
                        else if(registration::choice==4)
                        {
                            destination="usa";
                        }
                         else if(registration::choice==5)
                        {
                            destination="Australia";
                        }
                         else if(registration::choice==6)
                        {
                            destination="europe";
                        }

                        out<<"Destination\t\t"<<destination<<endl;
                        outf<<"flight cost :\t\t"<<registration::charges<<endl;
                    }
                    out.close();

                }

                void dispBill()
                {
                    ifstream ifs("records.txt");
                    {
                        if(!ifs)
                        {
                            cout<<"file error!"<<endl;
                        }
                        while(!ifs.eof())
                        {
                            ifs.getline(arr,100);
                            cout<<arr<<endl;

                        }
                    }
                    ifs.close();
                }
        };





void mainMenu()
{
    int lchoice;
    int schoice;
    int back;case 2:

    cout<<"\t           xyz airlines \n "<<endl;
    cout<<"\t___________main menu ___________"<<endl;

     cout<<"\t_______________________________"<<endl;
     cout<<"\t\t\t\t\t\t|"<<endl;

     cout<<"\t|\t Press 1 to add the customer details  \t|"<<endl;
     cout<<"\t|\t Press 2 for flight registration  \t|"<<endl;
     cout<<"\t|\t Press 3 for ticket and charges  \t|"<<endl;
     cout<<"\t|\t Press 4 to Exit                \t|"<<endl;
     cout<<"\t|\t\t\t\t\t\t|"<<endl;

     cout<<"Enter the choice:";
     cin>>lchoice;

     Details d;
     registration r;
     ticket t;

     switch(lchoice)
     {
        case 1:
            {
                cout<<"___________Customers_____________\n"<<endl;
                d.information();
                cout<<"Press 1 to go back to main menu";
                cin>>back;

                if(back ==1)
                {
                    mainMenu();

                }
                else {
                    mainMenu();
                }
                break;

            }

        case 2:
            {
                cout<<"__________Book a flight using this system ______________\n"<<endl;
                r.flights();
                break;

            }

            case 3:

                cout<<"______GET YOUR TICKETS______\n"<<endl;
                t.Bill();

                cout<<"Your ticket is printed, you can collect it\n"<<endl;
                cout<<"Press 1 to display your ticket";
                cin>>back;

                    if(back ==1)
                    {
                        t.display();
                        cout<<"Press any key to go back to main menu";
                        cin>>back;
                        if(back == 1)
                        {
                            mainMenu();
                        }else{
                            mainMenu();
                        }

                    }
                    else{
                        mainMenu();
                    }
                    break;
     }

     case 4:
        {
            cout<<"\n\n\t___________Thank you____________"<<endl;
            break;
        }
        default :
            {
                cout<<"Invalid input, please try again\n"<<endl;
                mainMenu();
                break;
            }
     }




int main()
{
    Management Mobj;
    return 0;

}