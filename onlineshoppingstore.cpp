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
    double redminote8=0;
    double redminote9=0;
    double redminote10=0;
    int counter=0;
    int price;
    string item;
    string date;
    int year,month,day;
    int nthamount;
    int finalres;
    
};
class user : public data{
   logindata loginobj,objdata[1000];
   data obj1data[1000],obj1;

   
   
    public: 
         void Cart();
       void userlogin();
      
       void userregistration();
       void getBill();
     

};
void user :: getBill(){
	cout<<"Here is you bill "<<endl;
	ifstream getdata;
	getdata.open("storedata.txt");
   // while (!getdata.eof()){
   // //    getdata>>obj1data[i].name;
	// //   getdata>>obj1data[i].date;
	//   getdata>>obj1data[i].item;
	//   getdata>>obj1data[i].price;
   //       // cout<<" ith #" << i<<endl;
         
	// 		// cout<<"\n NAme            : "<< obj1data[i].name<<endl;
	// 		// cout<<"\nDate             : "<< obj1data[i].date<<endl;
	// 		cout<<"\nYou have Bought  : "<< obj1data[i].item<<endl;
	// 		cout<<"\nAND PRice IS     : " << obj1data[i].price<<endl;
   // }
	for(int i=0;i<50;i++)
	{
	//    getdata>>obj1data[i].name;
	  getdata>>obj1data[i].year;
     getdata>>obj1data[i].month;
     getdata>>obj1data[i].day;
	  getdata>>obj1data[i].item;
	  getdata>>obj1data[i].price;
         // cout<<" ith #" << i<<endl;
         
			// cout<<"\n NAme            : "<< obj1data[i].name<<endl;
			cout<<"\nYear             : "<< obj1data[i].year<<endl;
         cout<<"\nmonth             : "<< obj1data[i].month<<endl;
			cout<<"\nDay             : "<< obj1data[i].day<<endl;
			cout<<"\nYou have Bought  : "<< obj1data[i].item<<endl;
			cout<<"\nAND PRice IS     : " << obj1data[i].price<<endl;  	
		
	} 
	//   cout<<"NAME :"<<obj1data[i].name<<endl;
	//   cout<<"DATE : "<<obj1data[i].date<<endl;
		cout<<"Enter date 0000-00-00 "<<endl;
		cin>>obj1.date; 
		cout<<"\nname you want to check you bill "<<endl;
		cin>>obj1.name;
		bool product=false;
	// for(int i=0;i<50;i++){
		
	  
	// 	if(obj1data[i].name== obj1.name &&  obj1data[i].date == obj1.date ){
		
	//   	cout<<"\nHere is your Bill MR "<< obj1data[i].name<<endl;
	   
	//   	for(int i=0;i<20;i++){
	//   	if(obj1data[i].item.empty()){
	  		
	// 	  }else{
		 
	// 		cout<<"\nYou have Bought  : "<< obj1data[i].item<<endl;
	// 		cout<<"\nAND PRice IS     : " << obj1data[i].price<<endl;
	// 	}
	// 	}
	// 		product=true;
	// 	}else{
	// 		product=false;
	// 	}
	// }
	if(product==true){
		
		cout<<"No PRoduct Found"<<endl;
//	    break;
	}else if(product==false){
		cout<<"Not Found";
	}
   getdata.close(); 
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
                     cin>>option;
                     if(option=='1'){
                     	
                     	double cart=0;
                        cout<<"Welcome To Pak Tigers Onine Shopping Store "<<endl;
                        cout<<"Please Enter Ammount You Want To spent "<<endl;
                        cin>>wallet;
                        ofstream setdata;
	                 setdata.open("storedata.txt",ios::app);
	                 cout<<"Enter Date In This Formate 0000-00-00 "<<endl;
                     cin>>date;
                     setdata<<objdata[i].username<<endl;
                     setdata<<date<<endl;
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
                                cout<<"Press 1 for iphone 8s 100$"<<endl;
                                cout<<"Press 2 for iphone xMax 1000$"<<endl;
                                cout<<"Press 3 for iphone 12 1400$"<<endl;
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
                                          
                                          cout<<"Enter No of product you want"<<endl;
                                          cin>>nthamount;
                                       iphone8s++;
                                       cart = iphone8s;
                                       finalres = 100 * nthamount; 
                                       cout<<" amount "<<finalres;
                                       wallet = wallet - finalres;
                                       cout<<" wallet "<<wallet<<endl;
                                       // system("pause");
                                       item="iphone8s";
                                       price=finalres;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
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
                                       iphoneXmax++;
                                       cart = iphoneXmax;
                                       wallet = wallet - 1000;
                                       item="iphoneXmax";
                                       price=1000;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
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
                                       iphone12++;
                                       cart = iphone12;
                                       wallet = wallet - 1400;
                                       item="iphone12";
                                       price=1200;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
                                       }
                                 }
                                 
                                 default:
                                    break;
                                 }
                               }else {
                               	cout<<"You have entered InVaLid KEy"<<endl;
							   }
                           }else if(option=='2'){
                                cout<<"Press 1 for samsung S8 400$"<<endl;
                                cout<<"Press 2 for samsung S9 900$"<<endl;
                                cout<<"Press 3 for Samsung S10 1000$"<<endl;
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
                                       s8++;
                                       cart = s8;
                                       wallet = wallet - 400;
                                       item="SamsungS8";
                                       price=400;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
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
                                       s9++;
                                       cart = s9;
                                       wallet = wallet - 900;
                                       item="samsungS9";
                                       price=900;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
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
                                       s10++;
                                       cart = s10;
                                       wallet = wallet - 1000;
                                       item="SamsungS10";
                                       price=1000;
                                       setdata<<item<<endl;
                                       setdata<<price<<endl;
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
                        string store_name;
                        cout<<"Please Enter Your Store Name "<<endl;
                        cin>>store_name;
                        
      
                     }else if(option=='3'){
                     	getBill();
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
          

};

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
   cout << "\t\t\t*************************************************************************" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout<<"\t\t\t*\tWelcome To Login Portal :"<<endl;
    fstream getdata;
       	getdata.open("admin.txt");
       	for(int i=0;i<100;i++){
             getdata>>objdata[i].username;
             getdata>>objdata[i].userlastname;
             getdata>>objdata[i].useremail;
             getdata>>objdata[i].userpassword;
          }
          string email,password;
          cout<<"Enter Email for Login : "<<endl;
          cin>>email;
          cout<<"Enter Password for Login : "<<endl;
          cin>>password;
     bool islogin = false;
    for(int i = 0 ;i<100;i++)
    {
         if(email==objdata[i].useremail && password == objdata[i].userpassword){
            system("cls");
            cout<<"\t\t\t*\tWelCome Mr/Ms Admin : " << objdata[i].username<<" "<<objdata[i].userlastname<<endl;
            cout<<"\t\t\t*\tWhat Do You Want To Do"<<endl;
            cout<<"\t\t\t*\tPress 1 For View sale detail "<<endl;
            cout<<"\t\t\t*\tPress 2 Registered user detail "<<endl;
            cout<<"\t\t\t*\tPress 3 For Edit You information"<<endl;
            cout<<"\t\t\t*\tPress 4 For Appoved ID"<<endl;
            cout<<"\t\t\t*\tPress 5 To Blocke ID"<<endl;
            cout<<"\t\t\t*\tPress 6 To UnBlocke ID"<<endl;
     
            islogin =true;
            cin>>obj.option;
            if(obj.option=='1'){
               cout<<"Sale Detail Portal : ";
            }else if(obj.option=='2'){
               cout<<"Registered User Infor Portal : "<<endl;
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
                  cout<<"Entry # "<<i++<<endl;
                  cout<<"NAME  : "<<objdata->username<<endl;
                  cout<<"LAST NAME  : "<<objdata->userlastname<<endl;
                  cout<<"EMAIL  : "<<objdata->useremail<<endl;
                  cout<<"PASSWORD  : "<<objdata->userpassword<<endl;
                  cout<<"ACOOUNT STATUS  : "<<objdata->status<<endl;
                  
                  
                  }
                  getdata.close();

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
       system("cls");
    cout << "\t\t\t*************************************************************************" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*\t\t\t Welcome Tiger's Tech \t\t\t\t*" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
    cout << "\t\t\t*\t\t\t Identify Yourself  \t\t\t\t*" << endl;
    cout << "\t\t\t*\tPres 1 for Admin        \t\t\t\t*" << endl;
    cout << "\t\t\t*\tPres 2 for User         \t\t\t\t*" << endl;
    cout << "\t\t\t*\t";cin>>obj.res;
    if(obj.res==1){
       system("cls");
       cout << "\t\t\t*************************************************************************" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
       cout<<"\t\t\t*\tWELCOME TO ADMIN PORTAL"<<endl;
       cout<<"\t\t\t*\tPress 1 for login "<<endl;
       cout<<"\t\t\t*\tPress 2 for Registration "<<endl;
       cout << "\t\t\t*\t";cin>>obj.res;
       if(obj.res==1){
           system("cls");
           cout << "\t\t\t*************************************************************************" << endl;
    cout << "\t\t\t*\t\t\t\t\t\t\t\t\t*" << endl;
          cout<<"\t\t\t*\tWELCOME TO LOGIN PORTAL"<<endl;
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
       cout<<"INvalid entity";
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

