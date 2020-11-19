%Ejercicio 1: 
%Representar la funcion y=x^3+2x-1 en el dominio de definicion [-10,10]
%Anadir nombre a los ejes de coordenadas y un titulo al grafico. 
x=-10:0.1:10;
y=(x.^3)+2*x-1;
plot(x,y)

clear

%Ejercicio 2:
%Representar las funciones y1=2x-1 y2=x^2+1, y3=-x-2 e y4=2*x^3 
%pudiendo visualizarlas en distintos graficos pero en la misma ventana dividida en cuatro. 
x=-10:0.1:10;
y1=2*x-1;
y2=(x.^2)+1;
y3=-x-2;
y4=2*(x.^3);
subplot(2,2,1),plot(x,y1),title("Grafica y1");
subplot(2,2,2),plot(x,y2),title("Grafica y2");
subplot(2,2,3),plot(x,y3),title("Grafica y3");
subplot(2,2,4),plot(x,y4),title("Grafica y4");

clear 
subplot(1,1,1);

%Ejercicio 3:
%Representar la funcion a trozos: 2x (si x<1), x^2-4x+3 (si 1<=x<=4)
%y 3 (si x>4) como una funcin a trozos.
x=-10:0.1:10;
f=(x<1).*(2*x)+((x>=1)&(x<=4)).*(x.^2-4*x+3)+(x>4).*3;  
plot(x,f)

clear

%Ejercicio 4:
%Utiliza el comando limit para calcular los limites laterales
%de la funcion tangente en el punto pi/2. Que responde Matlab si
%intentamos calcular directamente el limite de la tangente en ese punto?

syms x;
y=tan(x);
%Limites laterales:
limit((y),x,(pi/2),"left")     %+infinito
limit((y),x,(pi/2),"right")    %-infinito
%Limite directo:
limit((y),x,(pi/2))            %lim no existe, los laterales dan +-infinito

clear

%Ejercicio 5:
%Estudia la existencia de asintotas horizontales y verticales
%de f(x)=(3x^2+6x-1)/(x^2+x-3)
syms x;
y=(3*x.^2+6*x-1)/(x.^2+x-3);
%A.V
p=[1,1,-3];
r=roots(p);
limit((y),x,-2.3028,"left")  %= 6824147/549
limit((y),x,-2.3028,"right") %= 6824147/549
limit((y),x,1.3028,"left")   %= 74429147/549
limit((y),x,1.3028,"right")  %= 74429147/549
%No hay A.V

%A.H
limit((y),x,Inf,"left")      %= 3
limit((y),x,-Inf,"right")    %= 3
%Hay A.H en (y = 3)

%Ejercicio 6:
