clear all
N = 1e8;  %  1*10^6, numero totale di prove

V = randi(3,N,1);  % genero un vettore colonna di N numeri casuali da 1 a 3

n1 = sum(V==1);   % numero di volte in cui il premio è nel pacco 1

S = ones(N,1);   % scelta iniziale del concorrente (pacco 1)

% simulo la strategia
S(V==1) = 1 + randi(2,n1,1);  % se V è 1 allora viene scoperto il pacco 2 o il pacco 3 con la stessa prob

S(V==2) = 2; % se V==2, viene aperto il p3 e scelgo il pacco 2
S(V==3) = 3; % se V==3, viene aperto il p2 e scelgo il pacco 3

% calcolo una stima della prob

P = sum(S==V)/N;
format long;
P

