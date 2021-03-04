clear
clc
printf('Resolución del sistema Ax = b, cuando sea posible, \n');
printf(' por Jacobi \n\n')
n=input('Ingrese el orden del sistema = ');
printf('\n');

h=0
while h==0

printf('Matriz coeficientes del sistema \n\n')
for i=1:n
 for j=1:n
 printf('coeficiente A(%d,%d) = ', i,j ) // Definición de la matriz
 c(i,j)=input(' '); // coeficientes del sistema
 end
end 
printf('\nVector términos independientes \n\n')
for i=1:n
 printf('término b(%d) = ', i ) // Definición del vector de
 c(i,n+1)=input(' '); // términos independientes
end


printf('\Esta es la matriz ampliada del sistema a resolver \n')
disp(c) // c es la matriz ampliada del sistema.
A=c(:,1:n); //Matriz del sistema
b=c(:,n+1);//Término independiente
FUN=0;


TOL=input('Ingrese tolerancia para la parada= '); //Tolerancia para la parada
MAX=input('Ingrese el numero maximo de interaciones=  '); //Número máximo de iteraciones


//MATRICES DEL MÉTODO
disp('\La matriz descomposición es:\n ')
M=diag(diag(A));
disp(M)
N=M-A;

//Matrices L(triangular inferior) y U(trinagular superior)
U = A// U se inicializa como una copia de A
L = eye(n,n) // Inicializa L como identidad
for k = 1:n-1
for j = k+1:n
 L(j,k) = U(j,k)/U(k,k)// Multiplicadores
 U(j,:) = U(j,:) - L(j,k)*U(k,:)   // Fila j = Fila j - L(jk)*Fila k
end
end
printf('Matriz L(triangular inferior)')
disp(L);
printf('Matriz U(triangular superior)')
disp(U);

disp(L*U);

R=-inv(M+L)*U


if det(R)>1 then
    printf('El metodo no se puede usar debido a los criterios de convergencia')
else
    h=1
end
end

 
//Para obtener la siguiente iteración hemos de resolver un sistema diagonal //Mxi+1=Nxi+b=z
it=1; //Contador de iteraciones
x=zeros(n,1); //Valor inicial
tol=1;
while (it<MAX & tol>TOL & FUN==0)

//RESOLUCIÓN DEL SISTEMA
y=x; //Aquí se guardarán el valor de la iteración en curso
z=N*y+b;
for i=1:n
 if M(i,i)==0;
 printf('\n')
 disp('El método no se puede aplicar');
 FUN=1
 else
 x(i)=z(i)/M(i,i);
 end
 end
tol=norm(x-y,2);
it=it+1;
end
printf('La solución obtenida es:\n')
disp(x)

//FUNCIONES PREDEFINIDAS USADAS:
//printf('Texto') //sirve para imprimir un texto por pantalla
//disp(c) //Sirve para mostrar por pantalla el valor de los datos sin formato(Como podria ser una matriz)
//diag(c) //Sirve tanto para crear un vector columna con los elementos diagonales de una matriz, como para cear una matriz diagonal con los elemntos de un vector fila o clumna
//zeros(n, m) //sirve para crear una matriz de ceros con el tamaño que reciba por argumento
//norm(n, m) //sirve para obtener la nomra de una matriz 
