A=[1,1,1;2,1,-1;3,-1,2];
b=[-4;-3;-3];

[x,kerA]=linsolve(A,-b);

disp(x);
