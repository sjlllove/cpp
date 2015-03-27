//文件名：作业一__游戏
//猜数字游戏
#include<cstdlib>
#include<ctime>
#include<string>
#include<iostream>
using namespace std;
int main()
{ 	int num1,num2,num3,input1,input2,input3,numA,numB ;   //"num" is used to deposit random nunbers，"input" is used to deposi numbers inputted. 
	int i,totalnum,	winnum ;                              // calculate the times.
	char answer ;                                         // the answer whether to play the game. 
	
	srand (time(NULL)) ;                                  
	
	totalnum=0 ;                                          // give the first number.
	winnum=0 ;
	
	while (true) {
		cout<<"需要玩游戏吗（Y/N）？" ;
		cin>>answer ;
		
		if (answer=='N') break ;                         // game over.
		
		if (answer=='Y') {                               
			num1=rand()*10/(RAND_MAX+1) ;                //to give the first random number.
			
			do {                                         // make sure the second number is different from the first one.
				num2=rand()*10/(RAND_MAX+1) ;
			}while (num1==num2) ;
			
			do {
				num3=rand()*10/(RAND_MAX+1) ;
			}while ((num1==num3)||(num2==num3)) ;
		
			for (i=0;i<=7;++i) { 
				numA=0;
				numB=0;
				
				bool flag;
	 			int q,n1;
				do{ 
	  				string input1 ;

	  				cout<<"请输入你猜测的第一个数字:";
	  				cin>>input1 ;
	  			
					n1=input1.size();
      				for(q=0,flag=true;q<n1;q++)
	  						if(input1[q]<'0'||input1[q]>'9')
	  						{
		  					cout<<"错误！输入范围应该在0-9之间！"<<endl;
		  					flag=false;
		  					break;
	  					}
  
  					}while(flag==false);
 					
 				bool flag1;
	 			int m,n2;
				do{ 
	  				string input2 ;

	  				cout<<"请输入你猜测的第二个数字:";
	  				cin>>input2 ;
	  			
					n2=input2.size();
      				for(m=0,flag1=true;m<n2;m++)
	  						if(input2[m]<'0'||input2[m]>'9')
	  						{
		  					cout<<"错误！输入范围应该在0-9之间！"<<endl;
		  					flag1=false;
		  					break;
	  					}
  
  					}while(flag1==false);
  					
  				bool flag2;
	 			int n,n3;
				do{ 
	  				string input3 ;

	  				cout<<"请输入你猜测的第三个数字:";
	  				cin>>input3 ;
	  			
					n3=input3.size();
      				for(n=0,flag2=true;n<n3;n++)
	  						if(input3[n]<'0'||input3[n]>'9')
	  						{
		  					cout<<"错误！输入范围应该在0-9之间！"<<endl;
		  					flag2=false;
		  					break;
	  					}
  
  				}while(flag2==false);
 
 					
 					
            	 
            	 
				
				if(i==7) {
					cout<<"很遗憾，你没有在规定次数内猜对。答案是"<<num1<<num2<<num3<<endl ; 
					break;       // game over after seven numbers.
				}       
				 
	 			if ((num1==input1)&&(num2==input2)&&(num1==input1))
					{
						cout<<"恭喜，你猜对了" ;        //the answer is right. 
						++winnum ;
						break ;
				    }
				
				numA=(num1==input1) + (num2==input2) + (num3==input3) ;                 //calculate A and B.
				numB= (((num1==input2)&&(num1!=input1))||((num1==input3)&&(num1!=input1)))+(((num2==input1)&&(num2!=input2))||
						((num2==input3)&&(num2!=input2)))+(((num3==input1)&&(num3!=input3))||((num3==input2)&&(num3!=input3)));
				
				cout<<numA<<'A'<<numB<<'B'<<endl ;
			}
		}
		
		++totalnum ;                                           //the times of circulation. 
		
	}
	cout<<"你一共玩了"<<totalnum<<"局，赢了"<<winnum<<"局，输了"<<totalnum-winnum<<"局" ;
	
	return 0 ;
}
				
				
			
			 
			
		
			
	
	

