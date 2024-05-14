 %  _      _   ___  ___  ___    _ _____ ___  ___ ___ ___    __  __   _ _____ _      _   ___ 
 % | |    /_\ | _ )/ _ \| _ \  /_\_   _/ _ \| _ \_ _/ _ \  |  \/  | /_\_   _| |    /_\ | _ )
 % | |__ / _ \| _ \ (_) |   / / _ \| || (_) |   /| | (_) | | |\/| |/ _ \| | | |__ / _ \| _ \
 % |____/_/ \_\___/\___/|_|_\/_/ \_\_| \___/|_|_\___\___/  |_|  |_/_/ \_\_| |____/_/ \_\___/
                                                                                                                                                                                                                        
clearvars; close all

%% Risposta allo scalino

S       = 69,6;   % sovraelongazione percentuale 
T_ass   = 4;   % tempo di assestamento

xi      = 0,1147;   % calcolo smorzamento
omega_n = 7,1031;   % calcolo pulsazione naturale
mu      = 0,005;   % calcolo guadagno statico

%% Creazione funzione di trasferimento

s = tf('s');         % variabile s
G = 0*s;             % calcolo G(s)
bode(G);grid;        % diagramma di bode

%% Risposta in frequenza

% ------ punti da inserire a mano --------
pulsazioni_campionate   = [ 1  10  100];                % pulsazioni testate [rad/s]  
moduli_campionati       = [0 0 0];                      % moduli campionati [/]       
moduli_campionati_dB    = 20*log10(moduli_campionati);
fasi_campionate         = [0 0 0];                      % fasi campionate [deg]        


% ----- preparazione diagramma di bode --------------
pulsazioni    = logspace(0,2,1e5); 
[modulo,fase] = bode(G,pulsazioni);                                     
fase = fase(:);
modulo_dB    = 20*log10(modulo(:));


% GRAFICO DIAGRAMMA DI BODE
subplot(2,1,1);
semilogx(pulsazioni,modulo_dB,'-b','LineWidth',2,'DisplayName','funzione di trasferimento'); grid on; hold on;
semilogx(pulsazioni_campionate,moduli_campionati_dB,'or','LineWidth',2,'DisplayName','punti campionati'); grid on;
xlim([1 100]); 
xlabel('pulsazione [rad/s]'); ylabel('modulo [dB]');
set(gca,'FontSize',12);
l=legend;
set(l,'Location','SouthWest');

subplot(2,1,2);
semilogx(pulsazioni,fase,'-b','LineWidth',2,'DisplayName','funzione di trasferimento'); grid on; hold on;
semilogx(pulsazioni_campionate,fasi_campionate,'or','LineWidth',2,'DisplayName','punti campionati'); grid on;
xlim([1 100]); 
xlabel('pulsazione [rad/s]'); ylabel('fase [deg]');
set(gca,'FontSize',12);


