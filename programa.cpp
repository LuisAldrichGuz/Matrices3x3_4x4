#include <iostream>
#include <math.h>
#include <conio.h> 
#include <windows.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_BLUE    "\x1b[34m" //ESTO DEFINE LOS VALORES DE LOS COLORES PARA IMPRIMIR.
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"


int titulo(); //IMPRIME EL TITULO
int matriz(); // IMPRIME LAS FORMAS DE LAS MATRICES
int menu(); //ES EL MENU GENERAL
int M3x3();//PROCEDIMIENTO PARA LA SOLUCION DE LA MATRIZ DE 3X3
int M4x4();//PROCEDIMIENTO PARA LA SOLUCION DE LA MATRIZ DE 3X3
int main(int argc, char** argv) //USO EL MAIN PARA DARLE FORMATO AL PROGRAMA Y ABRIR EL PROCEDIMIENTO LLAMADO MENU.
{
	system("mode con: cols=160 lines=50"); //ABRE LA CONSOLA CON UN TAMAÑO PREDETERMINADO
	system("color 02");
	menu();
}
int menu() 
{
	char op;
	int aux;
	system("cls");
	printf(ANSI_COLOR_RED"\n\n\t\t\t\t  /$$$$$$  /$$       /$$           /$$           /$$       \n\t\t\t\t /$$__  $$| $$      | $$          |__/          | $$       \n\t\t\t\t| $$    $$| $$  /$$$$$$$  /$$$$$$  /$$  /$$$$$$$| $$$$$$$  \n\t\t\t\t| $$$$$$$$| $$ /$$__  $$ /$$__  $$| $$ /$$_____/| $$__  $$ \n\t\t\t\t| $$__  $$| $$| $$  | $$| $$  |__/| $$| $$      | $$  | $$ \n\t\t\t\t| $$  | $$| $$| $$  | $$| $$      | $$| $$      | $$  | $$ \n\t\t\t\t| $$  | $$| $$|  $$$$$$$| $$      | $$|  $$$$$$$| $$  | $$ \n\t\t\t\t|__/  |__/|__/ _______/|__/       |__/  _______/|__/  |__/ \n"ANSI_COLOR_GREEN);
	titulo();
	error:
	matriz();
	printf("\n\tEscoje el tipo de Matriz a resolver:\n");
	printf("\n\t\t1:Matriz de 3 x 3");
	printf("\n\t\t2:Matriz de 4 x 4");
	printf("\n\t\t3:Salir del programa");
	scanf(" %c",&op);

	switch (op)
	{
		case ('1'):
			M3x3();
			break;
		case ('2'):
			M4x4();
			break;
		case ('3'):
			system("cls");
			printf(ANSI_COLOR_RED"\n\n\t\t\t\t  /$$$$$$  /$$       /$$           /$$           /$$       \n\t\t\t\t /$$__  $$| $$      | $$          |__/          | $$       \n\t\t\t\t| $$    $$| $$  /$$$$$$$  /$$$$$$  /$$  /$$$$$$$| $$$$$$$  \n\t\t\t\t| $$$$$$$$| $$ /$$__  $$ /$$__  $$| $$ /$$_____/| $$__  $$ \n\t\t\t\t| $$__  $$| $$| $$  | $$| $$  |__/| $$| $$      | $$  | $$ \n\t\t\t\t| $$  | $$| $$| $$  | $$| $$      | $$| $$      | $$  | $$ \n\t\t\t\t| $$  | $$| $$|  $$$$$$$| $$      | $$|  $$$$$$$| $$  | $$ \n\t\t\t\t|__/  |__/|__/ _______/|__/       |__/  _______/|__/  |__/ \n"ANSI_COLOR_GREEN);
			printf("\n\n\t\t\t\t   El programa se cerrara en unos segundos, ADIOS!!!\n\n\n\n\n\n\n\n\n\n\n\n\n");
			Sleep(2000);
			exit(0);
			break;
		default:
			system("cls");
			titulo();	
			printf(ANSI_COLOR_RED"\n\n\t\t  Opci%cn no disponible!!!",162);
			printf("\n\t\t%c",200);
			for(aux=0; aux<24; aux++)
			{	
				printf("%c",205);
			}
			printf("%c\n"ANSI_COLOR_GREEN,188);
			goto error;
			break;
	}	
}

//AQUI EMPIEZAN LAS MATRICES DE 3X3
int M3x3()
{
	system("cls");
	titulo();
	char op2;
	int aux;	
	float a11,a12,a13,a21,a22,a23,a31,a32,a33,b1,b2,b3;
	float detA,detAx1,detAx2,detAx3,x1,x2,x3;
	char R;
	line2:
	printf(ANSI_COLOR_CYAN"\n\tMatriz de 3 x 3 seleccionada:\n"ANSI_COLOR_GREEN);
	printf(ANSI_COLOR_BLUE"\n\t\tPara la ecuacion No.1\n\t"ANSI_COLOR_GREEN);
	printf("\n\tIngrese el valor de a11:");
	scanf("%f",&a11);
	printf("\n\tIngrese el valor de a12:");
	scanf("%f",&a12);
	printf("\n\tIngrese el valor de a13:");
	scanf("%f",&a13);
	printf("\n\tIngrese el valor del lado derecho de la ecuacion:");
	scanf("%f",&b1);
	system("cls");
	titulo();

	printf(ANSI_COLOR_CYAN"\n\tMatriz de 3 x 3 seleccionada:\n"ANSI_COLOR_GREEN);
	printf(ANSI_COLOR_BLUE"\n\t\tPara la ecuacion No.2\n\t"ANSI_COLOR_GREEN);
	printf("\n\tIngrese el valor de a21:");
	scanf("%f",&a21);
	printf("\n\tIngrese el valor de a22:");
	scanf("%f",&a22);
	printf("\n\tIngrese el valor de a23:");
	scanf("%f",&a23);
	printf("\n\tIngrese el valor del lado derecho de la ecuacion:");
	scanf("%f",&b2);
	system("cls");
	titulo();

	printf(ANSI_COLOR_CYAN"\n\tMatriz de 3 x 3 seleccionada:\n"ANSI_COLOR_GREEN);
	printf(ANSI_COLOR_BLUE"\n\t\tPara la ecuacion No.3\n\t"ANSI_COLOR_GREEN);
	printf("\n\tIngrese el valor de a31:");
	scanf("%f",&a31);
	printf("\n\tIngrese el valor de a32:");
	scanf("%f",&a32);
	printf("\n\tIngrese el valor de a33:");
	scanf("%f",&a33);
	printf("\n\tIngrese el valor del lado derecho de la ecuacion:");
	scanf("%f",&b3);
	system("cls");
	titulo();
	/*
	a11=-4.14;
	a12=8.04;
	a13=-3.58;

	a21=9.41;
	a22=-4.24;
	a23=-5.12;

	a31=5.12;
	a32=3.49;
	a33=-8.76;

	b1=45.46;
	b2=-59.67;
	b3=-15.43;
	*/
	//ESTOS SON PARA COMPROBAR RAPIDO Y DEBERIAN DAR ESTOS RESULTADOS ------> x1=-3  x2=5  x3=2
	
    printf("\n\tEl sistema que se ingreso es:\n\n");
	printf("\n\t%c%0.4fx1\t+\t%0.4fx2\t+\t%0.4fx3\t%c=\t%0.4fx1\t  (1)",186,a11,a12,a13,186,b1);
	printf("\n\t%c%0.4fx1\t+\t%0.4fx2\t+\t%0.4fx3\t%c=\t%0.4fx1\t  (2)",186,a21,a22,a23,186,b2);
	printf("\n\t%c%0.4fx1\t+\t%0.4fx2\t+\t%0.4fx3\t%c=\t%0.4fx1\t  (3)",186,a31,a32,a33,186,b3);
	
	detA=a11*a22*a33-a13*a22*a31+a21*a32*a13-a23*a32*a11+a31*a12*a23-a33*a12*a21;
	detAx1=b1*a22*a33-a13*a22*b3+b2*a32*a13-a23*a32*b1+b3*a12*a23-a33*a12*b2;
	detAx2=a11*b2*a33-a13*b2*a31+a21*b3*a13-a23*b3*a11+a31*b1*a23-a33*b1*a21;
	detAx3=a11*a22*b3-b1*a22*a31+a21*a32*b1-b2*a32*a11+a31*a12*b2-b3*a12*a21;
	
	x1=detAx1/detA;
	x2=detAx2/detA;
	x3=detAx3/detA;
	
	printf(ANSI_COLOR_CYAN"\n\n\tLos valores de las determinantes son:" );
	printf(ANSI_COLOR_GREEN"\n\t|A|=%.04f \t   |Ax1|=%.04f \t |Ax2|=%.04f \t |Ax3|=%.04f",detA,detAx1,detAx2,detAx3);
	printf(ANSI_COLOR_CYAN"\n\n\tLa soluci%cn del sistema es : ",162);
    printf(ANSI_COLOR_GREEN"\n\t x1=%0.4f \t x2=%0.4f \t x3=%0.4f\n\n\n\t",x1,x2,x3);
    
	if(detA==0)
	{
		system("cls");
		titulo();
		printf(ANSI_COLOR_RED"\n\n\tNo aplica por este metodo! Verifica tus valores\n\n\t"ANSI_COLOR_GREEN);	
	}
	system("pause");
	
	error1:
	printf(ANSI_COLOR_CYAN"\n\t\tQue desea hacer ahora?\n"ANSI_COLOR_GREEN);
	printf("\n\t\t1:Para volver a ingresar un sistema de 3 x 3\n");
	printf("\t\t2:Regresar al Men%c\n",163);
	scanf(" %c",&op2);
	switch (op2)
	{
	case ('1'):
		goto line2;
		break;
	case ('2'):
		menu();
		break;
	default:
		system("cls");
		titulo();
		printf(ANSI_COLOR_RED"\n\n\t\t  Opci%cn no disponible!!!",162);
		printf("\n\t\t%c",200);
		for(aux=0; aux<24; aux++)
		{	
			printf("%c",205);
		}
		printf("%c\n"ANSI_COLOR_GREEN,188);	
		goto error1;
		break;	
	}
    
}
//AQUI EMPIEZAN LAS MATRICES DE 4X4
int M4x4()
{
	system("cls");
	titulo();
	float a11, a12, a13, a14,a21, a22, a23, a24,a31, a32, a33, a34,a41, a42, a43, a44,b1,b2,b3,b4,detA,detAx1,detAx2,detAx3,detAx4,x1,x2,x3,x4;
	char op1,aux;
	line1:	
	printf(ANSI_COLOR_CYAN"\n\tMatriz de 4 x 4 seleccionada:\n"ANSI_COLOR_GREEN);
	printf(ANSI_COLOR_BLUE"\n\t\tPara la ecuacion No.1\n\t"ANSI_COLOR_GREEN);
	printf("\n\tIngrese el valor de a11:");
	scanf("%f",&a11);
	printf("\n\tIngrese el valor de a12:");
	scanf("%f",&a12);
	printf("\n\tIngrese el valor de a13:");
	scanf("%f",&a13);
	printf("\n\tIngrese el valor de a43:");
	scanf("%f",&a14);
	printf("\n\tIngrese el valor del lado derecho de la ecuacion:");
	scanf("%f",&b1);
	system("cls");
	titulo();

	printf(ANSI_COLOR_CYAN"\n\tMatriz de 4 x 4 seleccionada:\n"ANSI_COLOR_GREEN);
	printf(ANSI_COLOR_BLUE"\n\t\tPara la ecuacion No.2\n\t"ANSI_COLOR_GREEN);
	printf("\n\tIngrese el valor de a21:");
	scanf("%f",&a21);
	printf("\n\tIngrese el valor de a22:");
	scanf("%f",&a22);
	printf("\n\tIngrese el valor de a23:");
	scanf("%f",&a23);
	printf("\n\tIngrese el valor de a43:");
	scanf("%f",&a24);
	printf("\n\tIngrese el valor del lado derecho de la ecuacion:");
	scanf("%f",&b2);
	system("cls");
	titulo();

	printf(ANSI_COLOR_CYAN"\n\tMatriz de 4 x 4 seleccionada:\n"ANSI_COLOR_GREEN);
	printf(ANSI_COLOR_BLUE"\n\t\tPara la ecuacion No.3\n\t"ANSI_COLOR_GREEN);
	printf("\n\tIngrese el valor de a31:");
	scanf("%f",&a31);
	printf("\n\tIngrese el valor de a32:");
	scanf("%f",&a32);
	printf("\n\tIngrese el valor de a33:");
	scanf("%f",&a33);
	printf("\n\tIngrese el valor de a43:");
	scanf("%f",&a34);
	printf("\n\tIngrese el valor del lado derechho de la ecuacion:");
	scanf("%f",&b3);
	system("cls");
	titulo();

	printf(ANSI_COLOR_CYAN"\n\tMatriz de 4 x 4 seleccionada:\n"ANSI_COLOR_GREEN);
	printf(ANSI_COLOR_BLUE"\n\t\tPara la ecuacion No.4\n\t"ANSI_COLOR_GREEN);
	printf("\n\tIngrese el valor de a41:");
	scanf("%f",&a41);
	printf("\n\tIngrese el valor de a42:");
	scanf("%f",&a42);
	printf("\n\tIngrese el valor de a43:");
	scanf("%f",&a43);
	printf("\n\tIngrese el valor de a43:");
	scanf("%f",&a44);
	printf("\n\tIngrese el valor del lado derechho de la ecuacion:");
	scanf("%f",&b4);
	system("cls");
	titulo();

	/*
	a11=3.2;
	a12=-5.7;
	a13=-1.3;
	a14=1.1;
	a21=-3.8;
	a22=3.2;
	a23=0;
	a24=-7.2;
	a31=0;
	a32=2.8;
	a33=4.3;
	a34=1.5;
	a41=-7.5;
	a42=0;
	a43=4.3;
	a44=3.1;
	b1=-66.0625;
	b2=54.3000;
	b3=26.2875;
	b4=76.7875; 
	*/
	//ESTOS SON PARA COMPROBAR RAPIDO Y DEBERIAN DAR ESTOS RESULTADOS ------> x1=-9  x2=6  x3= 2.25  x4= 0.125
	
	printf("\n\tEl sistema que se ingreso es:\n\n");
	printf("\n\t%c%0.4fx1\t+\t%0.4fx2\t+\t%0.4fx3\t+\t%0.4fx3\t%c=\t%0.4fx1\t  (1)",186,a11,a12,a13,a44,186,b1);
	printf("\n\t%c%0.4fx1\t+\t%0.4fx2\t+\t%0.4fx3\t+\t%0.4fx3\t%c=\t%0.4fx1\t  (2)",186,a21,a22,a23,a44,186,b2);
	printf("\n\t%c%0.4fx1\t+\t%0.4fx2\t+\t%0.4fx3\t+\t%0.4fx3\t%c=\t%0.4fx1\t  (3)",186,a31,a32,a33,a44,186,b3);
	printf("\n\t%c%0.4fx1\t+\t%0.4fx2\t+\t%0.4fx3\t+\t%0.4fx3\t%c=\t%0.4fx1\t  (4)",186,a41,a42,a43,a44,186,b3);
	
	
	detA=(1.0/(a11*a11))*((a11*a22-a21*a12)*(a11*a33-a31*a13)*(a11*a44-a41*a14)+(a11*a32-a31*a12)*(a11*a43-a41*a13)*(a11*a24-a21*a14)+(a11*a42-a41*a12)*(a11*a23-a21*a13)*(a11*a34-a31*a14)-(a11*a42-a41*a12)*(a11*a33-a31*a13)*(a11*a24-a21*a14)-(a11*a22-a21*a12)*(a11*a43-a41*a13)*(a11*a34-a31*a14)-(a11*a32-a31*a12)*(a11*a23-a21*a13)*(a11*a44-a41*a14));
	detAx1=(1.0/(b1*b1))*((b1*a22-b2*a12)*(b1*a33-b3*a13)*(b1*a44-b4*a14)+(b1*a32-b3*a12)*(b1*a43-b4*a13)*(b1*a24-b2*a14)+(b1*a42-b4*a12)*(b1*a23-b2*a13)*(b1*a34-b3*a14)-(b1*a42-b4*a12)*(b1*a33-b3*a13)*(b1*a24-b2*a14)-(b1*a22-b2*a12)*(b1*a43-b4*a13)*(b1*a34-b3*a14)-(b1*a32-b3*a12)*(b1*a23-b2*a13)*(b1*a44-b4*a14));
	detAx2=(1.0/(a11*a11))*((a11*b2-a21*b1)*(a11*a33-a31*a13)*(a11*a44-a41*a14)+(a11*b3-a31*b1)*(a11*a43-a41*a13)*(a11*a24-a21*a14)+(a11*b4-a41*b1)*(a11*a23-a21*a13)*(a11*a34-a31*a14)-(a11*b4-a41*b1)*(a11*a33-a31*a13)*(a11*a24-a21*a14)-(a11*b2-a21*b1)*(a11*a43-a41*a13)*(a11*a34-a31*a14)-(a11*b3-a31*b1)*(a11*a23-a21*a13)*(a11*a44-a41*a14));
	detAx3=(1.0/(a11*a11))*((a11*a22-a21*a12)*(a11*b3-a31*b1)*(a11*a44-a41*a14)+(a11*a32-a31*a12)*(a11*b4-a41*b1)*(a11*a24-a21*a14)+(a11*a42-a41*a12)*(a11*b2-a21*b1)*(a11*a34-a31*a14)-(a11*a42-a41*a12)*(a11*b3-a31*b1)*(a11*a24-a21*a14)-(a11*a22-a21*a12)*(a11*b4-a41*b1)*(a11*a34-a31*a14)-(a11*a32-a31*a12)*(a11*b2-a21*b1)*(a11*a44-a41*a14));
	detAx4=(1.0/(a11*a11))*((a11*a22-a21*a12)*(a11*a33-a31*a13)*(a11*b4-a41*b1)+(a11*a32-a31*a12)*(a11*a43-a41*a13)*(a11*b2-a21*b1)+(a11*a42-a41*a12)*(a11*a23-a21*a13)*(a11*b3-a31*b1)-(a11*a42-a41*a12)*(a11*a33-a31*a13)*(a11*b2-a21*b1)-(a11*a22-a21*a12)*(a11*a43-a41*a13)*(a11*b3-a31*b1)-(a11*a32-a31*a12)*(a11*a23-a21*a13)*(a11*b4-a41*b1));
	x1=detAx1/detA;	
	x1=detAx1/detA;
	x2=detAx2/detA;
	x3=detAx3/detA;
	x4=detAx4/detA;
	printf(ANSI_COLOR_CYAN"\n\n\tLos valores de las determinantes son:" );
	printf(ANSI_COLOR_GREEN"\n\t|A|=%.04f \t   |Ax1|=%.04f \t |Ax2|=%.04f \t |Ax3|=%.04f |Ax4|=%.04f",detA,detAx1,detAx2,detAx3,detAx4 );
	printf(ANSI_COLOR_CYAN"\n\n\tLa soluci%cn del sistema es : ",162);
    printf(ANSI_COLOR_GREEN"\n\t x1=%0.4f \t x2=%0.4f \t x3=%0.4f x4=%0.4f\n\n\n\t",x1,x2,x3,x4);
	if(detA==0)
	{
		system("cls");
		titulo();
		printf(ANSI_COLOR_RED"\n\n\tNo aplica por este metodo! Verifica tus valores\n\n\t"ANSI_COLOR_GREEN);	
	}
	system("pause");
	
	error1:
	printf(ANSI_COLOR_CYAN"\n\t\tQue desea hacer ahora?\n"ANSI_COLOR_GREEN);
	printf("\n\t\t1:Para volver a ingresar un sistema de 4 x 4\n");
	printf("\t\t2:Regresar al Men%c\n",163);
	scanf(" %c",&op1);
	switch (op1)
	{
	case ('1'):
		goto line1;
		break;
	case ('2'):
		menu();
		break;
	default:
		system("cls");
		titulo();
		printf(ANSI_COLOR_RED"\n\n\t\t  Opci%cn no disponible!!!",162);
		printf("\n\t\t%c",200);
		for(aux=0; aux<24; aux++)
		{	
			printf("%c",205);
		}
		printf("%c\n"ANSI_COLOR_GREEN,188);	
		goto error1;
		break;	
	}	
}

//ESTE PROCEDIMIENTO ES EL TITULO DEL PROGRAMA SOLO ES ESTETICO
int titulo()
{
	int aux;
	printf(ANSI_COLOR_GREEN"\n\t%c",201);
	for(aux=0; aux<=105; aux++)
	{	
		printf("%c",205);
	}
	printf("%c\n",187);
	
	printf("\t%c\t\t\t\tPrograma que resuelve una Matriz de 3x3 y 4x4   \t\t\t   %c",186,186);
	printf("\n\t%c  Por el m%ctodo de determinantes a partir de las siguientes formas (Si el programa se ve mal agrandarlo)  %c",186,130,186);
	printf("\n\t%c",200);
	
	for(aux=0; aux<=105; aux++)
	{	
		printf("%c",205);
	}
	printf("%c\n",188);	
}
int matriz()
{
	//ESTAS SON LAS MATRICES DEL PRIMER MENU DEL PROGRAMA, SOLO POR AMOR AL ARTE AJAJAJAJ
	//,218,196,196,196,196,196,191    TECHO
	//,192,196,196,196,196,196,217    PISO
	//,179  PARED
	printf(ANSI_COLOR_RESET"\t                                                              %c%c%c%c%c%c                            %c%c%c\n",218,196,196,196,196,196,196,196,191);
	printf("\t             %c%c%c%c%c                 %c%c%c%c%c                      %c                                   %c\n",218,196,196,196,196,196,196,196,196,191,179,179);
	printf("\t             %c                         %c                      %c  %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c  %c\n",179,179,179,    218,196,196,196,196,196,191,   218,196,196,196,196,196,191,   218,196,196,196,196,196,191,    218,196,196,196,196,196,191,   179);	
	printf("\t             %c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c                      %c  %ca11x1%c %ca12x2%c %ca13x3%c %ca14x4%c  %c\n",179,    218,196,196,196,196,196,191,   218,196,196,196,196,196,191,   218,196,196,196,196,196,191,   179,179,179,179,179,179,179,179,179,179,179);
	printf("\t             %c %ca11x1%c %ca12x2%c %ca13x3%c %c                      %c  %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c  %c\n",179,179,179,179,179,179,179,179,179,192,196,196,196,196,196,217,192,196,196,196,196,196,217,192,196,196,196,196,196,217,192,196,196,196,196,196,217,179);
	printf("\t             %c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c                      %c                                   %c\n",179,192,196,196,196,196,196,217,192,196,196,196,196,196,217,192,196,196,196,196,196,217,179,179,179);
	printf("\t FORMA 1:    %c                         %c             FORMA 2: %c  %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c  %c\n",179,179,179,218,196,196,196,196,196,191,218,196,196,196,196,196,191,218,196,196,196,196,196,191,218,196,196,196,196,196,191,179);
	printf("\t             %c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c                      %c  %ca21x1%c %ca22x2%c %ca23x3%c %ca24x4%c  %c\n",179,218,196,196,196,196,196,191,218,196,196,196,196,196,191,218,196,196,196,196,196,191,179,179,179,179,179,179,179,179,179,179,179);
	printf("\t Matrix      %c %ca21x1%c %ca22x2%c %ca23x3%c %c             Matrix   %c  %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c  %c\n",179,179,179,179,179,179,179,179,179,192,196,196,196,196,196,217,192,196,196,196,196,196,217,192,196,196,196,196,196,217,192,196,196,196,196,196,217,179);
	printf("\t   de        %c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c               de     %c                                   %c\n",179,192,196,196,196,196,196,217,192,196,196,196,196,196,217,192,196,196,196,196,196,217,179,179,179);
	printf("\t 3 x 3       %c                         %c             4 x 4    %c  %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c  %c\n",179,179,179,218,196,196,196,196,196,191,218,196,196,196,196,196,191,218,196,196,196,196,196,191,218,196,196,196,196,196,191,179);
	printf("\t             %c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c                      %c  %ca31x1%c %ca32x2%c %ca33x3%c %ca34x4%c  %c\n",179,218,196,196,196,196,196,191,218,196,196,196,196,196,191,218,196,196,196,196,196,191,179,179,179,179,179,179,179,179,179,179,179);
	printf("\t             %c %ca31x1%c %ca32x2%c %ca33x3%c %c                      %c  %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c  %c\n",179,179,179,179,179,179,179,179,179,192,196,196,196,196,196,217,192,196,196,196,196,196,217,192,196,196,196,196,196,217,192,196,196,196,196,196,217,179);
	printf("\t             %c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c                      %c                                   %c\n",179,192,196,196,196,196,196,217,192,196,196,196,196,196,217,192,196,196,196,196,196,217,179,179,179);
	printf("\t             %c                         %c                      %c  %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c  %c\n",179,179,179,218,196,196,196,196,196,191,218,196,196,196,196,196,191,218,196,196,196,196,196,191,218,196,196,196,196,196,191,179);
	printf("\t             %c%c%c%c%c                 %c%c%c%c%c                      %c  %ca41x1%c %ca42x2%c %ca43x3%c %ca44x4%c  %c\n",192,196,196,196,196,196,196,196,196,217,179,179,179,179,179,179,179,179,179,179);
	printf("\t                                                              %c  %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c %c%c%c%c%c%c%c  %c\n",179,192,196,196,196,196,196,217,192,196,196,196,196,196,217,192,196,196,196,196,196,217,192,196,196,196,196,196,217,179);
	printf("\t                                                              %c                                   %c\n",179,179);
	printf("\t                                                              %c%c%c%c%c                         %c%c%c%c%c%c%c\n"ANSI_COLOR_GREEN,192,196,196,196,196,196,196,196,196,196,196,217);

}
