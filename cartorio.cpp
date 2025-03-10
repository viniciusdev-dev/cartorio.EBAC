#include <stdio.h>  //BIBLIOTECA DE COMUNICA�AO COM USUARIO 
#include <stdlib.h>  //BIBLIOTECA DE ALOCA�AO DE ESPA�O EM  E MEMORIA 
#include <locale.h>  // biblioteca de aloca�ao de texto por regiao
#include <string.h>  // biblioteca responsavel por cuidar das strings

   int registro()// criando banco de dados, fun��o responsavel por cadastrar os usuarios no sistema
   {
    // inicio das cria�oes de variaveis/strings
	char arquivo [40];// esse astring salva os nomes do usuario
    char cpf [40];// string cpf, coleta os cpfs dos usuarios
    char nome [68];// string nome, coleta os nomes de cada usuario
    char sobrenome[40];// string soobre nome, coleta os nomes dos usarios
    char cargo [40];// string cargo coleta os cargos dos usuarios
     // final das cria�oes de variaveis/strings
    printf(" digite o cpf a ser cadastrado\n");// coletando informa�oes do usuario
    scanf("%s", cpf);//%s referece as strings salvando na variavel/cpf
     
    strcpy(arquivo, cpf); // responsavel por copiar os valoresdas strings
    
    FILE *file; // criando arquivo
    file = fopen(arquivo,"w"); // abrindo o aquivo novo com a variavel, "w" que significa escrever
   	fprintf(file,cpf); // salvando o arquivo dentro da variavel CPF
   	fclose(file); // fechando o arquivo
   	  
   	file =fopen(arquivo, "a");// chmando o arquivo ja criado por isso o "a" que significa ler
   	fprintf(file,","); //a virgula e para separar o codigo na visao do cliente
   	fclose(file);// fun�ao de fechar a FILE  ja criada
   	 
   	 
   	printf("digite o nome a ser cadastrado\n");// fun�ao para coletar as infoma�oes do usuario
   	scanf("%s", nome);// ""%s" referece a string NOME, sera salvado as infoma�oes do usuario na string NOME
   	file = fopen(arquivo, "a");// abrindo o arquivo novo, "W" siginifica escrever
   	fprintf(file,nome); // salvando o arquivo dentro da variavel NOME
   	fclose(file);
   	  
   	file = fopen (arquivo, "a"); // chamndo o arquivo ja criado para abrir de novo por isso o A
   	fprintf(file, ","); // a virgula � para ficar tudo separado por ela 
    fclose(file);// fun�ao de fechar o arquivo
      
    printf("digite o sobrenome a ser cadastrado \n");// fun�ao que coleta as infoma�oes do usuario
    scanf ("%s", sobrenome); // "%s" salva detro da varivel sobreenome
      
    file = fopen(arquivo ,"a");// abrindo arquivo novo "a" significa ler o arquivo ja aberto la em cima 
    fprintf(file,sobrenome);// salvando o arquivo aberto, dentro da variavel NOME
    fclose(file);// fin�ao de fechar o arquivo aberto
      
    file = fopen(arquivo,"a");// chamando o arqui q foi aberto para rodar de novo por isso o"a" que signivica ler
    fprintf(file,",");// fun�ao"," � para separa visualmente ao clite po ela 
    fclose(file);// fun�ao que fecha o aqruivo ja criado
      
    printf("digite o cargo a ser cadastrado\n");// fun�ao que coleta as infoma�oes do usuario
    scanf("%s",cargo); //"%s" referese a string CARGO para alvar informa�oes dentro da string CARGO
      
      
    file = fopen (arquivo,"a");// abrindo o arquivo por isso o "a" que significa ler
    fprintf(file,cargo);// salvando o arquivo aberto dentro da string CARGO
    fclose(file);// fun�ao que fecha o arquivo ja aberto
      
    
   }
   int consulta()// crindo a fun�ao responsavel pela consulta dos nomes no sistema 
   {
   	 setlocale(LC_ALL,"portuguese");// setlocale para salvar as infoma�oes em portugues 
   	 
   char cpf[40];// que o usuario vai cadastrar
   char conteudo [200];// o conteudo q o usuario vai acessar

   printf("digite o cpf a ser cdastrado\n");// fun�ao para coletar as informa�oes do usuario
   scanf("%s",cpf);
   
   FILE *file; // para abrir o arquivo CPF
   file = fopen (cpf,"r");// aqui vai ler esse arquivo CPF
   
   if(file== NULL)// casa nao seja nenhum, vai ser NULL
   {
   	printf("n�o foi possivel localizar o arquivo\n");// caso o usuario nao ache nada
   	 }
   	 while(fgets(conteudo,200,file) !=NULL)//enquanto WHILE. tiver conteudo vai trazer infoma�oes para nos
	{
    printf("\nEssa s�o as informa�oes do usuario:");
    printf("%s",conteudo);
    printf("\n\n");
	}
    system("pause");// para mater mais organizado
   
   	 
   }
   int deletar()// fun�ao responsalvel por deletar os nomes 
  {
    char cpf[40];//string que o usuario vai usar para deletar os nomes 
    
	printf("digite o usurio a ser deletado!\n");
    scanf("%s",cpf);//referece a string cpf que o usuario vai usaar para deleatar
    
    remove(cpf);// fun�ao responsavel por deletar os nomes 
    
    FILE *file;// abrir o arquivo cpf
    file = fopen (cpf,"r");// a letra "r" siginifica ler
    
    if (file == NULL)// caso o usuario nao encontre o nome a ser deletado sera 	NULL
    printf("O usuario foi deletado com sucesso,");
	printf(" este usuario nao se encontra mais no sistema!\n");
    system("pause");// fun�ao responsavel por pausar a menssagem para o usurario
    }


  
  
  
  
  
   int main ()
   {
	int opcao=0; // definindo variaveis
	int x=1;
	
   for (x=1;x=1;)
   {
   	system("cls");// respolsavel por limpar a tela
   	
    setlocale(LC_ALL,"portuguese"); // definindo as linguagem
  
	printf("### Cart�rio da EBAC \n\n");
	printf("escolha a ap��o desejada no menu:\n\n ");
	printf("\t1 - registrar nomes \n");
	printf("\t2 - consultar nomes \n");
	printf("\t3 - deletar nomes\n\n"); // fim do menu 
    printf("op��o: ");
	
	scanf("%d", &opcao); // armazena as informa�oes do usuario
    
    system("cls"); // deixa o codigo organizado  
    
    switch(opcao) 
	{
		case 1: 
		registro(); // chamada de fun�ao registro la de cima 
       break; // para fechar o case � com ponto e virgula 
        
		case 2: 
	    consulta();// chmada de fun�ao consulta la de cima
  	  break;
  	     
  	    case 3:
		  deletar();// chamada da fun�ao deletar la de cima 
	   break;
	   
	   default: // no final dos cases colocmos o default
	   printf("essa op�ao n�o esta disponivel\n");
      system("pause");
      break;
	   }
     
	 }
     }
	 
    
	 
	 
	
