#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>



			//Calculo de figuras planas	
			
void circulo()
{float r, area, PI, dia;		//função calculo do circulo
printf("\n\n\tDigite o diametro do circulo:");
scanf("%f", &dia);
PI=3.14159265;
r = dia/2;
area = PI*r*r;
printf("\n\n\t>>>  Area do circulo:%.2f.\n\n\n\n",area);
}

void losango()					//função calculo do losango
{float area, D1, D2;
printf("\n\n\tDigite a diagonal 1:"); 
scanf("%f", &D1);
printf("\n\tDigite a diagonal 2:"); 
scanf("%f",&D2);
area=(D1*D2)/2;
printf("\n\t>>>  Area do losango:%.2f.\n\n\n",area);
} 

void paralelograma()			//função calculo do paralelograma
{float area, base, alt;
printf("\n\n\tDigite a base:"); 
scanf("%f",&base);
printf("\n\tDigite a altura:"); 
scanf("%f",&alt);
area=base*alt;
printf("\n\n\t>>>  Area do paralelogramo:%.2f.\n\n\n",area);
}

void trapezio()					//função calculo do trapezio
{float area, B, base, alt;
 printf("\n\n\tDigite a base maior:"); 
scanf("%f",&B);
printf("\n\tDigite a base menor:"); 
scanf("%f",&base); 
printf("\n\tDigite a altura:"); 
scanf("%f",&alt);
area=((B+base)/2)*alt;
printf("\n\n\t>>>  Area do trapezio:%.2f.\n\n\n",area);
}

void triangulo()				//função calculo do triangulo
{float area, base, alt;
printf("\n\tDigite a base:"); 
scanf("%f", &base);
printf("\n\n\tDigite a altura:"); 
scanf("%f", &alt);
area=(base*alt)/2;
printf("\n\n\t>>>  Area do triangulo:%.2f\n\n\n",area);
}


			//Calculo de figuras solidas

float dia, larg, alt, comp, a_base, vol; 
float esfera(float dia){                     //função que calcula o volume da esfera
      float r, vol;
      r=dia/2;
      vol=((4*3.14159265)/3)*r*r*r;
      return (vol);
	}
      
float Esfera(){								//interface Esfera
  	printf("\n\n\t\t VOLUME DA ESFERA");
	printf("\n\n\t Digite o diametro da esfera: "); scanf("%f",&dia);
	
	vol=esfera(dia);
	
	printf("\n\n\t O volume da esfera e: %.2f",vol);
	printf("\n\n\n\t\t Pressione <ENTER> para voltar ao menu");
}
      
float cone(float dia, float alt){           //função que calcula o volume do cone
		float r, vol;
      r=dia/2;
      vol=(3.14159265/3)*r*r*alt;
      return(vol);
	}
      
float Cone(){								//interface Cone
	printf("\n\n\t\t VOLUME DO CONE");
	printf("\n\n\t Digite o diametro da base: "); scanf("%f",&dia);
	printf("\n\n\t Digite a altura: "); scanf("%f",&alt);
	vol=cone(dia,alt);
	printf("\n\n\t O volume do cone e: %.2f",vol);
	printf("\n\n\n\t\t Pressione <ENTER> para voltar ao menu");
}      
    
      
float cilindro(float dia, float alt)       //função que calcula o volume do cilindro
      {float r, vol;
      r=dia/2;
      vol=3.14159265*r*r*alt;
      return(vol);
	}
    
float Cilindro(){							//interface Cilindro
	printf("\n\n\t\t VOLUME DO CILINDRO");
	printf("\n\n\t Digite o diametro da base: ");scanf("%f",&dia);
	printf("\n\n\t Digite a altura: "); scanf("%f",&alt);
	vol=cilindro(dia,alt);
	printf("\n\n\t O volume do cilindro e: %.2f",vol);
	printf("\n\n\n\t\t Pressione <ENTER> para voltar ao menu");
}	  

float paralelepipedo(float comp, float larg, float alt)          //função que calcula o volume do paralelepípedo
      {float vol;
      vol=comp*larg*alt;
      return(vol);
	}
	
float Paralelepipedo(){						//interface Parallelepipedo
	printf("\n\n\t\t VOLUME DO PARALELEPIPEDO");
	printf("\n\n\t Digite o comprimento: "); scanf("%f",&comp);
	printf("\n\n\t Digite a largura: "); scanf("%f",&larg);
	printf("\n\n\t Digite a altura: "); scanf("%f",&alt);
	vol=paralelepipedo(comp,larg,alt);
	printf("\n\n\t O volume do paralelepipedo e: %.2f",vol);
	printf("\n\n\n\t\t Pressione <ENTER> para voltar ao menu");
}	  
      
float piramide_quadr(float a_base, float alt)         //função que calcula o volume da piramide de basa quadrada
      {float vol;
      vol=a_base*alt/3;
      return(vol);
	}
	
float Piramide_quadr(){						//interface iramide_quadr
	printf("\n\n\t\t VOLUME DA PIRAMIDE DE BASE QUADRADA");
	printf("\n\n\t Digite a area da base: "); scanf("%f",&a_base);
	printf("\n\n\t Digite a altura: "); scanf("%f",&alt);
	vol=piramide_quadr(a_base,alt);
	printf("\n\n\t O volume da piramide e: %.2f",vol);	
	printf("\n\n\n\t\t Pressione <ENTER> para voltar ao menu");
}

			//Conversões de medidas
				
float Km_m(){				//KM para Metros								
	float valor, resultado;
	printf("\n\n\t\t CONVERSAO DE KM PARA METROS");
    printf("\n\n\t Digite a quantidade em quilometros: ");
    scanf("%f", &valor);
     resultado = valor * 1000.0; // 1 quilômetro = 1.000 metros
    printf("\n\n\t %.f quilometros equivalem a %.3f metros.", valor, resultado);
}
        
float M_km(){				//Metros para KM
	float valor, resultado;
	printf("\n\n\t\t CONVERSAO DE METROS PARA KM");	
    printf("\n\n\tDigite a quantidade em metros: ");
    scanf("%f", &valor);
    resultado = valor / 1.000; // 1 metro = 0.001 quilômetro
    printf("\n\n\t%.3f metros equivalem a %.f quilometros.", valor, resultado);
}

float M_cm(){				//Metros para Centimetros
	float valor, resultado;
	printf("\n\n\t\t CONVERSAO DE METROS PARA CENTIMETROS");	
    printf("\n\n\tDigite a quantidade em metros: ");
    scanf("%f", &valor);
    resultado = valor * 100; // 1 metro = 100 centímetros
    printf("\n\n\t%.f metros equivalem a %.f centimetros.", valor, resultado);	
}

float J_m(){
	float valor, resultado;
	printf("\n\n\t\t CONVERSAO DE JARDAS PARA METROS");	
	printf("\n\n\tDigite a quantidade em jardas: ");
    scanf("%f", &valor);
    resultado = valor * 0.9144; // 1 jarda = 0.914 metros ou aproximadamente 91 centímetros
    printf("\n\n\t%.f jardas equivale a %.3f m.\n", valor, resultado);
}

float H_m(){
	float valor, resultado;
	printf("\n\n\t\t CONVERSAO DE HECTARE PARA METROS");	
    printf("\n\n\tDigite a quantidade em hectare: ");
    scanf("%f", &valor);
    resultado = valor * 10.000; // 1 hectare = 10.000m² 
    printf("\n\n\t%.f hectare equivale a %.3f m2.\n", valor, resultado);	
}

			//Elevar Numero a Potencia

float p_quadrado(){			//Elevar ao Quadrado
	double numero, resultado = 1, elev, i; //declaração
	
	// inserir um número
    printf("\n\tDigite um numero: ");
    scanf("%lf", &numero);

    // Calcula a potência ao quadrado
    resultado = numero * numero;

    // Exibe o resultado
    printf("\n\n\tO quadrado de %.2lf e: %.2lf", numero, resultado);
}

float p_qualquer(){			//Elevar a Qualquer Numero
	double numero, resultado = 1, elev, i; //declaração
	// inserir um número
    printf("\n\tDigite um numero para ser elevado: ");
    scanf("%lf", &numero);
    printf("\n\n\tDigite um numero que ira elevar: ");
    scanf("%lf", &elev);

	// Calcula a potência
    for(i=0;i<elev;i++){
    resultado = resultado * numero;
	}
	
    // Exibe o resultado
    printf("\n\n\tO elevbado de %.2lf a esta potencia %.2lf e: %.2lf", numero, elev, resultado);
}

			//Sortear Numero
void sortear(){
	int t, qt;
	printf("\n\n\tSORTEAR NUMEROS DE 0 A 100");
	printf("\n\n\tDigite a quantidade de numeros para sortear: ");
	scanf("%d",&qt);
    srand (time(NULL));
	for(t=0; t<qt; t++){
		printf("\n\tO %d numero sorteado foi: %d\n",t+1,rand() % 100);
    }
    printf("\n\n\n\t\t Pressione <ENTER> para voltar ao menu");
}
			
			

 //COR DA LETRA
  enum{BLACK,                 //0
       BLUE,                  //1
       GREEN,                 //2
       CYAN,                  //3
       RED,                   //4
       MAGENTA,               //5
       BROWN,                 //6
       LIGHTGRAY,             //7
       DARKGRAY,              //8
       LIGHTBLUE,             //9
       LIGHTGREEN,            //10
       LIGHTCYAN,             //11
       LIGHTRED,              //12
       LIGHTMAGENTA,          //13
       YELLOW,                //14
       WHITE                  //15
       };

  //COR DO FUNDO
  enum{_BLACK=0,                 //0
       _BLUE=16,                  //1
       _LIGHTBLUE=144,             //9
       _WHITE=240                  //15
       };
       
void linhaCol(int lin, int col){
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){col-1,lin-1});// coorddenada na tela
}


void textColor(int letra, int fundo){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), letra + fundo); //Cor do texto ou fundo
}


void box(int lin1, int col1, int lin2, int col2){
     int i,j , tamlin, tamcol;

     //achar o tamanho do box
     tamlin = lin2 - lin1;
     tamcol = col2 - col1;

     //Monta o Box

     for (i=col1; i<=col2; i++){ // linhas
         linhaCol(lin1,i);
         printf("%c",196);
         linhaCol(lin2,i);
         printf("%c",196);
         }

     for (i=lin1; i<=lin2; i++){ //colunas
         linhaCol(i,col1);
         printf("%c",179);
         linhaCol(i,col2);
         printf("%c",179);
         }
    for (i=lin1+1;i<lin2;i++){
        for(j=col1+1;j<col2;j++){
            linhaCol(i,j);printf(" ");
        }
    }
     //Posição dos cantos
     linhaCol(lin1,col1);
     printf("%c",218);
     linhaCol(lin1,col2);
     printf("%c",191);
     linhaCol(lin2,col1);
     printf("%c",192);
     linhaCol(lin2,col2);
     printf("%c",217);       
} 
    
int menu(int lin1, int col1, int qtd, char lista[8][40]){
     int opc=1, lin2, col2, linha,i,tamMaxItem, tecla;

     //calcula as coordenadas
     tamMaxItem = strlen(lista[0]);
     //tamanho maximo do item
     for(i=1; i<qtd;i++){
       if(strlen(lista[i])>tamMaxItem){
          tamMaxItem = strlen(lista[i]); 
       } 
     }
     lin2 = lin1+(qtd*2+2);
     col2 = col1+tamMaxItem+4;

     //Monta Tela
     textColor(LIGHTBLUE, _BLACK);
     setlocale(LC_ALL,"C");
     box(lin1,col1,lin2,col2);
     setlocale(LC_ALL,"C");
     //laço das opcões
     while(1){
	        linha=lin1+2;
	        for(i=0;i<qtd;i++){           
	           if(i+1==opc){
				textColor(WHITE, _LIGHTBLUE);
	           }else{
			   	textColor(WHITE, _BLACK);}
	        linhaCol(linha,col1+2);
	        printf("%s",lista[i]);
	        linha +=2;
	        }

       //Aguarda tecla
       linhaCol(1,1);
       tecla= getch();
       linhaCol(22,1);  
       
	   //Opção
       if(tecla==27){ //ESC
       opc=0; break;
       }
       else if(tecla==13){ //ENTER
		   break;
       }
       //Seta para cima
       else if(tecla==72){ //se possivel seleciona o item anterior - seta para cima
            if(opc>1)
			opc--;  // se opcao for maior que 1, pode voltar 
       }
       else if(tecla==80){        //seta para baixo
            if (opc<qtd)
			opc++;                //Se opcao for menor que quantidade de itens, posso avançar
       }
     }
     return opc;
}

int credito(int lin1, int col1, int qtd, char lista[8][40]){
     int opc=1, lin2, col2, linha,i,tamMaxItem;

     //calcula as coordenadas
     tamMaxItem = strlen(lista[0]);
     //tamanho maximo do item
     for(i=1; i<qtd;i++){
       if(strlen(lista[i])>tamMaxItem){
          tamMaxItem = strlen(lista[i]); 
       } 
     }
     lin2 = lin1+(qtd*2+2);
     col2 = col1+tamMaxItem+4;

   //Monta Tela
     textColor(LIGHTBLUE, _BLACK);
     setlocale(LC_ALL,"C");
     box(lin1,col1,lin2,col2);
     setlocale(LC_ALL,"C");

     //laço das opcões
    linha=lin1+2;
    for(i=0;i<qtd;i++){           
    linhaCol(linha,col1+2);
    printf("%s",lista[i]);
    linha +=2;
    }
     return opc;
}

void cabecalho(int tamanho, char spc[40],char text[40]){  //Cabecalho do programa
	int i;
	
	textColor(LIGHTBLUE, _BLACK);
	printf("\n");
		
	for(i=0;i<=5;i++){
	printf("\t");	
	}
	
	
	printf(" PROGRAMA MENU\n");
	printf("\t1%c Sem. GTI Noturno 2023\t\t\t\t\t\t\t\t\tGRUPO 07",176);
	
	printf("\n\n");
	for(i=0;i<=tamanho;i++){
	printf("\t");	
	}
	printf("%s%c%s%c\n\n",spc,273,text,272);
	
	for(i=0;i<120;i++){
		printf("%c", 278);		
	}	
}


void rodape(){			//Rodape do programa
	int i;
	for(i=0;i<19;i++){
		printf("\n");
	}
	for(i=0;i<120;i++){
		printf("%c", 278);		
	}
	printf("Utilize as setas para %c ou %c utilizar a inteface\n", 280, 281);
	printf("Pressione <ENTER> para acessar e <ESC> para sair a tela");
}
       
submenu1()
{
	int opc;
	do{ 					//looping do submenu 1
        system("cls");
		switch(opc)       
		{
			case 1:   
				cabecalho(3,"        ","Calcular Area de Figuras Planas");        
				circulo();
				getch(); 
			break;
            
     		case 2:
     			cabecalho(3,"        ","Calcular Area de Figuras Planas");
        		losango();
        		getch();
			break;
     
    		case 3:
    			cabecalho(3,"        ","Calcular Area de Figuras Planas");
        		paralelograma();
        		getch();
			break;
          
    		case 4:
    			cabecalho(3,"        ","Calcular Area de Figuras Planas");
        		trapezio();
        		getch();
			break;
     
			case 5:
				cabecalho(3,"        ","Calcular Area de Figuras Planas");
				triangulo();
				getch();
			break;
			
    	}system("cls"); 
    }while(opc=0);					//condição para sair do submenu 1
}
     
submenu2()
{
	int opc;
	do					//looping do submenu 2
    { 
    	
        system("cls");
		switch(opc)       
		{
		
			case 1: 
				cabecalho(3,"     ","Calcular Volume de Solidos Geometricos");
	      		Esfera();
				getch(); 
			break;
            	
     		case 2:
     			cabecalho(3,"     ","Calcular Volume de Solidos Geometricos");
	        	Cone();
				getch();
			break;
     
    		case 3:
    			cabecalho(3,"     ","Calcular Volume de Solidos Geometricos");
				Cilindro();
				getch();
			break;
          
    		case 4:
    			cabecalho(3,"     ","Calcular Volume de Solidos Geometricos");
				Paralelepipedo();
				getch();	
			break;
     
			case 5:
				cabecalho(3,"     ","Calcular Volume de Solidos Geometricos");
				Piramide_quadr();
				getch();
			break;
			
    	}system("cls"); 
    }while(opc=0);					//condição para sair do submenu 2
}

submenu3()
{
	int opc;
	do					//looping do submenu 3
    { 
        system("cls");
		switch(opc)       
		{
			case 1:      
				cabecalho(4,"     ","Conversao de Medidas");     
                Km_m();
                getch();
			break;
            
     		case 2:
     			cabecalho(4,"     ","Conversao de Medidas");
                M_km();
                getch();
			break;
     
    		case 3:
    			cabecalho(4,"     ","Conversao de Medidas");
                M_cm();
                getch();
			break;
			
			case 4:
				cabecalho(4,"     ","Conversao de Medidas");
				J_m();
				getch();	
			break;
			
			case 5:
				cabecalho(4,"     ","Conversao de Medidas");
				H_m();
				getch();
			break;
    	}system("cls"); 
    }while(opc=0);					//condição para sair do submenu 3
}
 
   submenu4(){
	int opc;
	
	do					//looping do submenu 4
    { 
        system("cls");
		switch(opc)       
		{
			case 1:      
				cabecalho(4,"   ","Elevar Numero ao Quadrado");
				p_quadrado();
			    getch();
			break;
            
     		case 2:
     			cabecalho(4,"   ","Elevar Numero ao Quadrado");
			    p_qualquer();
			    getch();
			break;
     
	     	}system("cls"); 
    }while(opc=0);					//condição para sair do submenu 4
}



int main(){

int opc;
char lista[6][40] = {"Calcular Area de Figura Planas", "Calcular Volume de Solidos Geometricos", "Conversao de Medidas", "Elevar Numero a Potencia", "Sortear Numero" , "Creditos"};
setlocale(LC_ALL,"portuguese");

			

	do{
		cabecalho(5,"","Tela Principal");
		rodape();
		opc = menu(9,37,6,lista);
		
	   if (opc==0){
	   break;
	   }
	   
		
			system("cls");
	       switch(opc){
	       	case 1:
	       		cabecalho(3,"        ","Calcular Area de Figuras Planas");
				rodape();
	       		char listasub1[5][40] = {"Area do Circulo", "Area do Losango", "Area do Paralelograma", "Area do Trapezio", "Area do Triangulo"};
				opc = menu(10,37,5,listasub1);
	       		submenu1();
	       	break;
	       		
	       	case 2:
	       		cabecalho(3,"     ","Calcular Volume de Solidos Geometricos");
				rodape();
	       		char listasub2[5][40] = {"Volume da Esfera", "Volume do Cone", "Volume do Cilindro", "Volume do Paralelepipedo", "Volume da Piramide de Base Quadrada"};
				opc = menu(10,37,5,listasub2);
	       		submenu2();
	       			
	       	break;
	
	       	case 3:
	       		cabecalho(4,"     ","Conversao de Medidas");
				rodape();
	       		char listasub3[5][40] = {"Km para Metros", "Metros para Km", "Metros para Centimetros", "Jardas para Metros", "Hectare para Metros"};
				opc = menu(10,45,5,listasub3);
	       		submenu3();	
	       	break;
				
	       	case 4:
	       		cabecalho(4,"   ","Elevar Numero a Potencia");
				rodape();				
	       		char listasub4[2][40] = {"Elevar Numero ao Quadrado", "Pontenciacao de qualquer Numero"};
				opc = menu(13,37,2,listasub4);
	       		submenu4();	
	       	break;
	       	
	       	case 5:
	       		cabecalho(5,"  ","Sortear Numero");
	       		sortear();
	       		system("pause");
	       	break;
			   
	       	case 6:
	       		cabecalho(5,"  ","Creditos");
	       		char listasub5[6][40] = {"Feito por:", "Thiago Petrin Stein Jr", "Caio Zaqueus Motta", "Davi Correia", "Thomas Willian", "Pedro Henrique"};
				opc = credito(10,45,6,listasub5);
				getch();
	       	break;    	
		   }system("cls");
		   
	}while(opc != 13);	
       

  return 0;
}
