#include <iostream>
#include <fstream>
using namespace std;
void menu();
void product();
int main()
{
	string name[10],surname[10],address[10],email,code;
	long long int contact[10],bank,retail;
	int i=0,option,Lbags=115,Pbags=115,Gbags=115,Mbags=115,buy,lion[10],pen[10],ngobi[10],manu[10],track[10],Ltotal[10],Ptotal[10],Gtotal[10],Mtotal[10],Ttotal[10],count,trans[10];
	int conti=2;
do
{
count++;
conti++;
cout<<"Do You Want To Register For Our Service\n";
    	cin>>code;
    	if(code=="yes")
    	{
		
		cout<<"Enter Name\n";
		cin>>name[i];
		cout<<"Enter Surname\n";
		cin>>surname[i];
		cout<<"Enter Your Physica Address (town)\n";
		cin>>address[i];
		system("cls");
	
		for(int u=0; u<conti; u++)
		{
		menu();
		cin>>option;
		system("cls");
		if(option==1)
		{
				
		
	switch(option)
	{
			case 1:	
	    	product();
	    	cin>>option;
	
	    	system("cls");
	    	switch(option)
	    	{
	    			case 1:
	    			cout<<"1. LION SEED TYPE\n";                        
                    cout<<"2. PEN 53(Madevabovu) SEED TYPE\n";                 
                    cout<<"3. INGOBIYANE SEED TYPE\n";
                    
                    cin>>option; 
					system("cls");  
                    switch(option)
                    {
                   	case 1:
                	cout<<"LION SEED TYPE\n";
                    cout<<"AVAILABLE QTY: "<<Lbags<<endl;
                    cout<<"UNIT PRICE:( E244)\n";
                    cout<<"TRANSPORT: (E100)\n";
                
					
					cout<<"1. To Buy\n";
					cin>>buy;
					cout<<"How many bags\n";
					cin>>lion[i]; 
					system("cls");
					if(buy==1)
					{
						Lbags=Lbags-lion[i];
						Ltotal[i]=lion[i]*244;
						cout<<"You are about to buy "<<lion[i]<<" bags of Lion Seed, which cost "<<Ltotal[i]<<endl;
						cout<<"1. to continue\n";
						cout<<"0. exit\n";
						cin>>option;
						system("cls");
						if(option==0)
						{
							break;
						}
						cout<<"1. Deliver my Product\n";
						cout<<"2. Don't Deliver i will fetch them myself\n";
						cin>>trans[i];
						system("cls");
						if(trans[i]==1)
						{
							Ltotal[i]=Ltotal[i]+100;
						}
						else
						{
							cout<<"Remember we open from 8am to 5pm\n";
						}
					switch(option)
					{
							case 1:
								cout<<"Choose your platform of payment\n";
								cout<<"1. Bank(FNB)\n";
								cout<<"2. Momo pay\n";
								cout<<"3. pay pal\n";
								cin>>option;
								system("cls");
								switch(option)
								{
									case 1:
									cout<<"Enter an account number\n";
									cin>>bank;
									if(bank=233457375744)
									{
										cout<<"Press 1 to confim your payment of "<<Ltotal[i]<<" to Rural Development Areas account(FNB)\n";
										cin>>option;
										system("cls");
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<lion[i]<<" bags of Lion seed from RDA which costed E"<<Ltotal[i]<<",E244 each 10kg \n";                                    
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that total amount\n";
											}
											cout<<"0. exit\n";
											cin>>buy;										
											break;
									}//close third if statement	
									}//close second if statement
									system("cls");
									break;
									case 2:
										cout<<"Enter Retail code\n";
										cin>>retail;
										if(retail==97722)
									{
										cout<<"Press 1 to confim your payment of "<<Ltotal[i]<<" to Rural Development Areas account(Momo)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<lion[i]<<" bags of Lion seed from RDA which costed E"<<Ltotal[i]<<",E244 each 10kg \n";
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that totl amount\n\n";
											}
											cout<<"0. exit";
											cin>>buy;
											if(buy==0)
											{
												break;
											}
											system("cls");
										}//close small if
	     								}//close main if here
										 else{
										 	cout<<"Check the code and try again\n";
										 	break;
										 }	
									system("cls");
										break;
								case 3:
									cout<<"Enter e_mail\n";
										if(email=="rda@gov.sz")
									{
										cout<<"Press 1 to confim your payment of "<<Ltotal[i]<<" to Rural Development Areas account(pay pal)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<lion[i]<<" bags of Lion seed from RDA which costed E"<<Ltotal[i]<<",E244 each 10kg \n";
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that totl amount\n";
											}
											cout<<"0. exit";
											cin>>buy;
											if(buy==0)
											{
												break;
											}
											system("cls");
										}
										}
										else{
											cout<<"Check the email carefully and try again\n";
											break;
										}
					        	break;
								}//close fifth switch	
					            }//close ford switch		
				               	}//close first if statement
					system("cls");
					 break;
                    
                    case 2:
                    cout<<"PEN 53(Madevabovu) SEED TYPE\n";
                    cout<<"AVAILABLE QTY: "<<Pbags<<endl;
                    cout<<"UNIT PRICE:( E297)\n";
                    cout<<"TRANSPORT (E100)\n\n";
                   	cout<<"1. To Buy\n";
					cin>>buy;
					cout<<"How many bags\n";
					cin>>pen[i]; 
					system("cls");
					if(buy==1)
					{
						Pbags=Pbags-pen[i];
						Ptotal[i]=pen[i]*297;
						cout<<"You are about to buy "<<pen[i]<<" bags of PEN 53(Madevabovu) Seed, which cost E"<<Ptotal[i]<<endl;
						cout<<"1. to continue\n";
						cout<<"0. to exit\n";
						
						cin>>option;
						if(option==0)
						{
							break;
						}
						system("cls");
							cout<<"1. Deliver my Product\n";
						cout<<"2. Don't Deliver i will fetch them myself\n";
						cin>>trans[i];
						if(trans[i]==1)
						{
							Ptotal[i]=Ptotal[i]+100;
						}
						else
						{
							cout<<"Remember we open from 8am to 5pm\n";
						}
						system("cls");
					switch(option)
					{
							case 1:
								cout<<"Choose your platform of payment\n";
								cout<<"1. Bank(FNB)\n";
								cout<<"2. Momo pay\n";
								cout<<"3. pay pal\n";
								cin>>option;
								system("cls");
								switch(option)
								{
									case 1:
									cout<<"Enter an account number\n";
									cin>>bank;
									system("cls");
									if(bank=233457375744)
									{
										cout<<"Press 1 to confim your payment of "<<Ptotal[i]<<" to Rural Development Areas account(FNB)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<pen[i]<<" bags of Lion seed from RDA which costed E"<<Ptotal[i]<<",E295 each 10kg \n";
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that totl amount\n\n";
											}	cout<<"0. to exit\n";
											cin>>option;
											break;
											system("cls");
											
									}//close third if statement		
									}//close second if statement
									break;
									case 2:
										cout<<"Enter Retail code\n";
										cin>>retail;
										if(retail==97722)
									{
										cout<<"Press 1 to confim your payment of "<<Ptotal[i]<<" to Rural Development Areas account(Momo)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<pen[i]<<" bags of Lion seed from RDA which costed E"<<Ptotal[i]<<",E244 each 10kg \n";
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that totl amount\n\n";
											}
											cout<<"0. exit";
											cin>>buy;
											if(buy==0)
											{
												break;
											}
											system("cls");
										}//close small if
	     								}//close main if here	
									
										break;
								case 3:
									cout<<"Enter e_mail\n";
									cin>>email;
										if(email=="rda@gov.sz")
									{
										cout<<"Press 1 to confim your payment of "<<Ptotal[i]<<" to Rural Development Areas account(pay pal)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<pen[i]<<" bags of Lion seed from RDA which costed E"<<Ptotal[i]<<",E295 each 10kg \n";
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that totl amount\n\n";
											}
												cout<<"0. exit";
											cin>>buy;
											if(buy==0)
											{
												break;
											}
											system("cls");
										}
										}
					        	break;
								}//close fifth switch
						
					}//close ford switch
							
					}//close first if statement
					
					 break;
                    
                    case 3:
                    cout<<"INGOBIYANE SEED TYPE\n";
                    cout<<"AVAILABLE QTY: "<<ngobi<<endl;
                    cout<<"UNIT PRICE:( E334)\n";
                    cout<<"TRANSPORT: (E100)\n";
                    	cout<<"1. To Buy\n";
					cin>>buy;
					cout<<"How many bags\n";
					cin>>ngobi[i]; 
					if(buy==1)
					{
						Gbags=Gbags-ngobi[i];
						Gtotal[i]=ngobi[i]*334;
						cout<<"You are about to buy "<<ngobi[i]<<" bags of Ingobiyane Seed, which cost "<<Gtotal[i]<<endl;
						cout<<"1. to continue\n";
						cout<<"0. exit\n";
						cin>>option;
						if(option==0)
						{
							break;
						}
							cout<<"1. Deliver my Product\n";
						cout<<"2. Don't Deliver i will fetch them myself\n";
						cin>>trans[i];
						if(trans[i]==1)
						{
							Gtotal[i]=Gtotal[i]+100;
						}
						else
						{
							cout<<"Remember we open from 8am to 5pm\n";
						}
					switch(option)
					{
							case 1:
								cout<<"Choose your platform of payment\n";
								cout<<"1. Bank(FNB)\n";
								cout<<"2. Momo pay\n";
								cout<<"3. pay pal\n";
								cin>>option;
								switch(option)
								{
									case 1:
									cout<<"Enter an account number\n";
									cin>>bank;
									if(bank=233457375744)
									{
										cout<<"Press 1 to confim your payment of "<<Gtotal[i]<<" to Rural Development Areas account(FNB)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<ngobi[i]<<" bags of Lion seed from RDA which costed E"<<Gtotal[i]<<",E334 each 10kg \n";
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that totl amount\n\n";
											}
											cout<<"0. exit";
											cin>>buy;
											if(buy==0)
											{
												break;
											}
											system("cls");
										}//close third if statement
										
									}//close second if statement
									break;
									case 2:
										cout<<"Enter Retail code\n";
										cin>>retail;
										if(retail==97722)
									{
										cout<<"Press 1 to confim your payment of "<<Gtotal[i]<<" to Rural Development Areas account(Momo)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<ngobi[i]<<" bags of Lion seed from RDA which costed E"<<Gtotal[i]<<",E334 each 10kg \n";
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that totl amount\n\n";
											}
											cout<<"0. exit";
											cin>>buy;
											if(buy==0)
											{
												break;
											}
											system("cls");
										}//close small if
	     								}//close main if here	
									
										break;
								case 3:
									cout<<"Enter e_mail\n";
									cin>>email;
										if(email=="rda@gov.sz")
									{
										cout<<"Press 1 to confim your payment of "<<Gtotal[i]<<" to Rural Development Areas account(pay pal)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<ngobi[i]<<" bags of Lion seed from RDA which costed E"<<Gtotal[i]<<",E244 each 10kg \n";
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that totl amount\n\n";
											}
											cout<<"0. exit";
											cin>>buy;
											if(buy==0)
											{
												break;
											}
										}
										}
					        	break;
								}//close fifth switch
						
					}//close ford switch
							
					}//close first if statement
					
					 break;
					}//close third switch
					break;
							case 2:
               cout<<" NPK FERTILISER TYPE:\n";
               cout<<"AVAILABLE QTY: "<<Mbags<<endl;
                cout<<"UNIT PRICE:( E556)\n";
                cout<<"TRANSPORT: (E100)\n";

                
					
					cout<<"1. To Buy\n";
					cin>>buy;
					cout<<"How many bags\n";
					cin>>manu[i]; 
					system("cls");
					if(buy==1)
					{
						Mbags=Mbags-manu[i];
						Mtotal[i]=manu[i]*556;
						cout<<"You are about to buy "<<manu[i]<<" bags of NPK FERTILISER , which cost "<<Mtotal[i]<<endl;
						cout<<"1. to continue\n";
						cout<<"0. exit\n";
						cin>>option;
						if(option==0)
						{
							break;
						}
							cout<<"1. Deliver my Product\n";
						cout<<"2. Don't Deliver i will fetch them myself\n";
						cin>>trans[i];
						if(trans[i]==1)
						{
							Mtotal[i]=Mtotal[i]+100;
						}
						else
						{
							cout<<"Remember we open from 8am to 5pm\n";
						}
					switch(option)
					{
							case 1:
								cout<<"Choose your platform of payment\n";
								cout<<"1. Bank(FNB)\n";
								cout<<"2. Momo pay\n";
								cout<<"3. pay pal\n";
								cin>>option;
								system("cls");
								switch(option)
								{
									case 1:
									cout<<"Enter an account number\n";
									cin>>bank;
									if(bank=233457375744)
									{
										cout<<"Press 1 to confim your payment of "<<Mtotal[i]<<" to Rural Development Areas account(FNB)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<manu[i]<<" bags of Lion seed from RDA which costed E"<<Mtotal[i]<<",E244 each 10kg \n";
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that totl amount\n\n";
											}
												cout<<"0. exit";
											cin>>buy;
											if(buy==0)
											{
												break;
											}
										
											}//close third if statement
										
									}//close second if statement
									break;
									case 2:
										cout<<"Enter Retail code\n";
										cin>>retail;
										if(retail==97722)
									{
										cout<<"Press 1 to confim your payment of "<<Mtotal[i]<<" to Rural Development Areas account(Momo)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<manu[i]<<" bags of Lion seed from RDA which costed E"<<Mtotal[i]<<",E244 each 10kg \n";
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that totl amount\n";
											}}//close small if
	     								}//close main if here	
									
										break;
								case 3:
									cout<<"Enter e_mail\n";
										if(email=="rda@gov.sz")
									{
										cout<<"Press 1 to confim your payment of "<<Mtotal[i]<<" to Rural Development Areas account(pay pal)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully bought "<<manu[i]<<" bags of Lion seed from RDA which costed E"<<Mtotal[i]<<",E244 each 10kg \n";
											if(trans[i]==1)
											{
												cout<<"Transport is also included in that totl amount\n";
											}}
										}
					        	break;
								}//close fifth switch
						
					}//close ford switch
							
					}//close first if statement
					break; 
					 case 3:
					 	cout<<"HOUR: E300\n\n";
					 	cout<<"1. to order a tractor\n";
					 	cin>>buy;
					cout<<"How many hours do you want\n";
					cin>>track[i]; 
					system("cls");
					if(buy==1)
					{
						Ttotal[i]=track[i]*300;
						cout<<"You are about to order tractor for caltivation, which cost "<<Ttotal[i]<<endl;
						cout<<"1. to continue\n";
						cout<<"0. exit\n";
						cin>>option;
						system("cls");
						if(option==0)
						{
							break;
						}
						
					switch(option)
					{
							case 1:
								cout<<"Choose your platform of payment\n";
								cout<<"1. Bank(FNB)\n";
								cout<<"2. Momo pay\n";
								cout<<"3. pay pal\n";
								cin>>option;
								system("cls");
								switch(option)
								{
									case 1:
									cout<<"Enter an account number\n";
									cin>>bank;
									if(bank=233457375744)
									{
										cout<<"Press 1 to confim your payment of "<<Ttotal[i]<<" to Rural Development Areas account(FNB)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully paid for cultivation "<<track[i]<<" hours from RDA which costed "<<Ttotal[i]<<endl;
											cout<<"0. exit\n";
											cin>>buy;
											break;
											system("cls");
											
										}//close third if statement
										
									}//close second if statement
									break;
									case 2:
										cout<<"Enter Retail code\n";
										cin>>retail;
										if(retail==97722)
									{
										cout<<"Press 1 to confim your payment of "<<Ttotal[i]<<" to Rural Development Areas account(Momo)\n";
										cin>>option;
										if(option==1)
										{
												cout<<"Congradulations you have successfully paid for cultivation "<<track[i]<<" hours from RDA which costed "<<Ttotal[i]<<endl;
											cout<<"0. exit\n";
											cin>>buy;
											break;
											system("cls");
										
	     								}//close main if here	
									
										break;
										system("cls");
								case 3:
									cout<<"Enter e_mail\n";
									cin>>email;
										if(email=="rda@gov.sz")
									{
										cout<<"Press 1 to confim your payment of E"<<Ttotal[i]<<" to Rural Development Areas account(pay pal)\n";
										cin>>option;
										if(option==1)
										{
											cout<<"Congradulations you have successfully paid for cultivation "<<track[i]<<" hours from RDA which cost "<<Ttotal[i]<<endl;
											cout<<"0. exit\n";
											cin>>buy;
											break;
											system("cls");
										}
										}
					        	break;
					}//close fifth switch
					}//close ford switch
					}//close first if statement
					 break;	    		
}//close second switch					 	
}//close the first switch	
}
}
else
conti=0;
}//close for loop

}
else
break;
}
while(code=="yes");
ofstream write;
write.open("report.txt");

write<<"^^^^^^^^^^^^^^^^^^^^^PEOPLE SUPORTED THIS YEAR^^^^^^^^^^^^^^^^^^^^^^^^^\n";
for(int t=0; t<count; t++)
{
	write<<"NAME: "<<name[t]<<endl;
	write<<"SURNAME: "<<surname[t]<<endl;
	write<<"ADDRESS: "<<address[t]<<endl;
	write<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";	
} 


	return 0;
}

void menu()
{
cout<<"Welcome to The Rural Development Areas System. We aim to make your life easy and\nsave your time while you support us and we long to help youas a farmer\n \n";
cout<<"PRESS 1 TO BUY OUR PRODUCTS\n";	
cout<<"PRESS 0 TO EXIT\n";
	
}
void product()
{
cout<<"1. SEEDS\n";
cout<<"2. MANURE\n";
cout<<"3. CALTIVATION\n";	
}



















