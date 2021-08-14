#include <stdio.h>
#include <stdlib.h>

#define BLK "\e[0;30m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define WHT "\e[0;37m"

int main(void){
	system("clear");
		printf(
		YEL"\t\n Dodclick -> Arrumando erros... aguarde!\n"
		"\t Inicie este programa em modo root!\n\n"
		);

		
				printf(YEL"\n\t Atualizando Mirrors... aguarde!\n\n");
				
				system(
				"git clone https://github.com/MarktwainSTDLL/mirrorlist-arch.git; cd mirrorlist-arch; sudo mv mirrorlist /etc/pacman.d/; sudo pacman -Syyu"
				);
				
		printf(YEL"\n\t Habilitando OS-PROBER para encontrar outros sistemas no grub!\n\n");
			system("sudo echo GRUB_DISABLE_OS_PROBER=false >> /etc/default/grub && sudo update-grub");
			
				printf(YEL"\t\n Reiniciando, após a reinicialização, verifique se o GRUB voltou a funcionar!\n\n");
				
					int rboot;
					printf("Você me permite reiniciar seu computador? (1/0):", "\n\n");
					scanf("%i", &rboot);
					
					if(rboot == 1){
						printf("\tReiniciando...\n"); 
						system("reboot");
						} else {
							printf("Ok, não irei reiniciar seu computador!");
							system("exit");
						}
				
	
	return 0;
}
