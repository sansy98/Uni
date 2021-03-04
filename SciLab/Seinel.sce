clear
clc
function TriLManual = triLManualInversa(matriz)
    printf(' TRIM Manual inversa \n\n')
    n = size(matriz,1)
    TriLManual = zeros(n,n)
    for j=1:n
        TriLManual(j,j) = 1/matriz(j,j)
        for i=j+1:n
            TriLManual(i,j) = (-1/matriz(i,i))*matriz(i,1:i-1)*TriLManual(1:i-1,j)
        end
    end
endfunction

function TriLManual = triLManual(matriz)
        printf(' TRIM Manual \n\n')
    n = size(matriz,1)
    TriLManual = zeros(n,n)
    for j=1:n
        for i=j+1:n
            TriLManual(i,j) = matriz(i,j)
        end
    end
endfunction

printf('Resolución del sistema Ax = b, cuando sea posible, \n');
printf(' por Gauss Seidel \n\n')
n=input('Ingrese el orden del sistema = ');
printf('\n');
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
vectorAmpliada=c(:,n+1);//Término independiente


FUN=0;

//Tolerancia
printf('\Tolerancia \n')
cerosTolerancia =input('Ingrese el nº de decimales de la tolerancia = '); 
TOLERANCIA=10^(-cerosTolerancia); 


//Maximas iteraciones
printf('\Iteraciones \n')
MAX_ITERACIONES=input('Ingrese el número máximo de iteraciones = '); 

  //calculo de (L + D)^(-1)
    //LManual = triLManualInversa(A)
        
    printf('\Triangulo superior \n')
    trianguloU = triu(A,1)
    disp(trianguloU)
        
        
    printf('\Triangulo inferior \n')
    trianguloL = triLManual(A)
    //trianguloL = tril(A,1) // Error scilab triangulo inferior
    disp(trianguloL)
    
    
    GS = (-1)*trianguloL*trianguloU

    al = trianguloL*vectorAmpliada


//MATRICESDEL MÉTODO

disp('\La matriz descomposición es:\n ')
M=diag(diag(A));
disp(M)
N=M-A;


    x0=[1,0.9,1]'
    
    solucionAprox = GS*x0 + al
    
    tol = norm(solucionAprox - x0, 2); //Contador de tolerancia
    residuo = norm(vectorAmpliada - A*solucionAprox, 2)
    
    
    it=1; //Contador de iteraciones
    while (it<=MAX_ITERACIONES & tol>=TOLERANCIA & FUN==0)
        //RESOLUCIÓN DEL SISTEMA
        solucionAprox_aux = solucionAprox
        solucionAprox = GS*solucionAprox + al
        tol = norm(solucionAprox - solucionAprox_aux, 2)
        residuo = norm(vectorAmpliada - A*solucionAprox, 2)
        
        //tol=norm(vectorX-y,2); //0,00001
        //tol=norm(vectorX-y,2); //0,00001
        it=it+1;
    end
    
     if tol < TOLERANCIA then
        disp("||x_k - x_k-1|| < E: la norma de la diferencia entre los vectores es menor que la tolerancia")
        disp(" ")
    else
        disp("k>M: el número de iteraciones ha superado el máximo")
        disp(" ")
    end 
printf('La solución obtenida es:\n')
disp(A) 
printf('\n\n')
disp(residuo)
printf('\n\n')
disp(x0)
printf('\n\n')
disp(tol)


    
  
