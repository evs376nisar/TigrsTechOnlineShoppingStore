#include<iostream>
#include<fstream>
#include <string>
#include<windows.h>
using namespace std;

class  parent
{
     public:
     virtual void view ()=0;
     virtual void login()=0;
     virtual void registration()=0;
     
};
class updatedata{
   public:
   string name,lastname,useremail,password,status;
};
class logindata{
         public: 
              string username;
              string userlastname;
              string useremail;
              string userpassword;
              string retypepassowrd ;
              string status;
              
};

class data {
   public:
   int res;
    int id ,i=0,j,k,l;
    char option;
    string name;
    string lastname;
    string email;
    string password;
    string retype_password;
    double wallet=0;
    double iphone8s=0;
    double iphoneXmax=0;
    double iphone12=0;
    double s8=0;
    double s9=0;
    double s10=0;
    int counter=0;
    int price;
    string item;
    string date;
    int year,month,day;
    int nthamount;
    int ProductQuantity=0;
    int finalres;
    int iphoneQuantity8s = 4 ;
    int iphoneQuantityxmax = 4 ;
    int iphoneQuantity12 = 4 ;
    int samsungQuantitys8 = 4 ;
    int samsungQuantitys9 = 4 ;
    int samsungQuantitys10 = 4 ;
    string store_name,productname;
    
};
class user : public data{
   logindata loginobj,objdata[1000];
   data obj1data[1000],obj1;

   
   
    public: 
         void Cart();
       void userlogin();
      
       void userregistration();
       void getBill();
       void newsotre();
       void salesdetail();

};
void user :: newsotre(){
      
      ifstream getdata;
      getdata.open("newstore.txt");
      for(int i=0;i<500;i++){
         getdata>>obj1data[i].productname;
         getdata>>obj1data[i].ProductQuantity;
         getdata>>obj1data[i].price;
      }
      
       
      for(int i=0;i<500;i++){
         if(obj1data[i].productname.empty() ){

         }else{
            //   cout<<" sotre : "<<obj1data[i].store_name;
         cout<<" PRoduct Name "<<obj1data[i].productname<<endl;
         cout<<" Quantity "<<obj1data[i].ProductQuantity<<endl;
         cout<<" ptice "<<obj1data[i].price<<endl;
      }
      }
}
void user :: getBill(){
   data obj[1000];
	   ifstream getdata;
      getdata.open("storedata.txt");
      for(int i=0;i<50;i++){
         getdata>>obj[i].name;
         getdata>>obj[i].item;
         getdata>>obj[i].price;
           cout<<"Name "<<obj[i].name<<endl;
        cout<<"Itm Name "<<obj[i].item<<endl;
         cout<<" Item PRice "<<obj[i].price<<endl;
      }
      for(int i=0;i<50;i++){
         string name;
         cout<<"Enter name of account holder"<<endl;
         cin>>name;
         if(name==obj[i].name){
         cout<<"Name "<<obj[i].name;
        cout<<"Itm Name "<<obj[i].item;
         cout<<" Item PRice "<<obj[i].price;
         }else{
            cout<<"NO dound";         }
      }
}
void user :: userlogin(){
	fstream getdata;
       	getdata.open("userregistration.txt");
       	for(int i=0;i<100;i++)
		   {
       		  getdata>>objdata[i].username;
       		  getdata>>objdata[i].userlastname;
       		  getdata>>objdata[i].useremail;
       		  getdata>>objdata[i].userpassword;
       		  getdata>>objdata[i].status;
		   }
         login:
         
		    cout<<"Enter Email For Login : "<<endl;
		    cin>>loginobj.useremail;
		    cout<<"Enter Password For Login : "<<endl;
		    cin>>loginobj.userpassword;
	        bool isapproved= false;
	        bool islogin=false;
	        bool isblock=false;
		for(int i=0;i<100;i++)
		   {
            
       	     if(loginobj.useremail==objdata[i].useremail && loginobj.userpassword==objdata[i].userpassword ){
                  if(objdata[i].status=="approved" || objdata[i].status=="blocked"){
       	     	     if(objdata[i].status != "blocked")
                     {
                     	
                     cout<<"Welcome : "<<objdata[i].username<<endl;
                     islogin=true;
                     isblock=true;
                     isapproved=true;
                     Cart();
                     }else
                     {
                     
                      isblock=false;
                     }
                     
                   
                  }else {
                      
                       isapproved=false;
                  }
				  
               break;
            }
            else 
            {
                islogin=false;
            }
             
		   }   
         
         
         getdata.close();
         if(islogin==false){
         cout<<"InValid Entry "<<endl;
            goto login;
          
         }else if( isblock==false){
               cout<<"You are bocked By the Admin  :("<<endl;
         }
         else if(isapproved==false){
            cout<<"NOt Approved By The Amdin";
         }
}
void user :: userregistration(){ 

	    reg:
       cout<<"Welcome To registration :  "<<endl;
       ofstream setdata;
       setdata.open("userregistration.txt",ios::app);
       cout<<"Enter Your First Name "<<endl;
       cin>>loginobj.username;
       cout<<"Enter Your Last  Name "<<endl;
       cin>>loginobj.userlastname;
       cout<<"Enter Your Email  Name "<<endl;
       cin>>loginobj.useremail;
       cout<<"Enter Your Password Name "<<endl;
       cin>>loginobj.userpassword;
       cout<<"Enter RetypePassword "<<endl;
       cin>>loginobj.retypepassowrd;
       if(loginobj.retypepassowrd==loginobj.userpassword){
             setdata<<loginobj.username<<endl;
             setdata<<loginobj.userlastname<<endl;
             setdata<<loginobj.useremail<<endl;
             setdata<<loginobj.userpassword<<endl;
             setdata<<"pendding"<<endl;
             cout<<"Your successfully registerd and wait for the admin approval";
       }else {
          cout<<"Your Retype Password does Not ! Try Again  :( "<<endl;
          goto reg;
       }
       
}
void user :: Cart(){
	               //   ofstream setdata;
	               //   setdata.open("storedata.txt",ios::app);
	                 
                     cout<<"What Do You Want To Do "<<endl;
                     cout<<"Press 1 for Shopping "<<endl;
                     cout<<"Press 2 For Open Your Own Store "<<endl;
                     
                     cout<<"Press 3 to check you account "<<endl;
                     cout<<"Press 4 to buy from other store"<<endl;
                     cin>>option;
                     if(option=='1'){
                     	
                     	double cart=0;
                        cout<<"Welcome To Pak Tigers Onine Shopping Store "<<endl;
                        cout<<"Please Enter Ammount You Want To spent "<<endl;
                        cin>>wallet;
                        ofstream setdata;
	                 setdata.open("storedata.txt",ios::app);
	                 cout<<"Enter The name "<<endl;
                     cin>>objdata[i].username;
                     setdata<<objdata[i].username<<endl;
                     // setdata<<date<<endl;
                     // setdata.close();
						system("cls");
                        while(wallet >=0){
                           if(wallet<=10){
                              cout<<"you cant but anything You Dont Have Much Money"<<endl;
                              break;
                           }else{
                           	if(counter==1){
						     cout<<"Your Remainging balance "<<wallet<<" In You wallet"<<endl;
                             cout<<"Here is Your Inventory = "<<cart<<endl;
                             cout<<"Press 1 to check your bill "<<endl;
                             
                           break;
							   }else{
							      product:
                           cout<<"You Have Added "<<wallet<<" In You wallet"<<endl;
                           cout<<"Here is Your Inventory = "<<cart<<endl;
                           cout<<"What Do you want to buy "<<endl;
                           cout<<"Press 1 for Apple Proucts"<<endl;
                           cout<<"Press 2 for to Buy samsung Products"<<endl;
                           cout<<"Press 3 to check your bought products"<<endl;
                           cout<<"Press 4 To add more money in your wallet "<<endl;
                           cout<<"Press 5 for check Out! "<<endl;
                           cin>>option;
                           if(option=='1'){
                               cout<<"Press 1 to buy Iphone "<<endl;
                               cin>>option;
                               if(option=='1'){
                                cout<<"Press 1 for iphone 8s 100$   Available Quantity "<<iphoneQuantity8s<<endl;
                                cout<<"Press 2 for iphone xMax 1000$  Available Quantity "<<iphoneQuantityxmax<<endl;
                                cout<<"Press 3 for iphone 12 1400$  Available Quantity "<<iphoneQuantity12<<endl;
                                cin>>option;
                                 switch (option)
                                 {
                                 case '1':
                                    {
                                       if(wallet<=100){
                                         cout<<"Sorry YOU cant not but this item You dont enough money"<<endl;
                                         cout<<"Press 1 for add more money or press 2 for check out"<<endl;
                                         cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
										    	cout<<"Bye Bye"<<endl;
												exit(1);
											}
										  
										}
										
                                       }
                                         else 
                                       {
                                          if(iphoneQuantity8s==0){
                                             cout<<"Product is out Of stock "<<endl;
                                            goto product;
                                          }
                                          else{

                                             iphone8s++;
                                       cart = iphone8s;
                                       cout<<"Enter No of product you want"<<endl;
                                       cin>>nthamount;
                                       finalres = 100 * nthamount; 
                                       wallet = wallet - finalres;
                                       iphoneQuantity8s = iphoneQuantity8s-nthamount;
                                        cout<<"PRoduct remaing "<<iphoneQuantity8s;
                                       item="iphone8s";
                                       price=finalres;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
                                          }
                                          
                                       
                                       }
                                       
                                    }
                                    break;
                                    case '2':
                                    {
                                       if(wallet<=100){
                                         cout<<"Sorry YOU cant not but this item You dont enough money"<<endl;
                                         cout<<"Press 1 for add more money or press 2 for check out"<<endl;
                                         cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
										    	cout<<"Bye Bye"<<endl;
												exit(1);
											}
										  
										}
										
                                       }else {
                                          if(iphoneQuantityxmax==0){
                                             cout<<"Product is out Of stock "<<endl;
                                            goto product;
                                          }
                                          else{
                                       iphoneXmax++;
                                       cart = iphoneXmax;
                                       
                                       cout<<"Enter No of product you want"<<endl;
                                       cin>>nthamount;
                                        iphoneQuantityxmax = iphoneQuantityxmax-nthamount;
                                       finalres = 1000 * nthamount; 
                                       wallet = wallet - finalres;
                                       item="iphoneXmax";
                                       price=finalres;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
									   }
                                       }
                                    }
                                    break;
                                 case'3':
                                 {  
                                    if(wallet<=100){
                                         cout<<"Sorry YOU cant not but this item You dont enough money"<<endl;
                                         cout<<"Press 1 for add more money or press 2 for check out"<<endl;
                                         cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
										    	cout<<"Bye Bye"<<endl;
												exit(1);
											}
										  
										}
										
                                       }else {
                                          if(iphoneQuantity12==0){
                                             cout<<"Product is out Of stock "<<endl;
                                            goto product;
                                          }
                                          else{
                                       iphone12++;
                                       cart = iphone12;
                                      cout<<"Enter No of product you want"<<endl;
                                       cin>>nthamount;
                                       finalres = 1400 * nthamount; 
                                        iphoneQuantity12 = iphoneQuantity12-nthamount;
                                       wallet = wallet - finalres;
                                       item="iphone12";
                                       price=finalres;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
                                       }
                                       }
                                 }
                                 
                                 default:
                                    break;
                                 }
                               }else {
                               	cout<<"You have entered InVaLid KEy"<<endl;
							   }
                           }else if(option=='2'){
                                cout<<"Press 1 for samsung S8 400$   Available Quantity "<<samsungQuantitys8<<endl;
                                cout<<"Press 2 for samsung S9 900$  Available Quantity "<<samsungQuantitys9<<endl;
                                cout<<"Press 3 for Samsung S10 1000$  Available Quantity "<<samsungQuantitys10<<endl;
                                cin>>option;
                                
                                 switch (option)
                                 {
                                 case '1':
                                    {
                                        if(wallet<=400){
                                         cout<<"Sorry YOU cant not but this item You dont enough money"<<endl;
                                         cout<<"Press 1 for add more money or press 2 for check out"<<endl;
                                         cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
										    	cout<<"Bye Bye"<<endl;
												exit(1);
											}
										  
										}
										
                                       }else {
                                          if(samsungQuantitys8==0){
                                             cout<<"Product is out Of stock "<<endl;
                                            goto product;
                                          }
                                          else{
                                       s8++;
                                       cart = s8;
                                       cout<<"Enter No of product you want"<<endl;
                                       cin>>nthamount;
                                       finalres = 400 * nthamount; 
                                       wallet = wallet - finalres;
                                         samsungQuantitys8 = samsungQuantitys8-nthamount;
                                       item="SamsungS8";
                                       price=finalres;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
                                          }
                                       }
                                    }
                                    break;
                                 case '2':
                                    {
                                       if(wallet<=400){
                                         cout<<"Sorry YOU cant not but this item You dont enough money"<<endl;
                                         cout<<"Press 1 for add more money or press 2 for check out"<<endl;
                                         cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
										    	cout<<"Bye Bye"<<endl;
												exit(1);
											}
										  
										}
										
                                       }else {
                                          if(samsungQuantitys9==0){
                                             cout<<"Product is out Of stock "<<endl;
                                            goto product;
                                          }
                                          else{
                                       s9++;
                                       cart = s9;
                                       cout<<"Enter No of product you want"<<endl;
                                       cin>>nthamount;
                                       finalres = 900 * nthamount; 
                                       wallet = wallet - finalres;
                                        samsungQuantitys9 = samsungQuantitys9-nthamount;
                                       item="samsungS9";
                                       price=finalres;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
                                       }
                                       }
                                    }
                                    break;
                                    case '3':
                                    {
                                       if(wallet<=400){
                                         cout<<"Sorry YOU cant not but this item You dont enough money"<<endl;
                                         cout<<"Press 1 for add more money or press 2 for check out"<<endl;
                                         cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
										    	cout<<"Bye Bye"<<endl;
												exit(1);
											}
										  
										}
										
                                       }else {
                                          if(samsungQuantitys10==0){
                                             cout<<"Product is out Of stock "<<endl;
                                            goto product;
                                          }
                                          else{
                                       s10++;
                                       cart = s10;
                                       cout<<"Enter No of product you want"<<endl;
                                       cin>>nthamount;
                                       finalres = 1000 * nthamount; 
                                       wallet = wallet - finalres;
                                       
                                        samsungQuantitys10 = samsungQuantitys10-nthamount;
                                       item="SamsungS10";
                                       price=finalres;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
                                          }
                                       }
                                    }
                                    break;
                                 default:
                                    break;
                                 }
                               

                           }else if(option=='3')
                           {
                                getBill();
                           }else if(option=='4')
                           {
                           	
                            add:
                           	double newwallet=0;
                           	cout<<"Enter New Amount You want to add in your wallet "<<endl;
                           	cin>>newwallet;
                           	wallet = newwallet + wallet ;
                           	cout<<" Price OF wallet "<<endl; 
                          
                           }else if(option=='5')
						   {
						   	  
						   	  counter++;
						   	  
						   }
                        }

                     }
                     }
                     }
                     else if(option=='2'){

                        cout<<"Welcome To Pak Tigers Online Plate Form "<<endl;
                        
                        int nthproduct,price;
                         ofstream setdata;
                         setdata.open("newstore,.txt",ios::app);
                        cout<<"Please Enter Your Store Name "<<endl;
                        cin>>store_name;
                        cout<<"Enter The ammount of product You want to added"<<endl;
                        cin>>nthproduct;
                        setdata<<store_name<<endl;
                        for(int i=0;i<nthproduct;i++){
                           cout<<" Enter Your # "<<i<<" Product name"<<endl;
                           cin>>productname;
                           cout<<"Enter Your # " <<i<< " Product price";
                           cin>>price;
                           cout<<"Enter the Product Quantity "<<endl;
                           cin>>ProductQuantity;
                           setdata<<productname<<endl;
                           setdata<<ProductQuantity<<endl;
                           setdata<<price<<endl;

                              
                        }
                        setdata.close();
                        

                     }else if(option=='3'){
                     	getBill();
					 }
                else if(option=='4'){
                   cout<< " New Storee "<<endl;
                   newsotre();
                }
}
class admin : public parent 
{
      updatedata upobj[1000];
    logindata objdata[1000];
    data obj;
    user userobj;
    public:
 
       admin (){
//          system("color 05");
//	cout<<"\t \t PROGRAM\a\a\a\a\a\a IS\a\a\a\a\a LOADING\a\a\a\a\a\n";
//	Sleep(1000);
//	for(int j=0;j<6;j++)
//	{
//		system("color 03");
//		cout<<"|-|-";
//		cout<<"\a\a\a\a\a\a\a";
//		Sleep(100);
//		system ("color 09");
//		Sleep(100);
//		cout<<"|-|-";
//		cout<<"\a\a\a\a\a\a\a";
//		system("color 04");
//		Sleep(100);
//	}
//	system("cls");
          view();
       } 
        void view();
        void login();
        void registration();
        void salesdetail();
        void useregistrationdetail();

};
void admin :: useregistrationdetail(){
   
    cout << "\t\t\t********************************************************" << endl;
    cout << "\t\t\t*______________________________________________________*" << endl;
    cout << "\t\t\t*___________________PAK TIGERS_________________________*" << endl;
    cout << "\t\t\t************* |      Registered User Infor Portal     |*" << endl;
    cout << "\t\t\t************* |__________________|____________________|*" << endl;
    
   // cout<<" : "<<endl;
               ifstream getdata;
               getdata.open("userregistration.txt");
               int i =1;
                while(!getdata.eof())
                  {
                  getdata>>objdata->username;
                  getdata>>objdata->userlastname;
                  getdata>>objdata->useremail;
                  getdata>>objdata->userpassword;
                  getdata>>objdata->status;
                  
                  cout << "\t\t\t*______________________________________________________*" << endl;
                  cout << "\t\t\t************* |   ENTRY          |  "<<i++<<"                            " << endl;
                  cout << "\t\t\t************* |__________________|____________________|*" << endl;
                  cout << "\t\t\t************* |   NAME           |  "<<objdata->username<<"            " << endl;
                  cout << "\t\t\t************* |__________________|____________________|*" << endl;
                  cout << "\t\t\t************* |   LAST NAME      |  "<<objdata->userlastname<<"        " << endl;
                  cout << "\t\t\t************* |__________________|____________________|*" << endl;
                  cout << "\t\t\t************* |   EMAIL          |  "<<objdata->useremail<<"           " << endl;
                  cout << "\t\t\t************* |__________________|____________________|*" << endl;
                  cout << "\t\t\t************* |   LAST NAME      |  "<<objdata->userpassword<<"        " << endl;
                  cout << "\t\t\t************* |__________________|____________________|*" << endl;
                  cout << "\t\t\t************* |   LAST NAME      |  "<<objdata->status<<"              " << endl;
                  cout << "\t\t\t************* |__________________|____________________|*" << endl;
                 
                  
                  
                  }
                  getdata.close();
}
void admin :: salesdetail(){
   system("cls");
   data obj[1000];
	   ifstream getdata;
      getdata.open("storedata.txt",ios::in|ios::out);
      for(int i=0;i<100;i++){
         getdata>>obj[i].name;
         getdata>>obj[i].item;
         // getdata>>obj[i].price;
      }

    cout << "\t\t\t********************************************************" << endl;
    cout << "\t\t\t*______________________________________________________*" << endl;
    cout << "\t\t\t*___________________DATA   DETAIL______________________*" << endl;
    bool isavailable = false;
    for(int i=0;i<1;i++){
        if(obj[i].item.empty()){
            cout << "\t\t\t************* |      NAME    | "<<"NO MORE AVAILABLE"<<"           |*" << endl;
            exit(1);
      
         }else{
    cout << "\t\t\t************* |      NAME        | "<<obj[i].name<<"           |*" << endl;
    
    }

    }
      for(int i=0;i<20;i++){
         if(obj[i].item.empty()){

         cout << "\t\t\t************* |      PRODUCT        | "<<"NO MORE AVAILABLE"<<"           |*" << endl;
         exit(1);
         }else{
            
            cout << "\t\t\t************* |      PRODUCT     | "<<obj[i].item<<"           |*" << endl;
            isavailable = true;
   
         }
         
         
      }
      
      getdata.close();
}
void admin::registration(){   
   system("cls");
   regis:
    cout << "\t\t\t*************************************************************************" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
   cout<<"\t\t\t*\tWelcome to resgitration"<<endl;
   ofstream setdata;
      setdata.open("admin.txt",ios::app);
      cout<<"\t\t\t*\tEnter YouR first Name : "<<endl;
      cin>>obj.name;
      cout<<"\t\t\t*\tEnter your Last Name  :"<<endl;
      cin>>obj.lastname;
      cout<<"\t\t\t*\tEnter Your Email : "<<endl;
      cin>>obj.email;
      cout<<"\t\t\t*\tEnter your Password : "<<endl;
      cin>>obj.password;
      cout<<"\t\t\t*\tEnter RetypePassord : "<<endl;
      cin>>obj.retype_password;
      if(obj.retype_password == obj.password){
         setdata<<obj.name<<endl;
         setdata<<obj.lastname<<endl;
         setdata<<obj.email<<endl;
         setdata<<obj.password<<endl   ;
         cout<<"\t\t\t*\tData Enter Successfully  :)";
      }else
      {
          cout<<"\t\t\t*\tPassowrd and retypePassword is not matched :"<<endl;
          cout<<"\t\t\t*\tEnter data again : "<<endl;
          goto regis;
      }
}
void admin :: login(){
   system("cls");
   fstream getdata;
       	getdata.open("admin.txt");
       	for(int i=0;i<100;i++){
             getdata>>objdata[i].username;
             getdata>>objdata[i].userlastname;
             getdata>>objdata[i].useremail;
             getdata>>objdata[i].userpassword;
          }
          string email,password;
    cout << "\t\t\t*________________________________________________________*" << endl;
    cout << "\t\t\t*__________________WELCOME TIGERS TECH___________________*" << endl;
    cout << "\t\t\t************* |                                         |*" << endl;
    cout << "\t\t\t************* |        WELCOME TO LOGIN PORTAL          |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* |         ENTER EMAIL FOR LOGIN           |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* | EMAIL : ";cin>>email;   
	 cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* |         ENTER PASSWORD FOR LOGIN        |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* | PASSWORD : ";cin>>password;  
     bool islogin = false;
    for(int i = 0 ;i<100;i++)
    {
         if(email==objdata[i].useremail && password == objdata[i].userpassword){
            system("cls");
            cout << "\t\t\t*________________________________________________________*" << endl;
            // cout<<  "\t\t\t*WelCome Mr/Ms Admin : 
            cout << "\t\t\t************* |                                         |*" << endl;
            cout << "\t\t\t************* |         WELCOME "<< objdata[i].username<<" "<<objdata[i].userlastname<<"             |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
            cout << "\t\t\t************* |        What Do You Want To Do ?         |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
            cout << "\t\t\t************* |    Press 1 For View sale detail         |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
            cout << "\t\t\t************* |    Press 2 Registered user detail       |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
            cout << "\t\t\t************* |    Press 3 For Edit You information     |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;  
            cout << "\t\t\t************* |    Press 4 For Appoved ID               |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;  
            cout << "\t\t\t************* |    Press 5 To Blocke ID                 |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;  
            cout << "\t\t\t************* |    Press 6 To UnBlocke ID               |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;  
            cout << "\t\t\t************* | RESPONSE : ";cin>>obj.option;  
     
            islogin =true;
            
            if(obj.option=='1'){
               salesdetail();

            }else if(obj.option=='2'){
               useregistrationdetail();

            }else if(obj.option=='3'){
               cout<<"Edit Portal"<<endl;
            }else if(obj.option=='4')
            {
                 
                    ifstream getdata;
                    getdata.open("userregistration.txt");
                      ofstream setdata;
                         setdata.open("temp.txt",ios::app);
                    for(int i = 0; i<100;i++)
                     {
                            getdata>>upobj[i].name;
                            getdata>>upobj[i].lastname;
                            getdata>>upobj[i].useremail;
                            getdata>>upobj[i].password;
                            getdata>>upobj[i].status;

                           
                    }
                    string Accountname;
                    cout<<"Enter account holder name you want to approved "<<endl;
                    cin>>Accountname;
                    for(int i=0;i<100;i++){
                     if(Accountname==upobj[i].name && upobj[i].status == "pendding"){
                        upobj[i].status = "approved";
                        // cout<<" status : "<<upobj[i].status<<endl;
                        
                               
                               for(int i=0;i<100;i++){
                                  
                             
                               setdata<<upobj[i].name<<endl;
                               setdata<<upobj[i].lastname<<endl;
                               setdata<<upobj[i].useremail<<endl;
                               setdata<<upobj[i].password<<endl;
                               setdata<<upobj[i].status<<endl;
                               cout<<"Account Has been  approved"<<endl;
                               islogin=true;
                               break;
                             
                               }
                              
                               
                           
                           
                               
                     }else{
                       
                        islogin=false;
                        
                        
                     }
                     
                    }
                    
                               setdata.close();
                               getdata.close();
                           remove("userregistration.txt");
                           rename("temp.txt" , "userregistration.txt");
                           if(islogin==false){
                       cout<<"No Pendding Account Found"<<endl;
                        ifstream getdata;
                      getdata.open("userregistration.txt");
                      ofstream setdata;
                         setdata.open("temp.txt",ios::app);
                         
                       for(int i = 0; i<100;i++)
                     {
                            getdata>>upobj[i].name;
                            getdata>>upobj[i].lastname;
                            getdata>>upobj[i].useremail;
                            getdata>>upobj[i].password;
                            getdata>>upobj[i].status;

                           
                    }
                     for(int i=0;i<100;i++){
                                  
                             
                               setdata<<upobj[i].name<<endl;
                               setdata<<upobj[i].lastname<<endl;
                               setdata<<upobj[i].useremail<<endl;
                               setdata<<upobj[i].password<<endl;
                               setdata<<upobj[i].status<<endl;
                             
                               }
                    }
                    setdata.close();
                               getdata.close();
                           remove("userregistration.txt");
                           rename("temp.txt" , "userregistration.txt");
                     
            }else if(obj.option=='5'){
               
                    ifstream getdata;
                    getdata.open("userregistration.txt");
                    
                    for(int i = 0; i<100;i++)
                     {
                            getdata>>upobj[i].name;
                            getdata>>upobj[i].lastname;
                            getdata>>upobj[i].useremail;
                            getdata>>upobj[i].password;
                            getdata>>upobj[i].status;

                           
                    }
                    string Accountname;
                    cout<<"Enter account holder name you want to approved "<<endl;
                    cin>>Accountname;
                    for(int i=0;i<100;i++){
                     if(Accountname==upobj[i].name ){
                        upobj[i].status = "blocked";
                        cout<<" status : "<<upobj[i].status<<endl;
                          ofstream setdata;
                         setdata.open("temp.txt",ios::app);
                               
                               for(int i=0;i<100;i++){
                                  
                             
                               setdata<<upobj[i].name<<endl;
                               setdata<<upobj[i].lastname<<endl;
                               setdata<<upobj[i].useremail<<endl;
                               setdata<<upobj[i].password<<endl;
                               setdata<<upobj[i].status<<endl;
                              //  cout<<"approved";
                               islogin=true;
                             
                               }
                              
                               
                           setdata.close();
                           

                     }else{
                        islogin=false;
                     }
                     
                    }
                    if(islogin==false){
                     //   cout<<"No Pendding Account Found"<<endl;
                    }else if(islogin==true){
                       cout<<"Account Has been Blocked"<<endl;
                    }
                     
                               getdata.close();
                           remove("userregistration.txt");
                           rename("temp.txt" , "userregistration.txt");
            }else if (obj.option=='6')
            {
                 ifstream getdata;
                    getdata.open("userregistration.txt");
                      ofstream setdata;
                         setdata.open("temp.txt",ios::app);
                    for(int i = 0; i<100;i++)
                     {
                            getdata>>upobj[i].name;
                            getdata>>upobj[i].lastname;
                            getdata>>upobj[i].useremail;
                            getdata>>upobj[i].password;
                            getdata>>upobj[i].status;

                           
                    }
                    string Accountname;
                    cout<<"Enter account holder name you want to approved "<<endl;
                    cin>>Accountname;
                    for(int i=0;i<100;i++){
                     if(Accountname==upobj[i].name && upobj[i].status == "blocked"){
                        upobj[i].status = "approved";
                       
                        
                               
                               for(int i=0;i<100;i++){
                                  
                             
                               setdata<<upobj[i].name<<endl;
                               setdata<<upobj[i].lastname<<endl;
                               setdata<<upobj[i].useremail<<endl;
                               setdata<<upobj[i].password<<endl;
                               setdata<<upobj[i].status<<endl;
                               cout<<"Account Has been  approved"<<endl;
                               islogin=true;
                               break;
                             
                               }
                              
                               
                           
                           
                               
                     }else{
                       
                        islogin=false;
                        
                        
                     }
                     
                    }
                    
                               setdata.close();
                               getdata.close();
                           remove("userregistration.txt");
                           rename("temp.txt" , "userregistration.txt");
                           if(islogin==false){
                       cout<<"No Blocked Account Found"<<endl;
                        ifstream getdata;
                      getdata.open("userregistration.txt");
                      ofstream setdata;
                         setdata.open("temp.txt",ios::app);
                         
                       for(int i = 0; i<100;i++)
                     {
                            getdata>>upobj[i].name;
                            getdata>>upobj[i].lastname;
                            getdata>>upobj[i].useremail;
                            getdata>>upobj[i].password;
                            getdata>>upobj[i].status;
                           //  cout<<"  Name :  "<<upobj[i].name;

                           
                    }
                     for(int i=0;i<100;i++){
                                  
                             
                               setdata<<upobj[i].name<<endl;
                               setdata<<upobj[i].lastname<<endl;
                               setdata<<upobj[i].useremail<<endl;
                               setdata<<upobj[i].password<<endl;
                               setdata<<upobj[i].status<<endl;
                              //  cout<<"Account Has been  approved"<<endl;
                              //  islogin=true;
                              //  break;
                             
                               }
                     //   break;
                    }
                    setdata.close();
                               getdata.close();
                           remove("userregistration.txt");
                           rename("temp.txt" , "userregistration.txt");
            }
           islogin=true;
            break;
         }else
         {
             islogin=false;
         }
         
    }
    if(islogin==false){
       cout<<"!404 You Are Not  In Our Database"<<endl;
    }

        
   
     
}
void admin :: view()
{   
    cout << "\t\t\t********************************************************" << endl;
    cout << "\t\t\t*______________________________________________________*" << endl;
    cout << "\t\t\t*___________________TEAM MEMEBRS_______________________*" << endl;
    cout << "\t\t\t************* |      NAME        |     ROLL NO        |*" << endl;
    cout << "\t\t\t************* |__________________|____________________|*" << endl;
    cout << "\t\t\t************* |HIBA LIAQAT       |{ BSEM-S20-024 }    |*" << endl;
    cout << "\t\t\t************* |__________________|____________________|*" << endl;
    cout << "\t\t\t************* |NABILA MUAZ       |{ BSEM-S20-024 }    |*" << endl;
    cout << "\t\t\t************* |__________________|____________________|*" << endl;
    cout << "\t\t\t************* |AMMAD ANWAR       |{ BSEM-S20-024 }    |*" << endl;  
	 cout << "\t\t\t************* |__________________|____________________|*" << endl;
    cout << "\t\t\t************* |HAFIZ NISAR AKRAM |{ BSEM-S20-005 }    |*" << endl;
    cout << "\t\t\t************* |__________________|____________________|*" << endl;
    system("pause");
	   system("cls");
      cout << "\t\t\t********************************************************" << endl;
    cout << "\t\t\t*________________________________________________________*" << endl;
    cout << "\t\t\t*__________________WELCOME TIGERS TECH___________________*" << endl;
    cout << "\t\t\t************* |                                         |*" << endl;
    cout << "\t\t\t************* |        Identify Yourself                |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* |         PRESS 1 FOR ADMIN               |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* |         PRESS 2 FOR USER                |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* | RESPONSE : ";cin>>obj.res;cout<<"       |*" << endl;  
	 cout << "\t\t\t************* |__________________|______________________|*" << endl;
    cout << "\t\t\t**********************************************************" << endl;
    if(obj.res==1){
       system("cls");
    cout << "\t\t\t*________________________________________________________*" << endl;
    cout << "\t\t\t*__________________WELCOME TIGERS TECH___________________*" << endl;
    cout << "\t\t\t************* |                                         |*" << endl;
    cout << "\t\t\t************* |        WELCOME TO ADMIN PORTAL          |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* |         PRESS 1 FOR LOGIN               |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* |         PRESS 2 FOR REGISTRATION        |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* | RESPONSE : ";cin>>obj.res;cout<<"       |*" << endl;  
	 cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t**********************************************************" << endl;
    
    
       if(obj.res==1){
           system("cls");
           cout << "\t\t\t************************************************************" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*************  _________________________________________ *" << endl;
    cout << "\t\t\t************* |                                         |*" << endl;
    cout << "\t\t\t************* |        WELCOME TO ADMIN PORTAL          |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    login();
       }else if(obj.res==2){
           system("cls");
          registration();
          cout<<endl;
       }
    }else if(obj.res==2)
    {
       system("cls");
         cout << "\t\t\t*************************************************************************" << endl;
         cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
         cout<<"\t\t\t*\tWelCOME  TO USER PORTAL"<<endl;
         cout<<"\t\t\t*\tPress 1 For Login"<<endl;
         cout<<"\t\t\t*\tPress 2 For Registrtion"<<endl;
         
         
         cin>>obj.option;
        switch (obj.option)
        {
        case '1':
           userobj.userlogin();
           break;
        case '2':
           userobj.userregistration();
           break;
        default:
           break;
           cout<<"Invalid Entry : "<<endl;
        }
         
         
         
    }else {
       cout<<"\t\t\t*\tINvalid entity";
    }
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*************************************************************************" << endl;
    
}

int main() {
   admin obj;
//   user obj1;
//   obj1.getBill();
 
   return 0;
}
