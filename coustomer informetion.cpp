/*display 5 Customersinformation using encapsulation by including below mentioned attributes:
 cust_id
 cust_name
 cust_age
 cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
 cust_mobile_number
 cust_city
 cust_simcard_validity (in years)*/
 
 #include<iostream>
 #include<string.h>
 
 using namespace std;
 
 class customer{
 	private:
 		int cust_id;
 		char *cust_name;
 		int cust_age;
 		char *cust_telecome_brand_name; //(like Jio, Airtel, Vi, etc.)
 		int cust_mobile_number;
 		char *cust_city;
   		int cust_simcard_validity; //(in years)
   		
   	public:
   		void setter(int cust_id,char *cust_name,int cust_age,char *cust_telecome_brand_name,int cust_mobile_number,char *cust_city,int cust_simcard_validity)
   		{
   			this->cust_id=cust_id;
 			this->cust_name=cust_name;
 		    this->cust_age=cust_age;
 			this->cust_telecome_brand_name=cust_telecome_brand_name;
 			this->cust_mobile_number=cust_mobile_number;
			this-> cust_city=cust_city;
			this->cust_simcard_validity=cust_simcard_validity;
		   }
		   void getter();
 		
 };
	 void customer::getter()
	 {
	 	cout<<"cust_id: "<<cust_id<<endl;
	 	cout<<"cust_name: "<<cust_name<<endl;
	 	cout<<"cust_age: "<<cust_age<<endl;
	 	cout<<"cust_telecome_brand_name: "<<cust_telecome_brand_name<<endl;
	 	cout<<"cust_mobile_number: "<<cust_mobile_number<<endl;
	 	cout<<"cust_city: "<<cust_city<<endl;
	 	cout<<"cust_simcard_validity: "<<cust_simcard_validity<<endl;
	 	
	 }
	 main()
	{
		customer obj1;
		char cust_name[30]="khushbu";
		char cust_telecome_brand_name[30]="jio";
		char cust_city[30]="surat";
		obj1.setter(1,cust_name,26,cust_telecome_brand_name,1234567890,cust_city,3);
		obj1.getter()
;	 } 
