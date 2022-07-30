/* Uma empresa vai conceder um aumento percentual de
salário aos seus funcionários dependendo de quanto
cada pessoa ganha, conforme tabela ao lado. Fazer um
programa para ler o salário de uma pessoa, daí mostrar
qual o novo salário desta pessoa depois do aumento,
quanto foi o aumento e qual foi a porcentagem de
aumento.  */

#include <stdio.h>

int main(){
	
	float salario, porcentagem, aumento, NovoSalario; 
	
	printf("Digite o salario da pessoa: ");
	scanf("%f", &salario);
	
	if( salario <= 1000.0){
		porcentagem = 20;
	}
		if (salario <= 3000.0 ){
			porcentagem = 15;
		}
			if (salario <= 8000.0){
			porcentagem = 10;
		} 
		else{
		
			porcentagem = 5;
		}
	
	
	aumento = salario * porcentagem / 100;
	
	NovoSalario = salario + aumento;
	
	
	printf("Novo salario = R$ %f \n ", NovoSalario);
	printf("Aumento = R$ %f \n", aumento);
	printf("Porcentagem = %f \n", porcentagem);
	
	
	
	
	return 0;
}
