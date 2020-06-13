#include <iostream>
using namespace std;

class Train{
private:
    char path;
    int trainNumber;
    string startStation, endStation;
    int ticketPrice;
    int trainClass;
    int numOfTickets;
    int availableTickets=120;
public:
    void getPath(){
        cout<<"Two train paths:\n"<<"\t01)-->A\n"<<"\t02)-->B\n"<<endl;
        cout<<"\n";
        cout<<"Please Enter Train Path : ";
        cin>>path;
    }

    void getTrainNumber(){
        cout<<"\n";
        if(path=='A'||path=='a'){
            cout<<"You have 2 slow trains and 1 intercity train\n";
            cout<<"\t1)--> Slow Train One\n\t2)--> Slow Train Two\n\t3)--> Intercity Train One"<<endl;
        }else if(path=='B'||path=='b'){
            cout<<"You have 4 slow trains and 2 intercity train\n";
            cout<<"\t1)--> Slow Train One\n\t2)--> Slow Train Two\n\t3)--> Slow Train Three\n\t4)--> Slow Train Four\n\t5)--> Intercity Train One\n\t6)--> Intercity Train Two"<<endl;
        }
        cout<<"Please Enter Train Number : ";
        cin>>trainNumber;
    }

    void getStations(){
        cout<<"\n";
        if(path=='A'){
            if(trainNumber==1 || trainNumber==2){
                cout<<"Available Stations : A , A1 , A2 , A3 , A4 , A5"<<endl;

                cout<<"Select Start Station : ";
                cin>>startStation;

                if(startStation=="A"){
                    cout<<"End Stations : A1 , A2 , A3 , A4 , A5";
                }else if(startStation=="A1"){
                    cout<<"End Stations : A2 , A3 , A4 , A5";
                }else if(startStation=="A2"){
                    cout<<"End Stations : A3 , A4 , A5";
                }else if(startStation=="A3"){
                    cout<<"End Stations :  A4 , A5";
                }else if(startStation=="A4"){
                    cout<<"End Stations : A5";
                }

                cout<<"\nSelect End Station : ";
                cin>>endStation;
            }else{
                startStation="A";
                endStation="A5";
                cout<<"Start Station : "<<startStation<<"\n"<<"End Station : "<<endStation<<endl;
            }
        }else if(path=='B'){
            if(trainNumber==1 || trainNumber==2|| trainNumber==3 || trainNumber==4){
                cout<<"Available Stations : A , B1 , B2 , B3 , B4"<<endl;

                cout<<"Select Start Station : ";
                cin>>startStation;
                if(startStation=="A"){
                    cout<<"End Stations : B1 , B2 , B3 , B4";
                }else if(startStation=="B1"){
                    cout<<"End Stations : B2 , B3 , B4";
                }else if(startStation=="B2"){
                    cout<<"End Stations : B3 , B4";
                }else if(startStation=="B3"){
                    cout<<"End Stations :  B4";
                }

                cout<<"\nSelect End Station : ";
                cin>>endStation;
            }else{
                startStation="A";
                endStation="B4";
                cout<<"Start Station : "<<startStation<<"\n"<<"End Station : "<<endStation<<endl;
            }
        }

    }


    void getTicketPrice(){
        cout<<"\n";
        if(path=='A'){
            if(trainNumber==1 || trainNumber==2){
                if(startStation=="A"){
                    if(endStation=="A1"){
                        ticketPrice=10;
                    }else if(endStation=="A2"){
                        ticketPrice=10;
                    }else if(endStation=="A3"){
                        ticketPrice=10;
                    }else if(endStation=="A4"){
                        ticketPrice=10;
                    }else if(endStation=="A5"){
                        ticketPrice=10;
                    }
                }else if(startStation=="A1"){
                    if(endStation=="A2"){
                        ticketPrice=10;
                    }else if(endStation=="A3"){
                        ticketPrice=10;
                    }else if(endStation=="A4"){
                        ticketPrice=10;
                    }else if(endStation=="A5"){
                        ticketPrice=10;
                    }
                }else if(startStation=="A2"){
                    if(endStation=="A3"){
                        ticketPrice=10;
                    }else if(endStation=="A4"){
                        ticketPrice=10;
                    }else if(endStation=="A5"){
                        ticketPrice=10;
                    }
                }else if(startStation=="A3"){
                    if(endStation=="A4"){
                        ticketPrice=10;
                    }else if(endStation=="A5"){
                        ticketPrice=10;
                    }
                }else if(startStation=="A4"){
                    if(endStation=="A5"){
                        ticketPrice=10;
                    }
                }
            }else{
                cout<<"Have Three Classes...\n\t1--> First Class\n\t2--> Second Class\n\t3--> Third Class\n";
                cout<<"Select Train Class : ";
                cin>>trainClass;
                if(trainClass==1){
                    ticketPrice=10;
                }else if(trainClass==2){
                    ticketPrice=10;
                }else{
                    ticketPrice=10;
                }
            }


        }else{
            if(trainNumber==1 || trainNumber==2|| trainNumber==3 || trainNumber==4){
                if(startStation=="A"){
                    if(endStation=="B1"){
                        ticketPrice=10;
                    }else if(endStation=="B2"){
                        ticketPrice=10;
                    }else if(endStation=="B3"){
                        ticketPrice=10;
                    }else if(endStation=="B4"){
                        ticketPrice=10;
                    }
                }else if(startStation=="B1"){
                    if(endStation=="B2"){
                        ticketPrice=10;
                    }else if(endStation=="B3"){
                        ticketPrice=10;
                    }else if(endStation=="B4"){
                        ticketPrice=10;
                    }
                }else if(startStation=="B2"){
                    if(endStation=="B3"){
                        ticketPrice=10;
                    }else if(endStation=="B4"){
                        ticketPrice=10;
                    }
                }else if(startStation=="B3"){
                    if(endStation=="B4"){
                        ticketPrice=10;
                    }
                }

            }else{
                cout<<"Have Three Classes...\n\t1--> First Class\n\t2--> Second Class\n\t3--> Third Class\n";
                cout<<"Select Train Class : ";
                cin>>trainClass;
                if(trainClass==1){
                    ticketPrice=10;
                }else if(trainClass==2){
                    ticketPrice=10;
                }else{
                    ticketPrice=10;
                }
            }

        }
    }

    void getNumberOfTickets(){
        cout<<"\n";
        cout<<"Available Tickets : "<<availableTickets<<endl;
        cout<<"Enter Number Of Tickets : ";
        cin>>numOfTickets;

        cout<<"Ticket Price : "<<ticketPrice<<endl;
        cout<<"Total Price : "<<ticketPrice*numOfTickets<<endl;
        availableTickets=availableTickets-numOfTickets;
    }
};


Train train;
void runTillEnd(){
    cout<<"================================================================================="<<endl;
    cout<<"=           ---------WELCOME TO TICKET RESERVATION SYSTEM!!!--------            ="<<endl;
    cout<<"================================================================================="<<endl;


    train.getPath();
    train.getTrainNumber();
    train.getStations();
    train.getTicketPrice();
    train.getNumberOfTickets();

    cout<<"================================================================================="<<endl;
    cout<<"=              ---------Ticket Reservation Successful!!!--------                ="<<endl;
    cout<<"================================================================================="<<endl;


}
int main(){


    char check;
        do{
            cout<<"\n\n";
            runTillEnd();

            cout<<"\n Have You Any Other reservation??"<<endl;
            cout<<"         *YES ==> Press Y\n";
            cout<<"         *NO ==> Press N\n";
            cin>>check;

        }while(check=='Y');

        cout<<"================================================================================="<<endl;
        cout<<"=                         ---------GOOD BYE!!!--------                          ="<<endl;
        cout<<"================================================================================="<<endl;

    return 0;
}



