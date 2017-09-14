#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct cliente{
	
	int id_cli;
	char cedula[12];
	char nombre[30];
	char direccion[30]; 
	char telefono[15];
	
}clientes[100],*p_clientes=clientes;

struct producto{
	
	int id_pro;
	char nombre[30];
	int valor;
	
}productos[100],*p_productos=productos;

struct factura{
	
	int id_fac;
	//struct cliente idcli;
	//struct producto idpro[100];
	int cantidad[100];
	int idcliente;
	int idprodu[100];
	int total;
	bool estado;
	
	
}facturas[100],*p_facturas=facturas;

char n,op;
int i,m,b,h,j,cp,acum,acumt,cant_cli=0,cant_pro=0,cant_fac=0;
void crear_clientes();
void listar_clientes(cliente *);
void modificar_clientes();
/////////////////////////////////////////
void crear_productos();
void listar_productos(producto *);
void modificar_productos();

///////////////////////////////
void crear_facturas();
void listar_facturas(factura *);
void modificar_facturas();

int main(){
	
	//int n;
	int opcion;
	
	do{
		
		printf("************MENU************\n");
		printf("1.Crear,listar y Modificar clientes\n");
		printf("2.Crear,listar y Modificar productos\n");
		printf("3.Crear,listar y Modificar facturas\n");
		printf("4.Mostrar todas las facturas\n");
		printf("5.Mostrar todos los clientes\n");
		printf("6.Mostrar todas las facturas generadas por el cliente\n");
		printf("7.Mostrar todos los productos con la cantidad vendida de cada uno\n");
		printf("8.Listar facturas pagadas y sin pagar\n");
		printf("0.Salir\n");
		printf("*****************************\n");
		printf("Ingrese una opcion: ");
		scanf("%d",&opcion);
		system("CLS");
		
		switch(opcion){
			
			char op;
			
		case 1:{
			
			do{
				//system("CLS");
				fflush(stdin);  
				printf("**********Gestion de Clientes*********************\n");
				printf("a.Crear clientes\n");
				printf("b.Listar clientes\n");
				printf("c.Modificar clientes\n");
				printf("s.SALIR\n");
				printf("*************************************\n");
				printf("Ingrese una opcion: ");
				scanf("%c",&op);
				system("CLS");
				
				switch(op){
					
				case 'a':{
					crear_clientes();
					system("pause");
					system("CLS");
					break;
				}
				case 'b':{
						
						listar_clientes(p_clientes);
						system("pause");
						system("CLS");
						break;
					}
				case 'c':{
							
							modificar_clientes();
							system("pause");
							system("CLS");
							break;
						}	
							
				case 's':
							{
								break;  
							}
							
							
				default:
							{
								printf("Error al digitar\n");
								system("pause");
								system("CLS");
								
							}	break;		 
							
							
				}
				
				
			}while(op!='s');
			break;
		}
			
		case 2:{
				
				do{
					
					fflush(stdin);  
					printf("************Gestion de Productos*******************\n");
					printf("a.Crear productos\n");
					printf("b.Listar productos\n");
					printf("c.Modificar productos\n");
					printf("s.SALIR\n");
					printf("*************************************\n");
					printf("Ingrese una opcion: ");
					scanf("%c",&op);
					system("CLS");
					
					switch(op){
						
					case 'a':{
						crear_productos();
						system("pause");
						system("CLS");
						break;
						
					}
					case 'b':{
							listar_productos(p_productos);
							system("pause");
							system("CLS");
							break;
						}
					case 'c':{
								modificar_productos();
								system("pause");
								system("CLS");
								break;
							}	
								
					case 's':
								{
									break;  
								}
								
								
					default:
								{
									printf("Error al digitar\n");
									system("pause");
									system("CLS");
									break;
								}			 
								
								
					}
					
					
				}while(op!='s');
				break;
			}
		case 3:{
					
					do{
						
						fflush(stdin);  
						printf("************Gestionar Facturas*******************\n");
						printf("a.Crear facturas\n");
						printf("b.Listar facturas\n");
						printf("c.Modificar facturas\n");
						printf("s.SALIR\n");
						printf("*************************************\n");
						printf("Ingrese una opcion: ");
						scanf("%c",&op);
						system("CLS");
				
						
						switch(op){
							
						case 'a':{
							crear_facturas();
							break;
							
						}
						case 'b':{
								listar_facturas(p_facturas);
								break; 
								
							}
						case 'c':{
									modificar_facturas();
									break; 
									
									
								}	
									
						case 's':
									{
										break;  
									}
									
									
						default:
									{
										printf("Error al digitar\n");
										break;
									}			 
									
									
						}
						
						
					}while(op!='s');
					break;
				} 	
		case 4:{
						
					}	
		case 5:{
						listar_clientes(p_clientes);
						system("pause");
						system("CLS");
						break;	
					}
		case 6:{
						
					}
		case 7:{
						
					}
		case 8:{
						
					}
		case 0:{
						
					}			
		}
		
	}while(opcion!=0);
	
}

void crear_clientes(){
	
	printf("-----------------Crear Clientes------------------------\n");
	
		do{
			fflush(stdin);
			(p_clientes+cant_cli)->id_cli=cant_cli;
			fflush(stdin);
			printf("Por favor digitar su numero de cedula: ");
			fgets((p_clientes+cant_cli)->cedula,12,stdin);
			printf("Por favor digitar su nombre completo: ");
			fgets((p_clientes+cant_cli)->nombre,30,stdin);
			printf("Por favor digitar la direccion donde reside: ");
			fgets((p_clientes+cant_cli)->direccion,30,stdin);
			printf("Por favor digitar su numero de telefono: ");
			fgets((p_clientes+cant_cli)->telefono,15,stdin);
			printf("\n\n");
			printf("¿Desea agregar otro cliente?\n si=s o no=n: ");
			scanf("%c",&n);
			printf("\n\n");
			cant_cli++;
			
		}while(n!='n');
		
	//}
}
void listar_clientes(cliente *p_clientes){
	
	printf("-----------------Lista de Clientes------------------------\n");	
	for (i=0;i<cant_cli;i++){
		
		fflush(stdin);
		printf("\nId cliente %d",(p_clientes+i)->id_cli);
		printf("\tCedula: %s",(p_clientes+i)->cedula);
		printf("\tNombre:  %s",(p_clientes+i)->nombre);
		printf("\tDireccion: %s ",(p_clientes+i)->direccion);
		printf("\tTelefono: %s",(p_clientes+i)->telefono);
		printf("\n\n");
	}
	
}	
void modificar_clientes(){
	
	listar_clientes(p_clientes);
	printf("-----------------Modificar Clientes------------------------\n");	
	int var_cli;
	
	printf("Por favor Digite el ID a Modificar: ");
	scanf("%d",&var_cli);
	
	if(var_cli>cant_cli){
		printf("Id invalido\n");
		printf("Intente de nuevo\n");
		system("pause");
	}
	
	for(int j=0;j<=cant_cli;j++){
	//if(var_cli<=cant_cli){
		
	
		if((p_clientes+j)->id_cli == var_cli){
			
			fflush(stdin);
			printf("Por favor digitar el nuevo numero de cedula: ");
			fgets((p_clientes+j)->cedula,12,stdin);
			printf("Por favor digitar el nuevo nombre completo: ");
			fgets((p_clientes+j)->nombre,30,stdin);
			printf("Por favor digitar la nueva direccion donde reside: ");
			fgets((p_clientes+j)->direccion,30,stdin);
			printf("Por favor digitar su nuevo numero de telefono: ");
			fgets((p_clientes+j)->telefono,15,stdin);
			printf("\n\n");
			break;
		}
	}
	
}

void crear_productos(){
	
	printf("-----------------Crear productos------------------------\n");
	
		do{
			fflush(stdin);
			(p_productos+cant_pro)->id_pro=cant_pro;
			fflush(stdin);
			printf("Por favor digitar el nombre del producto: ");
			fgets((p_productos+cant_pro)->nombre,30,stdin);
			printf("Por favor digitar el valor del producto: ");
			scanf("%d",&(p_productos+cant_pro)->valor);
			fflush(stdin);  
			printf("\n\n");
			printf("¿Desea agregar otro producto?\n si=s o no=n: ");
			scanf("%c",&n);
			
			printf("\n\n");
			cant_pro++;
		}while(n!='n');
		
	//}
}
void listar_productos(producto *p_productos){
	printf("-----------------Lista de productos------------------------\n");	
	
	for (i=0;i<cant_pro;i++){
		
		fflush(stdin);
		printf("\nId producto:%d \n",(p_productos+i)->id_pro);
		printf("Nombre: %s",(p_productos+i)->nombre);
		printf("Valor: %d",(p_productos+i)->valor); 
		printf("\n\n");
	}
	
}	

void modificar_productos(){
	
	listar_productos(p_productos);
	int var_pro;
	
	printf("-----------------Modificar de productos------------------------\n");
	
	printf("Por favor Digite el Id del producto a modificar: ");
	scanf("%d",&var_pro);
	
	if(var_pro>cant_pro){
		printf("Id invalido\n");
		printf("Intente de nuevo\n");
		system("pause");
	}
	
	for(int j=0;j<=cant_pro;j++){
		
		if((p_productos+j)->id_pro == var_pro){
			
			fflush(stdin);
			printf("Por favor digitar el nuevo nombre del producto: ");
			fgets((p_productos+j)->nombre,30,stdin);
			printf("Por favor digitar el nuevo valor del producto: ");
			scanf("%d",&(p_productos+j)->valor);
			fflush(stdin);
			printf("\n\n");
			break;
		}
	}
	
}

void crear_facturas(){
	
	printf("-----------------Crear Facturas------------------------\n");
	
	
	//for(i=0;i<cant_fac;i++){
	
	do{
		
		//int cp;
		char capro;
		fflush(stdin);
		(p_facturas+cant_fac)->id_fac=cant_fac;
		fflush(stdin);
		printf("Por favor digitar el ID del cliente que desea agregar a la factura: ");
		scanf("%d",&(p_facturas+cant_fac)->idcliente);
		fflush(stdin);
		do{
			
			printf("Por favor digitar el ID del producto que desea agregar a la factura: ");
			scanf("%d",&(p_facturas+cant_fac)->idprodu[cp]);
			fflush(stdin);
			printf("Por favor digitar la cantidad del producto: ");
			scanf("%d",&(p_facturas+cant_fac)->cantidad[cp]);
			fflush(stdin);
			
			printf("\n\n");
			printf("¿Desea agregar otro producto?\n si=s o no=n: ");
			scanf("%c",&capro);
			cp++;
		}while(capro!='n');
		
		
		fflush(stdin);
		printf("\n\n");
		printf("¿Desea agregar otra factura?\n si=s o no=n: ");
		scanf("%c",&n);
		
		printf("\n\n");
		cant_fac++;
		
		printf("\n\n");
	}while(n!='n');
	//}
}
void listar_facturas(factura *p_facturas){
	
	printf("-----------------Listar Facturas------------------------\n");
	
	for (i=0;i<cant_fac;i++){
		
		fflush(stdin);
		//for (j=0;j<cant_pro;j++){
			
		
		printf("\nId factura:%d \n",(p_facturas+i)->id_fac);
		printf("Id cliente:%d\n",(p_facturas+i)->idcliente);
		int idcli = (p_facturas+i)->idcliente;
		printf("Nombre del cliente: %s\n",(p_clientes + idcli)->nombre);
		for(j=0;j<cp;j++){
			
		printf("Id del producto %d\n",(p_facturas+i)->idprodu[j]);
		int idproducto = (p_facturas+i)->idprodu[j];
		printf("Nombre del producto: %s\n",(p_productos + idproducto)->nombre);
		printf("cantidad total del producto: %d\n",(p_facturas+i)->cantidad[j]);
		printf("\n\n");
		}
		(p_facturas+cant_fac)->total=0;
		for(int m=0;m<cp;m++){
			
			acum=(p_facturas+i)->idprodu[m]*(p_facturas+i)->cantidad[m];
			(p_facturas+i)->total=acum+(p_facturas+i)->total;
		}
		printf("Valor total de la factura: %d",(p_facturas+i)->total); 
		//printf("Por favor digitar el estado del producto: ");
		printf("\n\n");
		//}
	}
	
}	

void modificar_facturas(){
	
	int var_fac;
	
	printf("Por favor Digite el Id de la factura a modificar: ");
	scanf("%d",&var_fac);
	
	printf("dato: %d",var_fac);
	
	for(int j=0;j<=cant_fac;j++){
		
		if((p_facturas+j)->id_fac == var_fac){
			
			fflush(stdin);
			printf("Por favor digitar el nuevo ID de la factura: ");
			scanf("%d",&(p_facturas+i)->id_fac);
			printf("Por favor digitar la nueva cantidad de producto: ");
			scanf("%d",(p_facturas+i)->cantidad);
			printf("Por favor digitar el nuevo total de la factura: ");
			scanf("%d",&(p_facturas+i)->total);
			
			printf("\n\n");
			
		}else{
			
			printf("\nError al digitar el ID de la factura\n");
			break;
			//printf("Error al digitar la Cedula\n");
			
		}
	}
	
}		





