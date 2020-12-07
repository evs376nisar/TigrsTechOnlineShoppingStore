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
    int id ,i=0;
	int j,k,l;
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
      for(int i=1;i<500;i++){
         getdata>>obj1data[i].productname;
         getdata>>obj1data[i].ProductQuantity;
         getdata>>obj1data[i].price;
         if(obj1data[i].productname.empty()){
		 }else{
		 cout<<"\t\t\t***** |________________|*"<<endl;
		 cout<<"\t\t\t***** | "<<i<<" - "<<obj1data[i].productname<<"         ";
		 cout<<"  $ "<<obj1data[i].price<<" AVAILAIBLE AMOUNT "<<obj1data[i].ProductQuantity<<" | "<<endl;
		 cout<<"\t\t\t***** |________________|*"<<endl;
		 }
	  }
	  int respnose ,cart=0,P_buy,newwallet,extract;
	  bool isbuy=false;
	  cout<<"Enter the Ammount In Your wallet "<<endl;
	  cin>>wallet;
	  back:
      buy:
	  while(wallet >= 0){
	  	
	  if(wallet<=100){
		  cout<<"You Are Out OF MOnNey"<<endl; 
		  cout<<"Press 1 for Add more money in wallet or press 5 to check out"<<endl;
		  cin>>respnose;
		  if(respnose==1){
		  	cout<<"ENTER AMMOUNT "<<endl;
		  	cin>>newwallet;
		   wallet = wallet + newwallet; 
		   goto back;
		  }else if(respnose==5){
			cout<<"BYE BYE ! HAVE NICE DAY "<<endl;
			exit(1);
		  }
		  
	  	}else{
		  }	
	  cout<<"How Many Product Do you want to buy";
	  cin>>P_buy;
	  cout<<"Enter the PRoduct Index to Buy"<<endl;
	  cin>>respnose;
	  cout<<"WAllet "<<wallet<<endl;
	  
	  for(int i=1;i<10;i++){
        
	  ProductQuantity = obj1data[i].ProductQuantity;
	  
	    if(respnose==i){
	    	cart = cart + P_buy; 
	  		cout<<"Product Quantity "<<ProductQuantity<<endl;
	  		if(ProductQuantity==0){
	  			cout<<"PRODUCT IS OUT OF STOCK "<<endl;
			  goto back;
			  }else{
	
			cout<<"You Have Purchased "<<obj1data[i].productname<<endl;
            
	  		obj1data[i].ProductQuantity =obj1data[i].ProductQuantity - P_buy ; 
	  		 
	  		wallet = wallet - (obj1data[i].price * P_buy);
	  		extract   =obj1data[i].price * P_buy;
	  		cout<<"WAllet "<<wallet<<endl;
	  	    cout<<"You have "<<cart<<" IN inventory "<<endl;
	  		cout<<"Do YOu want to but more"<<endl;
	  		cout<<"OR PRESS 5 To Check Out !"<<endl;
	  		cin>>res;
	  		if(res==1){
	  			goto buy;
			  }else if(res ==5){
			  	cout<<"BYE BYE ! HAVE NICE DAY "<<endl;
			  	exit(1);
			  }
			  		  }

	  		
		  }else{
		  	
		  }
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
           cout << "\t\t\t*________________________________________________________*" << endl;
    cout << "\t\t\t*__________________WELCOME TIGERS TECH___________________*" << endl;
    cout << "\t\t\t************* |                                         |*" << endl;
    cout << "\t\t\t************* |        WELCOME TO LOGIN PORTAL          |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* |         ENTER EMAIL FOR LOGIN           |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* | EMAIL : ";cin>>loginobj.useremail;   
	 cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* |         ENTER PASSWORD FOR LOGIN        |*" << endl;
    cout << "\t\t\t************* |_________________________________________|*" << endl;
    cout << "\t\t\t************* | PASSWORD : ";cin>>loginobj.userpassword;  
		     bool isapproved= false;
	        bool islogin=false;
	        bool isblock=false;
		for(int i=0;i<100;i++)
		   {
            
       	     if(loginobj.useremail==objdata[i].useremail && loginobj.userpassword==objdata[i].userpassword ){
                  if(objdata[i].status=="approved" || objdata[i].status=="blocked"){
       	     	     if(objdata[i].status != "blocked")
                     {
                     	cout << "\t\t\t*________________________________________________________*" << endl;
                     cout << "\t\t\t*__________________WELCOME TIGERS TECH___________________*" << endl;
                     cout << "\t\t\t************* |                                         |*" << endl;
                     cout << "\t\t\t************* | WELCOME "<<objdata[i].username<<endl<<" |*" << endl;
                     cout << "\t\t\t************* |_________________________________________|*" << endl;
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
         
         
         
         if(islogin==false){
                  cout << "\t\t\t*_____________________________________*" << endl;
                  cout << "\t\t\t************* |                       |*" << endl;
                  cout << "\t\t\t************* | InValid Entry    :(   |*" << endl;
                  cout << "\t\t\t************* |_______________________|*" << endl;
         // cout<<"InValid Entry "<<endl;
            goto login;
          
         }else if( isblock==false){
            cout << "\t\t\t*_________________________________________________________*" << endl;
            cout << "\t\t\t************* |                                    |*" << endl;
            cout << "\t\t\t************* | You are blocked By the Admin  :(   |*" << endl;
            cout << "\t\t\t************* |____________________________________|*" << endl;
               // cout<<"You are blocked By the Admin  :("<<endl;
         }
         else if(isapproved==false){
            cout << "\t\t\t*________________________________________________________*" << endl;
            cout << "\t\t\t************* |                                         |*" << endl;
            cout << "\t\t\t************* | You are NOt Approved By The Amdin  :(   |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
         }
         getdata.close();
}
void user :: userregistration(){ 

	    reg:
       system("cls");
        cout << "\t\t\t*************  _________________________________________ *" << endl;  
        cout << "\t\t\t************* |    Welcome To registration              |*" << endl;
        cout << "\t\t\t************* |_________________________________________|*" << endl;
       ofstream setdata;
       setdata.open("userregistration.txt",ios::app);
       cout << "\t\t\t*************  _________________________________________ *" << endl;
       cout << "\t\t\t************* |        Enter Your First Name            |*" << endl;
       cout << "\t\t\t************* |_________________________________________|*" << endl;
       cout << "\t\t\t************* | FIRST NAME : ";cin>>loginobj.username; 
       cout << "\t\t\t*************  _________________________________________ *" << endl;
       cout << "\t\t\t************* |       Enter Your Last  Name             |*" << endl;
       cout << "\t\t\t************* |_________________________________________|*" << endl;
       cout << "\t\t\t************* | LAST NAME : ";cin>>loginobj.userlastname;
       cout << "\t\t\t*************  _________________________________________ *" << endl;
       cout << "\t\t\t************* |       Enter Your Email  Name            |*" << endl;
       cout << "\t\t\t************* |_________________________________________|*" << endl;
       cout << "\t\t\t************* | EMAIL     : ";cin>>loginobj.useremail;
       cout << "\t\t\t*************  _________________________________________ *" << endl;
       cout << "\t\t\t************* |     Enter Your Password Name            |*" << endl;
       cout << "\t\t\t************* |_________________________________________|*" << endl;
       cout << "\t\t\t************* | PASSWORD  : ";cin>>loginobj.userpassword;
       cout << "\t\t\t*************  _________________________________________ *" << endl;
       cout << "\t\t\t************* |    Enter RetypePassword                 |*" << endl;
       cout << "\t\t\t************* |_________________________________________|*" << endl;
       cout << "\t\t\t************* | RETYPE PASSWoRD : ";cin>>loginobj.retypepassowrd;
       
       if(loginobj.retypepassowrd==loginobj.userpassword){
             setdata<<loginobj.username<<endl;
             setdata<<loginobj.userlastname<<endl;
             setdata<<loginobj.useremail<<endl;
             setdata<<loginobj.userpassword<<endl;
             setdata<<"pendding"<<endl;
             cout << "\t\t\t*************  ________________________________________________________________ *" << endl;
             cout << "\t\t\t************* |    Your successfully registerd and wait for the admin approval |*" << endl;
             cout << "\t\t\t************* |________________________________________________________________|*" << endl;
            //  cout<<"Your successfully registerd and wait for the admin approval";
       }else {
          cout << "\t\t\t*************  ________________________________________________________ *" << endl;
          cout << "\t\t\t************* |    Your Retype Password does Not ! Try Again  :(       |*" << endl;
          cout << "\t\t\t************* |________________________________________________________|*" << endl;
          goto reg;
       }
       
}
void user :: Cart(){
	               //   ofstream setdata;
	               //   setdata.open("storedata.txt",ios::app);
                  system("cls");
	         cout << "\t\t\t*************  _________________________________________*" << endl;
            cout << "\t\t\t************* |        What Do You Want To Do ?         |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
            cout << "\t\t\t************* |    Press 1 for Shopping                 |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
            cout << "\t\t\t************* |    Press 2 For Open Your Own Store      |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
            cout << "\t\t\t************* |    Press 3 For Edit You information     |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;  
            cout << "\t\t\t************* |    Press 3 to check you account         |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;  
            cout << "\t\t\t************* |    Press 4 to buy from other store      |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;  
            cout << "\t\t\t************* | RESPONSE : ";cin>>option;  
                     
                     if(option=='1'){
                     	
                           double cart=0;  
                           system("cls");
                        cout << "\t\t\t*************  _________________________________________________*" << endl;     
                        cout << "\t\t\t************* |     Welcome To Pak Tigers Onine Shopping Store |*" << endl;
                        cout << "\t\t\t************* |________________________________________________|*" << endl;    
                        cout << "\t\t\t************* |     Please Enter Ammount You Want To spent     |*" << endl;
                        cout << "\t\t\t************* |________________________________________________|*" << endl;
                        cout << "\t\t\t************* | AMOUNT : "; cin>>wallet;
                        
                        ofstream setdata;
	                 setdata.open("storedata.txt",ios::app);
                    
                        cout << "\t\t\t*************  ________________________________________________*" << endl;     
                        cout << "\t\t\t************* |     Enter The Name  Of Buyer                   |*" << endl;
                        cout << "\t\t\t************* |________________________________________________|*" << endl;
                        cout << "\t\t\t************* | NAME  : ";  cin>>objdata[i].username;
                     cin>>objdata[i].username;
                     setdata<<objdata[i].username<<endl;
						system("cls");
                        while(wallet >=0){
                           if(wallet<=10){
                              system("cls");
                                 cout << "\t\t\t*************  _____________________________________________________*" << endl;     
                                 cout << "\t\t\t************* |   you cant but anything You Dont Have Much Money :( |*" << endl;
                                 cout << "\t\t\t************* |_____________________________________________________|*" << endl;
                              
                              break;
                           }else{
                           	if(counter==1){
//                                 system("cls");
                                 cout << "\t\t\t*************  ____________________________________________________________*" << endl;     
                                 cout << "\t\t\t************* |   Your Remainging balance | $ "<<wallet<<"| In You wallet |*" << endl;
                                 cout << "\t\t\t************* |______________________________________________________|*" << endl;
                                 cout << "\t\t\t*************  ______________________________________________________*" << endl;     
                                 cout << "\t\t\t************* |   You Have | "<<cart<<" |Product In Your Car         |*" << endl;
                                 cout << "\t\t\t************* |______________________________________________________|*" << endl;
                                 cout << "\t\t\t*************  _______________________________________________________*" << endl;     
                                 cout << "\t\t\t************* |   Press 1 to check your bill                         |*" << endl;
                                 cout << "\t\t\t************* |______________________________________________________|*" << endl;
						   
                             
                           break;
							   }else{

							      product:
//                           system("cls");
                           cout << "\t\t\t*************  ______________________________________________________*" << endl;     
                           cout << "\t\t\t************* |   Your Remainging balance "<<wallet<<" In You wallet |*" << endl;
                           cout << "\t\t\t************* |______________________________________________________|*" << endl;
                           cout << "\t\t\t*************  ______________________________________________________*" << endl;     
                           cout << "\t\t\t************* |   You Have "<<cart<<"Product In Your Cart            |*" << endl;
                           cout << "\t\t\t************* |______________________________________________________|*" << endl;
                           cout << "\t\t\t*************  ______________________________________________________*" << endl;     
                           cout << "\t\t\t************* |   What Do you want to buy                            |*" << endl;
                           cout << "\t\t\t************* |______________________________________________________|*" << endl;
                           cout << "\t\t\t*************  ______________________________________________________*" << endl;     
                           cout << "\t\t\t************* |   Press 1 for Apple Proucts                          |*" << endl;
                           cout << "\t\t\t************* |______________________________________________________|*" << endl;
                           cout << "\t\t\t************* |   Press 2 for to Buy samsung Products                |*" << endl;
                           cout << "\t\t\t************* |______________________________________________________|*" << endl;
                           cout << "\t\t\t*************  ______________________________________________________*" << endl;     
                           cout << "\t\t\t************* |   Press 3 to check your bought products              |*" << endl;
                           cout << "\t\t\t************* |______________________________________________________|*" << endl;
                           cout << "\t\t\t************* |   Press 4 To add more money in your wallet           |*" << endl;
                           cout << "\t\t\t************* |______________________________________________________|*" << endl;
                           cout << "\t\t\t************* |   Press 5 for check Out!                             |*" << endl;
                           cout << "\t\t\t************* |______________________________________________________|*" << endl;
                           cout << "\t\t\t************* | RESPONSE  : "; cin>>option;
                           
                           if(option=='1'){
//                              system("cls");
                           cout << "\t\t\t**********  ______________________________________________________*" << endl;     
                           cout << "\t\t\t************* |   Press 1 for iphone 8s 100$   Available Quantity "<<iphoneQuantity8s    << "     |*" << endl;
                           cout << "\t\t\t************* |______________________________________________________|*" << endl;
                           cout << "\t\t\t************* |   Press 2 for iphone XMAX 100$   Available Quantity "<<iphoneQuantityxmax<< "     |*" << endl;
                           cout << "\t\t\t************* |______________________________________________________|*" << endl;
                           cout << "\t\t\t************* |   Press 2 for iphone 12 1400$      Available Quantity "<<iphoneQuantity12<< "     |*" << endl;
                           cout << "\t\t\t************* |______________________________________________________|*" << endl;
                           cout << "\t\t\t************* | RESPONSE  : "; cin>>option;
                                
                                 switch (option)
                                 {
                                 case '1':
                                    {
                                       if(wallet<=100){
                                       cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Sorry YOU cant not but this item You dont enough money |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Press 1 for add more money or press 2 for check out    |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>option;
                                       // cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
                                    cout << "\t\t\t*************  ___________________ *" << endl;
                                    cout << "\t\t\t************* | Bye Bye   :)      |*" << endl;
                                    cout << "\t\t\t************* |___________________|*" << endl;
												exit(1);
											}
										  
										}
										
                                       }
                                         else 
                                       {
                                          if(iphoneQuantity8s==0){
                                       cout << "\t\t\t*************  ___________________________________ *" << endl;
                                       cout << "\t\t\t************* | This  Product is out Of stock     |*" << endl;
                                       cout << "\t\t\t************* |___________________________________|*" << endl;
                                       cout<<"\t\t\t\t\t"<<endl;
                                            goto product;
                                          }
                                          else{

                                             iphone8s++;
                                       cart = iphone8s;
                                       cout << "\t\t\t*************  ______________________________________________*" << endl;
                                       cout << "\t\t\t************* |   Enter Number of product you want           |*" << endl;
                                       cout << "\t\t\t************* |______________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>nthamount;
                                       finalres = 100 * nthamount; 
                                       wallet = wallet - finalres;
                                       iphoneQuantity8s = iphoneQuantity8s-nthamount;
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
                                       cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Sorry YOU cant not but this item You dont enough money |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Press 1 for add more money or press 2 for check out    |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
										    	cout << "\t\t\t*************  ___________________ *" << endl;
                                    cout << "\t\t\t************* | Bye Bye   :)      |*" << endl;
                                    cout << "\t\t\t************* |___________________|*" << endl;
												exit(1);
											}
										  
										}
										
                                       }else {
                                          if(iphoneQuantityxmax==0){
                                       cout << "\t\t\t*************  ___________________________________ *" << endl;
                                       cout << "\t\t\t************* | This  Product is out Of stock     |*" << endl;
                                       cout << "\t\t\t************* |___________________________________|*" << endl;
                                       cout<<"\t\t\t\t\t"<<endl;
                                            goto product;
                                          }
                                          else{
                                       iphoneXmax++;
                                       cart = iphoneXmax;
                                       
                                       cout << "\t\t\t*************  ______________________________________________*" << endl;
                                       cout << "\t\t\t************* |   Enter Number of product you want           |*" << endl;
                                       cout << "\t\t\t************* |______________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>nthamount;
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
                                         cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Sorry YOU cant not but this item You dont enough money |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Press 1 for add more money or press 2 for check out    |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
										    	cout << "\t\t\t*************  ___________________ *" << endl;
                                    cout << "\t\t\t************* | Bye Bye   :)      |*" << endl;
                                    cout << "\t\t\t************* |___________________|*" << endl;
												exit(1);
											}
										  
										}
										
                                       }else {
                                          if(iphoneQuantity12==0){
                                             cout << "\t\t\t*************  ___________________________________ *" << endl;
                                             cout << "\t\t\t************* | This  Product is out Of stock     |*" << endl;
                                             cout << "\t\t\t************* |___________________________________|*" << endl;
                                             cout<<"\t\t\t\t\t"<<endl;
                                            goto product;
                                          }
                                          else{
                                       iphone12++;
                                       cart = iphone12;
                                       cout << "\t\t\t*************  ______________________________________________*" << endl;
                                       cout << "\t\t\t************* |   Enter Number of product you want           |*" << endl;
                                       cout << "\t\t\t************* |______________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>nthamount;
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
                               
                           }else if(option=='2'){
                              cout << "\t\t\t**********  ______________________________________________________*" << endl;     
                              cout << "\t\t\t************* |   Press 1 for samsung S8 400$   Available Quantity "<<samsungQuantitys8  << "     |*" << endl;
                              cout << "\t\t\t************* |______________________________________________________|*" << endl;
                              cout << "\t\t\t************* |   Press 2 for samsung S9 900$  Available Quantity "<<samsungQuantitys9<< "        |*" << endl;
                              cout << "\t\t\t************* |______________________________________________________|*" << endl;
                              cout << "\t\t\t************* |   Press 3 for Samsung S10 1000$  Available Quantity "<<samsungQuantitys10<< "     |*" << endl;
                              cout << "\t\t\t************* |______________________________________________________|*" << endl;
                              cout << "\t\t\t************* | RESPONSE  : "; cin>>option;
                             
                                
                                 switch (option)
                                 {
                                 case '1':
                                    {
                                        if(wallet<=400){
                                        cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Sorry YOU cant not but this item You dont enough money |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Press 1 for add more money or press 2 for check out    |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
										    	cout << "\t\t\t*************  ___________________ *" << endl;
                                    cout << "\t\t\t************* | Bye Bye   :)      |*" << endl;
                                    cout << "\t\t\t************* |___________________|*" << endl;
												exit(1);
											}
										  
										}
										
                                       }else {
                                          if(samsungQuantitys8==0){
                                             cout << "\t\t\t*************  ___________________________________ *" << endl;
                                             cout << "\t\t\t************* | This  Product is out Of stock     |*" << endl;
                                             cout << "\t\t\t************* |___________________________________|*" << endl;
                                             cout<<"\t\t\t\t\t"<<endl;
                                            goto product;
                                          }
                                          else{
                                       s8++;
                                       cart = s8;
                                       cout << "\t\t\t*************  ______________________________________________*" << endl;
                                       cout << "\t\t\t************* |   Enter Number of product you want           |*" << endl;
                                       cout << "\t\t\t************* |______________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>nthamount;
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
                                         cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Sorry YOU cant not but this item You dont enough money |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Press 1 for add more money or press 2 for check out    |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
										    	cout << "\t\t\t*************  ___________________ *" << endl;
                                    cout << "\t\t\t************* | Bye Bye   :)      |*" << endl;
                                    cout << "\t\t\t************* |___________________|*" << endl;
												exit(1);
											}
										  
										}
										
                                       }else {
                                          if(samsungQuantitys9==0){
                                             cout << "\t\t\t*************  ___________________________________ *" << endl;
                                             cout << "\t\t\t************* | This  Product is out Of stock     |*" << endl;
                                             cout << "\t\t\t************* |___________________________________|*" << endl;
                                             cout<<"\t\t\t\t\t"<<endl;
                                            goto product;
                                          }
                                          else{
                                       s9++;
                                       cart = s9;
                                        cout << "\t\t\t*************  ______________________________________________*" << endl;
                                       cout << "\t\t\t************* |   Enter Number of product you want           |*" << endl;
                                       cout << "\t\t\t************* |______________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>nthamount;
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
                                       cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Sorry YOU cant not but this item You dont enough money |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t*************  ________________________________________________________ *" << endl;
                                       cout << "\t\t\t************* | Press 1 for add more money or press 2 for check out    |*" << endl;
                                       cout << "\t\t\t************* |________________________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>option;
                                         switch(option)
										 {
										   case '1':
										  {
										    goto add;
										    break;
											} 
										    case '2':{
										    	cout << "\t\t\t*************  ___________________ *" << endl;
                                    cout << "\t\t\t************* | Bye Bye   :)      |*" << endl;
                                    cout << "\t\t\t************* |___________________|*" << endl;
												exit(1);
											}
										  
										}
										
                                       }else {
                                          if(samsungQuantitys10==0){
                                             cout << "\t\t\t*************  ___________________________________ *" << endl;
                                             cout << "\t\t\t************* | This  Product is out Of stock     |*" << endl;
                                             cout << "\t\t\t************* |___________________________________|*" << endl;
                                             cout<<"\t\t\t\t\t"<<endl;
                                            goto product;
                                          }
                                          else{
                                       s10++;
                                       cart = s10;
                                       cout << "\t\t\t*************  ______________________________________________*" << endl;
                                       cout << "\t\t\t************* |   Enter Number of product you want           |*" << endl;
                                       cout << "\t\t\t************* |______________________________________________|*" << endl;
                                       cout << "\t\t\t************* | RESPONSE  : "; cin>>nthamount;

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
                           	  cout<<"YOU HAVE BOUGHT "<<item<<endl;
                           	  cout<<" QUANTITY "<<nthamount<<endl;
                           	  cout<<" PRICE "<<price;
                           	  
                           }else if(option=='4')
                           {
                           	
                            add:
                           	double newwallet=0;
                              cout << "\t\t\t*************  _________________________________________________________*" << endl;
                              cout << "\t\t\t************* |Enter New Amount You want to add in your wallet          |*" << endl;
                              cout << "\t\t\t************* |_________________________________________________________|*" << endl;
                              cout << "\t\t\t************* | AMOUNT  : "; cin>>newwallet;
                           	wallet = newwallet + wallet ;
                          
                           }else if(option=='5')
						   {
						   	  
						   	  counter++;
						   	  
						   }
                        }

                     }
                     }
                     }
                     else if(option=='2'){
                        
                        cout << "\t\t\t*************  __________________________________________________ *" << endl;
                        cout << "\t\t\t************* |Welcome To Pak Tigers Online Plate Form           |*" << endl;
                        cout << "\t\t\t************* |__________________________________________________|*" << endl;
                        int nthproduct,price;
                         ofstream setdata;
                         setdata.open("newstore,.txt",ios::app);
                        cout << "\t\t\t*************  _________________________________________ *" << endl;
                        cout << "\t\t\t************* |Please Enter Your Store Name             |*" << endl;
                        cout << "\t\t\t************* |_________________________________________|*" << endl;
                        cout << "\t\t\t************* | NAME :" ;cin>>store_name;
                        
                        
                        cout<<"Enter The ammount of product You want to added"<<endl;
                        cin>>nthproduct;
                        cout << "\t\t\t*************  _______________________________________________ *" << endl;
                        cout << "\t\t\t************* |Enter The ammount of product You want to added |*" << endl;
                        cout << "\t\t\t************* |_______________________________________________|*" << endl;
                        cout << "\t\t\t************* | PRICE :" ;cin>>nthproduct;
                        setdata<<store_name<<endl;
                        for(int i=0;i<nthproduct;i++){
                           
                        cout << "\t\t\t*************  ____________________________________ *" << endl;
                        cout << "\t\t\t************* |Enter Your # "<<i<<" Product name   |*" << endl;
                        cout << "\t\t\t************* |____________________________________|*" << endl;
                        cout << "\t\t\t************* | NAME :" ;cin>>productname;
                        cout << "\t\t\t*************  _______________________________________ *" << endl;
                        cout << "\t\t\t************* |Enter Your # " <<i<< " Product price   |*" << endl;
                        cout << "\t\t\t************* |_______________________________________|*" << endl;
                        cout << "\t\t\t************* | PRICE :" ;cin>>price;   
                        cout << "\t\t\t*************  _______________________________________ *" << endl;
                        cout << "\t\t\t************* |Enter the Product Quantity             |*" << endl;
                        cout << "\t\t\t************* |_______________________________________|*" << endl;
                        cout << "\t\t\t************* | QUANTITY :" ;cin>>ProductQuantity;   
                           
                           setdata<<productname<<endl;
                           setdata<<ProductQuantity<<endl;
                           setdata<<price<<endl;

                              
                        }
                        setdata.close();
                        

                     }else if(option=='3'){
                     	getBill();
					 }
                else if(option=='4'){
                   cout << "\t\t\t*************  _________________________ *" << endl;
                   cout << "\t\t\t************* |  NEW STORE              |*" << endl;
                   cout << "\t\t\t************* |_________________________|*" << endl;
                  //  cout<< " e "<<endl;
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
                    cout << "\t\t\t*************  ____________________________________________________________ *" << endl;
                    cout << "\t\t\t************* |     Enter account holder name you want to approved         |*" << endl;
                    cout << "\t\t\t************* |____________________________________________________________|*" << endl;
                    cout << "\t\t\t************* | PASSWORD : ";cin>>Accountname;;  
                  //   cout<<""<<endl;
                    
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
                               system("cls");
                                 cout << "\t\t\t*************  ____________________________________________________________ *" << endl;
                                 cout << "\t\t\t************* |     Account Has been  approved             :)              |*" << endl;
                                 cout << "\t\t\t************* |____________________________________________________________|*" << endl;
                  
                              //  cout<<""<<endl;
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
                                 cout << "\t\t\t*************  ____________________________________________________________ *" << endl;
                                 cout << "\t\t\t************* |     No Pendding Account Found              :)              |*" << endl;
                                 cout << "\t\t\t************* |____________________________________________________________|*" << endl;
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
                                 cout << "\t\t\t*************  ____________________________________________________________ *" << endl;
                                 cout << "\t\t\t************* |     Enter account holder name you want to BLOCKED  !       |*" << endl;
                                 cout << "\t\t\t************* |____________________________________________________________|*" << endl;
                                 cout << "\t\t\t************* |";  cin>>Accountname;
                  //   cout<<"Enter account holder name you want to approved "<<endl;
                  //   cin>>Accountname;
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
                               islogin=true;
                             
                               }
                              
                               
                           setdata.close();
                           

                     }else{
                        islogin=false;
                     }
                     
                    }
                    if(islogin==false){
                    }else if(islogin==true){
                       
                                 cout << "\t\t\t*************  ____________________________________________________________ *" << endl;
                                 cout << "\t\t\t************* |     Account Has been BLOCKED                       !       |*" << endl;
                                 cout << "\t\t\t************* |____________________________________________________________|*" << endl;
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
                    
                                 cout << "\t\t\t*************  ____________________________________________________________ *" << endl;
                                 cout << "\t\t\t************* |     Enter account holder name you want to UNBLOCKED :      |*" << endl;
                                 cout << "\t\t\t************* |____________________________________________________________|*" << endl;
                                 cout << "\t\t\t************* | RESPONSE : ";cin>>Accountname;
                  //   cout<<"Enter account holder name you want to UNBLOCKED "<<endl;
                    
                    for(int i=0;i<100;i++){
                     if(Accountname==upobj[i].name && upobj[i].status == "blocked"){
                        upobj[i].status = "approved";
                       
                        
                               
                               for(int i=0;i<100;i++){
                                  
                             
                               setdata<<upobj[i].name<<endl;
                               setdata<<upobj[i].lastname<<endl;
                               setdata<<upobj[i].useremail<<endl;
                               setdata<<upobj[i].password<<endl;
                               setdata<<upobj[i].status<<endl;
                                 cout << "\t\t\t*************  ____________________________________________________________ *" << endl;
                                 cout << "\t\t\t************* |     Account Has UnBlocked                           :      |*" << endl;
                                 cout << "\t\t\t************* |____________________________________________________________|*" << endl;
                              //  cout<<"?"<<endl;
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
                                 cout << "\t\t\t*************  ____________________________________________________________ *" << endl;
                                 cout << "\t\t\t************* |     No Blocked Account Found                        :      |*" << endl;
                                 cout << "\t\t\t************* |____________________________________________________________|*" << endl;
                     //   cout<<"No Blocked Account Found"<<endl;
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
       
                                 cout << "\t\t\t*************  ____________________________________________________________ *" << endl;
                                 cout << "\t\t\t************* |      404  ! You Are Not  In Our Database   !Try Again :   |*" << endl;
                                 cout << "\t\t\t************* |____________________________________________________________|*" << endl;
      //  cout<<""<<endl;
    }

        
   
     
}
void admin :: view()
{   
    cout << "\t\t\t********************************************************" << endl;
    cout << "\t\t\t*______________________________________________________*" << endl;
    cout << "\t\t\t*___________________TEAM MEMEBRS_______________________*" << endl;
    cout << "\t\t\t************* |      NAME        |     ROLL NO        |*" << endl;
    cout << "\t\t\t************* |__________________|____________________|*" << endl;
    cout << "\t\t\t************* |HIBA LIAQAT       |{ BSEM-F17-174 }    |*" << endl;
    cout << "\t\t\t************* |__________________|____________________|*" << endl;
    cout << "\t\t\t************* |NABILA MUAZ       |{ BSEM-S20-001 }    |*" << endl;
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
       cout << "\t\t\t************* |         WELCOME WelCOME  TO USER PORTAL             |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
            cout << "\t\t\t************* |        What Do You Want To Do ?         |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
            cout << "\t\t\t************* |    Press 1 For Login                    |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
            cout << "\t\t\t************* |    Press 2 For Registrtion              |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
            cout << "\t\t\t************* | RESPONSE : ";cin>>obj.option; 
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
            cout << "\t\t\t*************  _________________________________________*" << endl;
            cout << "\t\t\t************* |    Invalid Entry :                      |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;
        }
    }else {
       
            cout << "\t\t\t*************  _________________________________________*" << endl;
            cout << "\t\t\t************* |    Invalid Entry :                      |*" << endl;
            cout << "\t\t\t************* |_________________________________________|*" << endl;  
    }
}

int main() {
   admin obj;

   return 0;
}


