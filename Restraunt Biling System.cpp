#include <iostream>

using namespace std;
 
 	
 
 
  int main() 
  {
  	char c;
  	char item;
  	char vegitem;
  	char nonvegitem;
  	int billAmount=0;
  	int selectagain;
  	
  	                         start:
  	cout<<"---------------------------------------Welcome To ZIWGGY--------------------------------------------------------"<<endl;
  	cout<<"----------------------------------Please follow the instructions below------------------------------------------"<<endl;
  	cout<<"Step 1  :  Please press s to start your order"<<endl;
  	cout<<"Step 2  :  You can ordr both veg and non veg item"<<endl;
  	cout<<"Step 3  :  Please press a to select veg items"<<endl;
  	cout<<"Step 4  :  Please press b to select non veg items"<<endl;
  	cout<<"Step 5  :  You will get your final bill after your order"<<endl;
  	

                  
  	cin>>c;
  	if( c == 's' || c == 'S')
	  
	  
	  {
  	               items:
  		cout<<"Please select your choice"<<endl;
  		cout<<"(a) Veg Item                                         (b) Non Veg Item"<<endl;
  		cin>>item;
  		
  		if(item == 'a'  ||  item == 'A')
  		{
  				 selectitem:
  			cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
  			cout<<"1-Paneer tikka : Price : Rs-250"<<endl;
  			cout<<"2-Soya Chaap : Price : Rs-350"<<endl;
  			cout<<"3-Hakka Noodles : Price : Rs-380"<<endl;
  			cout<<"4-Big Momo : Price : Rs-150"<<endl;
  			cout<<"5-Masala Dosa : Price : Rs-170"<<endl;
  			cin>>vegitem;
  			
  			
  			if(vegitem == '1'){
  				billAmount = billAmount+250;
			  }
			  
			  else if(vegitem == '2'){
			  		billAmount = billAmount+350;
			  	
			  }
			  
			   else if(vegitem == '3'){
			  		billAmount = billAmount+380;
			  	
			  }
			  
			  
			   else if(vegitem == '4'){
			  		billAmount = billAmount+150;
			  	
			  }
			  
			  
			 else if(vegitem == '5'){
			  		billAmount = billAmount+170;
			  	
			  }
			  
			  	  
		  else{
		  	cout<<"You have entered wrong value, please try again"<<endl;
		  	goto selectitem;
			  }
		  }
		  
		  else if(item =='b'  || item =='B')
		  {
		  	
		  			 selectitem1:
  			cout<<"Please select 1,2,3,4,5 as per your choice"<<endl;
  			cout<<"1-chiken tikka : Price : Rs-250"<<endl;
  			cout<<"2- chikwn Chaap : Price : Rs-350"<<endl;
  			cout<<"3- chicken biriyani : Price : Rs-380"<<endl;
  			cout<<"4- mutton Momo : Price : Rs-150"<<endl;
  			cout<<"5-keema Dosa : Price : Rs-170"<<endl;
  			cin>>nonvegitem;
  			
  			
  			if(nonvegitem == '1'){
  				billAmount = billAmount+250;
			  }
			  
			  else if(nonvegitem == '2'){
			  		billAmount = billAmount+350;
			  	
			  }
			  
			   else if(nonvegitem == '3'){
			  		billAmount = billAmount+380;
			  	
			  }
			  
			  
			   else if(nonvegitem == '4'){
			  		billAmount = billAmount+150;
			  	
			  }
			  
			  
			 else if(nonvegitem == '5'){
			  		billAmount = billAmount+170;
			  	
			  }
		  	
		  	
		  	else
		  	{
		  		cout<<"You have entered wrong value, please try again"<<endl;
		  		goto selectitem1;
			  }
		  	
		  	
		  	
		  }
		  
		  
		  
		  
		  else{
		  	cout<<"You have entered wrong value, please try again"<<endl;
		  	goto items;
		  }
  		
	  
	  
	   
	   	
	      cout<<"Do you want more items!!!!! yes or no ?"<<endl;
	        cin>>selectagain;
          
	  
	     if(selectagain =='y')
	      goto items;
	  
	         else
	         
	         cout<<"your total amount to be paid is\n"<<billAmount;
	         cout<<"-------------THANK YOU FOR ODERING.... COME AGAIN---------------------------------"<<endl;
	         return 0;
	         
	         
	  
	  
        }
              else 
             cout<<"You have entered wrong value, please try again"<<endl;
             goto items;
      

	   

	  
	  
	  
  }
  

