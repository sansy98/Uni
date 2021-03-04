clear
clc
printf('Resolución del sistema Ax = b por \n');
printf('Eliminación Gaussiana básica\n\n')
n=input('Ingrese el orden del sistema = ');
printf('\n');
printf('Matriz coeficientes del sistema \n\n')
h=0;
while h==0
  for i=1:n
   for j=1:n
    printf('coeficiente A(%d,%d) = ', i,j ) // Definición de la matriz
    c(i,j)=input(' '); // coeficientes del sistema
   end
  end
  if rank(c)<n then
      printf("ERROR el determinante de la matriz es 0 introduce una nueva\n")
  else
      h=1
  end
end
printf('\nVector términos independientes \n\n')
for i=1:n
 printf('término b(%d) = ', i ) // Definición del vector de
 c(i,n+1)=input(' '); // términos independientes
end
printf('\Esta es la matriz ampliada del sistema a resolver\n')
disp(c) // c es la matriz ampliada del sistema.
P=eye(n,n); //Matriz permutación
//FASE ELIMINACIÓN

for j=1:(n-1) //El pivote está en la posición (j,j)
    for i=(j+1):n
        c(i,j)=c(i,j)/c(j,j);
        c(i,j+1:n+1)=c(i,j+1:n+1)-c(i,j)*c(j,j+1:n+1);
    end
end

//FASE SOLUCIÓN
x(n)=c(n,n+1)/c(n,n); // Cálculo de la última incógnita
for i=n-1:-1:1
 Suma=0;
 for j=i+1:n
 Suma=Suma+c(i,j)*x(j);
 end
 x(i)=(c(i,n+1)-Suma)/c(i,i); // Cálculo del resto de las incógnitas
end
printf('\nSolución \n\n')
for i=1:n
 printf('x(%d) = %10.6f \n',i,x(i)); // Presentación de resultados
end
U=c(:,1:n); // Matriz U
printf('\n U \n')
disp(U)
printf('\n P \n')
disp(P)
