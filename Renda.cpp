#include <iostream>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{

float cpf;
double renda, liquida1, liquida2, liquidafinal, abat, impo, impototal;
int ndd, val;
char quit='s';
while(quit!='n')
{
	setlocale (LC_ALL, "Portuguese");
	cout << "Bem vindo(a), esse � um programa para calcular o imposto de renda." <<endl;
	cout << "D�gite seu cpf: " <<endl;
	cin >>cpf;
	system("cls");
	cout << "D�gite sua renda bruta: " <<endl;
	cin >>renda;
	system("cls");
	cout << "D�gite o numero de dependentes: " <<endl;
	cin >>ndd;
	system("cls");
	
	if (renda<=1500)
{
		
	liquida1=(renda*9/100);
	liquida2=(renda*7.5/100);
	liquidafinal=renda-liquida1-liquida2;
}
    if ((renda>=1501) and (renda<=3000))
{
    liquida1=(renda*10/100);
    liquida2=(renda*12.5/100);
    liquidafinal=renda-liquida1-liquida2;	
    	
}
	if ((renda>=3001) and (renda<=5000))
{
	liquida1=(renda*11/100);
	liquida2=(renda*15/100);
	liquidafinal=renda-liquida1-liquida2;
	
}

	if (renda>=5001)
{
	liquida1=(renda*12/100);
	liquida2=(renda*20/100);
	liquidafinal=renda-liquida1-liquida2;

}
	cout << "Esse � a sua renda livre:R$ " << liquidafinal <<endl;
	cout << "Tem um abatimento de R$250 por dependentes" <<endl;
	val=ndd*250;
	cout << "Esse � o valor que vai ser abatido:R$ " <<val<<endl;
	abat=liquidafinal-val;
    
	if (abat<=1500)
{
	cout << "Voc� foi isento do imposto"<<endl;
	}	
	if ((abat>=1501) and (abat<=3000))
{
	impo=(abat*6/100);
	
	cout << "Esse � o valor que voce ter� que pagar de imposto:R$ " << impo <<endl;
}
	if ((abat>=3001) and (abat<=5000))
{
	impo=(abat*9/100);
	
	cout << "Esse � o valor que voce ter� que pagar de imposto:R$ " << impo <<endl;
}
	if (abat>=5001)
{
	impo=(abat*12/100);
	
	cout << "Esse � o valor que ter� que pagar de imposto:R$ " << impo <<endl;
}
{
	cout << "Esse � o cpf do usu�rio: " << cpf <<endl;
    cout << "Esse � o valor da renda livre com o abatimento:R$ " << abat <<endl;
    impototal=abat-impo;
    cout << "Esse � o valor da renda livre com todos os descontos:R$ " << impototal <<endl;
	cout << "Quer fazer outro calculo de imposto de renda? s para sim e n para n�o" <<endl;
    cin >>quit;
    system("cls");
    
    if (quit !='s')
{ 
    cout << "Muito obrigado por utilizar o nosso programa." <<endl;
	    
}    
}
}






}
