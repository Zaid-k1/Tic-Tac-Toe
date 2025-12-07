#include<stdio.h>

void case1(char a,char b,char c,char d,char e,char f,char g,char h,char i){
	printf("\t %c | %c | %c \n",a,b,c);
	printf("\t___|___|___\n");
	printf("\t %c | %c | %c \n",d,e,f);
	printf("\t___|___|___\n");
	printf("\t %c | %c | %c \n",g,h,i);
	printf("\t   |   |   ");
}

void def(){
	printf("\t a | b | c \n");
	printf("\t___|___|___\n");
	printf("\t d | e | f \n");
	printf("\t___|___|___\n");
	printf("\t g | h | i \n");
	printf("\t   |   |   \n");
}

int main(){
	def();
	printf("\n");
	char player1, player2;
	char a,b,c,d,e,f,g,h,i;
	int u=0;
	while(u!=1){
	
	if(a!='X' && a!='O') a=' ';
	if(g!='X' && g!='O') g=' ';
	if(b!='X' && b!='O') b=' ';
	if(c!='X' && c!='O') c=' ';
	if(d!='X' && d!='O') d=' ';
	if(e!='X' && e!='O') e=' ';
	if(f!='X' && f!='O') f=' ';
	if(h!='X' && h!='O') h=' ';
	if(i!='X' && i!='O') i=' ';
		
	int r;
	do{
	r=0;
	printf("\n");
	printf("Player 1(X): select a box\n");
	scanf(" %c", &player1);
		switch(player1){
			case 'a':
				a='X';
				break;
			case 'b':
				b='X';
				break;
			case 'c':
				c='X';
				break;
			case 'd':
				d='X';
				break;
			case 'e':
				e='X';
				break;
			case 'f':
				f='X';
				break;
			case 'g':
				g='X';
				break;
			case 'h':
				h='X';
				break;
			case 'i':
				i='X';
				break;
			default:
				printf("invalid choice.");
				printf("\n");
				r=1;
				break;
		}
	}while(r==1);
	
	case1(a,b,c,d,e,f,g,h,i);
	printf("\n");
	
	if(a=='X'&&b=='X'&&c=='X'){
	printf("Player1 Won!");
	u=1;
	}
	else if(d=='X'&&e=='X'&&f=='X'){
	printf("Player1 Won!");
	u=1;
	}
	else if(g=='X'&&h=='X'&&i=='X'){
	printf("Player1 Won!");
	u=1;
	}
	else if(a=='X'&&b=='X'&&c=='X'){
	printf("Player1 Won!");
	u=1;
	}
	else if(a=='X'&&d=='X'&&g=='X'){
	printf("Player1 Won!");
	u=1;
	}
	else if(b=='X'&&e=='X'&&h=='X'){
	printf("Player1 Won!");
	u=1;
	}
	else if(c=='X'&&f=='X'&&i=='X'){
	printf("Player1 Won!");
	u=1;
	}
	else if(a=='X'&&e=='X'&&i=='X'){
	printf("Player1 Won!");
	u=1;
	}
	else if(c=='X'&&e=='X'&&g=='X'){
	printf("Player1 Won!");
	u=1;
	}
	
	if(a!=' '&&b!=' '&&c!=' '&&d!=' '&&e!=' '&&f!=' '&&g!=' '&&h!=' '&&i!=' '){
		printf("DRAW!");
		u=1;
	}      
	
	if(u!=1){
	do{
	r=0;
	printf("Player 2(O): select a box\n");
	scanf(" %c", &player2);
		switch(player2){
			case 'a':
				a='O';
				break;
			case 'b':
				b='O';
				break;
			case 'c':
				c='O';
				break;
			case 'd':
				d='O';
				break;
			case 'e':
				e='O';
				break;
			case 'f':
				f='O';
				break;
			case 'g':
				g='O';
				break;
			case 'h':
				h='O';
				break;
			case 'i':
				i='O';
				break;
			default:
				printf("invalid choice.");
				printf("\n");
				r=1;
				break;
		}
	}while(r==1);
	def();
	printf("\n");
	printf("\n");
	case1(a,b,c,d,e,f,g,h,i);
	printf("\n");
	
	if(a=='O'&&b=='O'&&c=='O'){
		printf("Player2 Won!");
		u=1;
	}
	else if(d=='O'&&e=='O'&&f=='O'){
		printf("Player2 Won!");
		u=1;
	}
	else if(g=='O'&&h=='O'&&i=='O'){
		printf("Player2 Won!");
		u=1;
	}
	else if(a=='O'&&b=='O'&&c=='O'){
		printf("Player2 Won!");
		u=1;
	}
	else if(a=='O'&&d=='O'&&g=='O'){
		printf("Player2 Won!");
		u=1;
	}
	else if(b=='O'&&e=='O'&&h=='O'){
		printf("Player2 Won!");
		u=1;
	}
	else if(c=='O'&&f=='O'&&i=='O'){
		printf("Player2 Won!");
		u=1;
	}
	else if(a=='O'&&e=='O'&&i=='O'){
		printf("Player2 Won!");
		u=1;
	}
	else if(c=='O'&&e=='O'&&g=='O'){
		printf("Player2 Won!");
		u=1;
	}
	}
	
}
	return 0;
}
