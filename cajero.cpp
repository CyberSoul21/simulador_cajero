#include <cstdlib>
#include <iostream>
#include<conio.h>

using namespace std;

int main(int argc, char *argv[])
{
    //Asignacion de variables utilizadas durante el programa
    int  saldo,dinero, back, cantidadusuario, retiro, total, opcion,ahorro,credito,meses,cupo,consulta,pregunta,nuevocupo,pagarcuotas;
    int a,b;
   
    //Valor que ingresara el usuario para para simular cajero, este saldo inicial servira para las tres opciones del menu  "tipo de cuenta"
    cout<<"Ingrese Saldo para empezar simulacion de cajero: "<<endl;
    cin>>dinero;
    saldo = dinero;
    ahorro = dinero;
    cupo = dinero;
    //inicia ciclo do while que imprimira como minimo una vez el menu insertar, salir preguntandole 
    //si desea regresar al menu despues de terminar cada proceso
    do{
	    cout<<"\n------Bienvenido Cajero WJ------------"<<endl;
	    cout<<"\n1.->Insertar Tarjeta"<<endl;
	    cout<<"2.->Salir"<<endl;
	    cin>>a;
	    //si a el de menu principal es = a 1 imprimira menu secundario de lo contrario sale e imprime mensaje de despedida
	    if (a==1)
	    {  
	        
	        cout<<"***Elija Tipo de cuenta***"<<endl;
	        cout<<"\n1.->Cuenta Bancaria."<<endl;
	        cout<<"2.->Cuenta de ahorros."<<endl;
	        cout<<"3.->Tarjeta de credito.  \n "<<endl;
	        cin>>b;
	        //evalua el tipo de cuenta
	        if(b==1)
	        {
	            cout<<"\n<<<<Cuenta bancaria.>>>>"<<endl;
	            cout<<"\nSu saldo es de: "<<"$"<<saldo<<endl;
	            cout<<"Seleccione cuanto desea retirar:"<<endl;
	            cout<<"\n1.->$20000"<<endl;
	            cout<<"2.->$50000"<<endl;
	            cout<<"3.->$60000"<<endl;
	            cout<<"4.->$100000"<<endl;
	            cout<<"5.->$200000"<<endl;
	            cout<<"6.->$400000"<<endl;
	            cout<<"7.->INGRESAR UN VALOR DIFERENTE  \n "<<endl;
	            cin>>opcion;
	            switch(opcion)
	            {
	                case 1 : total = saldo - 20000; break; 
	                case 2 : total = saldo - 50000; break;
	                case 3 : total = saldo - 60000; break;
	                case 4 : total = saldo - 100000; break;
	                case 5 : total = saldo - 200000; break;
	                case 6 : total = saldo - 400000; break;
	                default : cout<<"\nDigite por favor el valor que desea retirar:"<<endl; cin>>cantidadusuario; total = saldo - cantidadusuario;
	                
	                
	            }
	            if(total<0)
	            {
	                cout<<"Lo sentimos solo tiene: "<<"$"<<saldo<<endl;
	                cout<<"\n1.->Regresar Menu principal"<<endl;
	                cout<<"2.->Salir del cajero "<<endl;
	                cin>>back;
	            }
	            else
	            {
	            retiro = saldo-total;
	            //imprime menu de retorno al menu principal o salir si es 1 se evalua y vuelve al menu principal
	            cout<<"\nUsted retiro: "<<"$"<<retiro<<" Le quedan: "<<"$"<<total<<endl;
	            cout<<"1.->Regresar al Menu principal"<<endl; 
	            cout<<"2.->Salir"<<endl;
	            cin>>back;
	            if(back==1)
	            
	            {
	                saldo=total;
	            }
	            }
	        }
	        else if(b==2)
	        {   
	            cout<<"\n<<<<Cuenta de ahorro.>>>>"<<endl;
	            cout<<"\nSu ahorro esta en: "<<"$"<<ahorro<<endl;
	            cout<<"\nSeleccione cuanto desea retirar"<<endl;
	            cout<<"\n1.->$20000"<<endl;
	            cout<<"2.->$50000"<<endl;
	            cout<<"3.->$60000"<<endl;
	            cout<<"4.->$100000"<<endl;
	            cout<<"5.->$200000"<<endl;
	            cout<<"6.->$400000"<<endl;
	            cout<<"7.->INGRESAR UN VALOR DIFERENTE  \n "<<endl;
	            cin>>opcion;
	           switch(opcion)
	            {
	                case 1 : total = ahorro - 20000; break; 
	                case 2 : total = ahorro - 50000; break;
	                case 3 : total = ahorro - 60000; break;
	                case 4 : total = ahorro - 100000; break;
	                case 5 : total = ahorro - 200000; break;
	                case 6 : total = ahorro - 400000; break;
	                default : cout<<"\nDigite el valor que desea retirar:"<<endl; cin>>cantidadusuario; total = ahorro - cantidadusuario;
	                
	                
	            }
	            if(total<0)
	            {
	                cout<<"Lo sentimos solo tiene "<<"$"<<ahorro<<endl;
	                cout<<"1.->Regresar al Menu principal "<<endl;
	                cout<<"2.->Salir del cajero "<<endl;
	                cin>>back;
	            }
	            else
	            {
	            retiro = ahorro-total;
	            
	            cout<<"\nUsted retiro: "<<"$"<<retiro<<" Le queda un Total de: "<<"$"<<total<<endl;
	            cout<<"\n1.->Regresar al menu principal"<<endl; 
	            cout<<"2.->Salir"<<endl;
	            cin>>back;
	            if(back==1)
	            
	            {
	                ahorro=total;
	            }
	            }
	            
	            
	        }
	        else if(b==3)
	        {
	           do{
	               cout<<"---Bienvenido a credito su banco amigo---"<<endl;
	               cout<<"\n 1.->Consultar cupo de su tarjeta de credito. "<<endl;
	               cout<<" 2.->Consultar y retirar. "<<endl;
	               cout<<" 3.->Salir. "<<endl;
	               cin>>consulta;
	               if (consulta==1)
	               {
	                  cout<<"\n Su cupo esta en: "<<"$"<<cupo<<endl;
	                  cout<<"\n 1.->Retornar menu de credito"<<endl;
	                  cout<<" 2.->Salir"<<endl;
	                  cin>>pregunta;
	               }
	               else if(consulta==2)
	               {
	                  cout<<"\n Su cupo esta en: "<<"$"<<cupo<<endl;    
	                  cout<<"\n ¿Cuanto desea retirar? "<<endl;
	                  cin>>credito;
	                  if(credito>cupo)
	                  {
	                     cout<<"\n Lo sentimos el valor que solicita excede su cupo. Intente de nuevo"<<endl;
	                     cout<<"\n 1.->Retornar menu de credito"<<endl;
	                     cout<<" 2.->Salir"<<endl;
	                     cin>>pregunta;
	                   }
	                   else
	                   {
	                     cout<<"\n ¿Cuantas cuotas? " <<endl;
	                     cout<<"\n 1. 1 mes " <<endl;
	                     cout<<" 2. 3 meses " <<endl;
	                     cout<<" 3. 6 mes " <<endl;
	                     cout<<" 4. 12 meses " <<endl;
	                     cout<<" 5. Ingresar cuota de manejo "<<endl;
	                     cin>>meses;
	                     switch(meses)
	                     {
	                       case 1 : pagarcuotas = credito/1; break;
	                       case 2 : pagarcuotas = credito/3; break;
	                       case 3 : pagarcuotas = credito/6; break;
	                       case 4 : pagarcuotas = credito/12; break;
	                       default : cin>>meses; pagarcuotas = credito/meses; break;
	                     }
	                     nuevocupo = cupo-credito; 
	                     cout<<"\n Usted ha retirado: "<<"$"<<credito<<endl;
	                     cout<<" Le queda un cupo de: "<<"$"<<nuevocupo<<endl;
	                     cout<<" Quedara pagando cuotas de: "<<"$"<<pagarcuotas<<" a "<<meses<<" meses"<<endl;
	                   }
	               }  
	               else
	               {
	                    cout<<" +--Gracias por elegir credito su banco amigo.--+"<<endl;
	                }
	       
	        
	            }while(pregunta==1);//este ciclo es paara evaluar el sub menu de la tarjeta de credito
	             cout<<"\n1.->Regresar al menu principal "<<endl; 
	             cout<<"2.->Salir"<<endl;
	             cin>>back;
	             if(back==1)
	            
	             {
	               cupo=nuevocupo;//si el retorno al menu principal es ciertotoma el nuevo valor y trabajara de ahi en adelante con ese valor  
	             }  
	        
	        }
	            
	        
	    }
	   
	    else
	    {
	       cout<<"\n ¡Gracias por utilizar cajeros WJ su aliado a la hora de retirar dinero!"<<endl; 
	    }
	        
    }while(back==1);
    cout<<"\n ¡Gracias por utilizar cajeros WJ su aliado a la hora de retirar dinero!"<<endl;
    
    getch();
    return 0;
}
