#include <stdio.h>  //BIBLIOTECA DE COMUNICAÇAO COM USUARIO 
#include <stdlib.h>  //BIBLIOTECA DE ALOCAÇAO DE ESPAÇO EM  E MEMORIA 
#include <locale.h>  // biblioteca de alocaçao de texto por regiao
#include <string.h>  // biblioteca responsavel por cuidar das strings

   int registro()// criando banco de dados, função responsavel por cadastrar os usuarios no sistema
   {
    // inicio das criaçoes de variaveis/strings
	char arquivo [40];// esse astring salva os nomes do usuario
    char cpf [40];// string cpf, coleta os cpfs dos usuarios
    char nome [68];// string nome, coleta os nomes de cada usuario
    char sobrenome[40];// string soobre nome, coleta os nomes dos usarios
    char cargo [40];// string cargo coleta os cargos dos usuarios
     // final das criaçoes de variaveis/strings
    printf(" digite o cpf a ser cadastrado\n");// coletando informaçoes do usuario
    scanf("%s", cpf);//%s referece as strings salvando na variavel/cpf
     
    strcpy(arquivo, cpf); // responsavel por copiar os valoresdas strings
    
    FILE *file; // criando arquivo
    file = fopen(arquivo,"w"); // abrindo o aquivo novo com a variavel, "w" que significa escrever
   	fprintf(file,cpf); // salvando o arquivo dentro da variavel CPF
   	fclose(file); // fechando o arquivo
   	  
   	file =fopen(arquivo, "a");// chmando o arquivo ja criado por isso o "a" que significa ler
   	fprintf(file,","); //a virgula e para separar o codigo na visao do cliente
   	fclose(file);// funçao de fechar a FILE  ja criada
   	 
   	 
   	printf("digite o nome a ser cadastrado\n");// funçao para coletar as infomaçoes do usuario
   	scanf("%s", nome);// ""%s" referece a string NOME, sera salvado as infomaçoes do usuario na string NOME
   	file = fopen(arquivo, "a");// abrindo o arquivo novo, "W" siginifica escrever
   	fprintf(file,nome); // salvando o arquivo dentro da variavel NOME
   	fclose(file);
   	  
   	file = fopen (arquivo, "a"); // chamndo o arquivo ja criado para abrir de novo por isso o A
   	fprintf(file, ","); // a virgula é para ficar tudo separado por ela 
    fclose(file);// funçao de fechar o arquivo
      
    printf("digite o sobrenome a ser cadastrado \n");// funçao que coleta as infomaçoes do usuario
    scanf ("%s", sobrenome); // "%s" salva detro da varivel sobreenome
      
    file = fopen(arquivo ,"a");// abrindo arquivo novo "a" significa ler o arquivo ja aberto la em cima 
    fprintf(file,sobrenome);// salvando o arquivo aberto, dentro da variavel NOME
    fclose(file);// finçao de fechar o arquivo aberto
      
    file = fopen(arquivo,"a");// chamando o arqui q foi aberto para rodar de novo por isso o"a" que signivica ler
    fprintf(file,",");// funçao"," é para separa visualmente ao clite po ela 
    fclose(file);// funçao que fecha o aqruivo ja criado
      
    printf("digite o cargo a ser cadastrado\n");// funçao que coleta as infomaçoes do usuario
    scanf("%s",cargo); //"%s" referese a string CARGO para alvar informaçoes dentro da string CARGO
      
      
    file = fopen (arquivo,"a");// abrindo o arquivo por isso o "a" que significa ler
    fprintf(file,cargo);// salvando o arquivo aberto dentro da string CARGO
    fclose(file);// funçao que fecha o arquivo ja aberto
      
    
   }
   int consulta()// crindo a funçao responsavel pela consulta dos nomes no sistema 
   {
   	 setlocale(LC_ALL,"portuguese");// setlocale para salvar as infomaçoes em portugues 
   	 
   char cpf[40];// que o usuario vai cadastrar
   char conteudo [200];// o conteudo q o usuario vai acessar

   printf("digite o cpf a ser cdastrado\n");// funçao para coletar as informaçoes do usuario
   scanf("%s",cpf);
   
   FILE *file; // para abrir o arquivo CPF
   file = fopen (cpf,"r");// aqui vai ler esse arquivo CPF
   
   if(file== NULL)// casa nao seja nenhum, vai ser NULL
   {
   	printf("não foi possivel localizar o arquivo\n");// caso o usuario nao ache nada
   	 }
   	 while(fgets(conteudo,200,file) !=NULL)//enquanto WHILE. tiver conteudo vai trazer infomaçoes para nos
	{
    printf("\nEssa são as informaçoes do usuario:");
    printf("%s",conteudo);
    printf("\n\n");
	}
    system("pause");// para mater mais organizado
   
   	 
   }
   int deletar()// funçao responsalvel por deletar os nomes 
  {
    char cpf[40];//string que o usuario vai usar para deletar os nomes 
    
	printf("digite o usurio a ser deletado!\n");
    scanf("%s",cpf);//referece a string cpf que o usuario vai usaar para deleatar
    
    remove(cpf);// funçao responsavel por deletar os nomes 
    
    FILE *file;// abrir o arquivo cpf
    file = fopen (cpf,"r");// a letra "r" siginifica ler
    
    if (file == NULL)// caso o usuario nao encontre o nome a ser deletado sera 	NULL
    printf("O usuario foi deletado com sucesso,");
	printf(" este usuario nao se encontra mais no sistema!\n");
    system("pause");// funçao responsavel por pausar a menssagem para o usurario
    }


  
  
  
  
  
   int main ()
   {
	int opcao=0; // definindo variaveis
	int x=1;
	
   for (x=1;x=1;)
   {
   	system("cls");// respolsavel por limpar a tela
   	
    setlocale(LC_ALL,"portuguese"); // definindo as linguagem
  
	printf("### Cartório da EBAC \n\n");
	printf("escolha a apção desejada no menu:\n\n ");
	printf("\t1 - registrar nomes \n");
	printf("\t2 - consultar nomes \n");
	printf("\t3 - deletar nomes\n\n"); // fim do menu 
    printf("opção: ");
	
	scanf("%d", &opcao); // armazena as informaçoes do usuario
    
    system("cls"); // deixa o codigo organizado  
    
    switch(opcao) 
	{
		case 1: 
		registro(); // chamada de funçao registro la de cima 
       break; // para fechar o case é com ponto e virgula 
        
		case 2: 
	    consulta();// chmada de funçao consulta la de cima
  	  break;
  	     
  	    case 3:
		  deletar();// chamada da funçao deletar la de cima 
	   break;
	   
	   default: // no final dos cases colocmos o default
	   printf("essa opçao não esta disponivel\n");
      system("pause");
      break;
	   }
     
	 }
     }
	 
    
	 
	 
	
