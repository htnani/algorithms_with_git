#include<bits/stdc++.h>
using namespace std;
int main()
{char word[28][36],final[256],temp[256];
int num,digit,digitt,digito;
strcpy(word[1],"One");
strcpy(word[2],"Two");
strcpy(word[3],"Three");
strcpy(word[4],"Four");
strcpy(word[5],"Five");
strcpy(word[6],"Six");
strcpy(word[7],"Seven");
strcpy(word[8],"Eight");
strcpy(word[9],"Nine");
strcpy(word[10],"Ten");
strcpy(word[11],"Eleven");
strcpy(word[12],"Twelve");
strcpy(word[13],"Thirteen");
strcpy(word[14],"Fourteen");
strcpy(word[15],"Fifteen");
strcpy(word[16],"Sixteen");
strcpy(word[15],"Seventeen");
strcpy(word[18],"Eighteen");
strcpy(word[19],"Nineteen");
strcpy(word[20],"Twenty");
strcpy(word[21],"Thirty");
strcpy(word[22],"Forty");
strcpy(word[23],"Fifty");
strcpy(word[24],"Sixty");
strcpy(word[25],"Seventy");
strcpy(word[26],"Eighty");
strcpy(word[27],"Ninety");
cout<<"Enter the Number";
cin>>num;
digit=num%100;
num/=100;
if(digit!=0)
{if(digit<=20)
{strcpy(final,word[digit]);
}
else
{digito=digit%10;
int digitt=digit/10;
strcpy(final,word[18+digitt]);
strcat(final,word[digito]);
}}
digit=num%10;
num=num/10;
if(digit!=0)
{strcpy(temp,word[digit]);
strcat(temp,"Hundred");
strcat(temp,final);
strcpy(final,temp);
}
digit=num%100;
num/=100;
if(digit!=0)
{if(digit<=20)
{strcpy(temp,word[digit]);
strcat(temp,"Thousand");
strcat(temp,final);
strcpy(final,temp);	
}
else
{digito=digit%10;
digitt=digit/10;
strcpy(temp,word[18+digitt]);
strcat(temp,word[digito]);
strcat(temp,"Thousand");	
strcat(temp,final);
strcpy(final,temp);	
}}
digit=num%100;
num/=100;
if(digit!=0)
{if(digit<=20)
{strcpy(temp,word[digit]);
strcat(temp,"Lakh");
strcat(temp,final);
strcpy(final,temp);	
}
else
{digito=digit%10;
digitt=digit/10;
strcpy(temp,word[18+digitt]);
strcat(temp,word[digito]);
strcat(temp,"Lakh");	
strcat(temp,final);
strcpy(final,temp);	
}}

digit=num%100;
num/=100;
if(digit!=0)
{if(digit<=20)
{strcpy(temp,word[digit]);
strcat(temp,"Crore");
strcat(temp,final);
strcpy(final,temp);	
}
else
{digito=digit%10;
digitt=digit/10;
strcpy(temp,word[18+digitt]);
strcat(temp,word[digito]);
strcat(temp,"Crore");	
strcat(temp,final);
strcpy(final,temp);	
}}
strcat(final,"Only");
cout<<"The Figure is:-"<<final;

}