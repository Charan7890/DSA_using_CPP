import java.util.Scanner;
public class Main
{
    // static variables which are accessible inside this class.
    public static int check[]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
    public static int z=0;
    static String playerName1 = "";
    static String playerName2 = "";
	
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
		char board[]={'0','0','0','0','0','0','0','0','0'};
    	int size = 9;
    	char player1='1',player2='2';
    	show(board,size);
    	System.out.print("Enter player-1 Name:");
    	playerName1 = sc.next();
    	System.out.print("Enter player-2 Name:");
    	playerName2 = sc.next();
    	nonConditionalCheckingCases(board,size,player1,player2);
    	board_Game(board,size,player1,player2);
	}
	
	// global array to check whether the positions are allocated or not.
	public static int repeatedOrNot(int position){
	int its_exist=0;
	int count=0;
	int pos;
	Scanner sc = new Scanner(System.in);
	while(true){
	for(int i=0;i<9;i++){
		if(check[i]==position){
			its_exist=1;
			break;
		}
		else{
			count++;
		}
	}
	if(count==9){
		return position;
	}
	if(its_exist==1){
		System.out.print("enter another position:");
		pos = sc.nextInt();
		repeatedOrNot(pos);
	}}
    }
    
    // To show the Tic-tac-toe board
public static void show(char []ptr_board,int size){
	for(int i=1;i<=size;i++){
		if(i%3==0){
			System.out.printf("%c",ptr_board[i-1]);
			System.out.printf("\n");
		}
		else{
			System.out.printf("%c ",ptr_board[i-1]);
		}
	}
    }
    
    // Condition Checking for player-1
public static int check_board_for_player1(char board[],int size,char player1){
	if((board[0]==player1)&&(board[1]==player1)&&(board[2]==player1)){
		return 1;
	}
	else if((board[3]==player1)&&(board[4]==player1)&&(board[5]==player1)){
		return 1;
	}
	else if((board[6]==player1)&&(board[7]==player1)&&(board[8]==player1)){
		return 1;
	}
	else if((board[0]==player1)&&(board[3]==player1)&&(board[6]==player1)){
		return 1;
	}
	else if((board[1]==player1)&&(board[4]==player1)&&(board[7]==player1)){
		return 1;
	}
	else if((board[2]==player1)&&(board[5]==player1)&&(board[8]==player1)){
		return 1;
	}
	else if((board[0]==player1)&&(board[4]==player1)&&(board[8]==player1)){
		return 1;
	}
	else if((board[2]==player1)&&(board[4]==player1)&&(board[6]==player1)){
		return 1;
	}
	else{
		return 0;
	}
}

    
    // Condition checking for player-2

public static int check_board_for_player2(char board[],int size,char player2){
	if((board[0]==player2)&&(board[1]==player2)&&(board[2]==player2)){
		return 1;
	}
	else if((board[3]==player2)&&(board[4]==player2)&&(board[5]==player2)){
		return 1;
	}
	else if((board[6]==player2)&&(board[7]==player2)&&(board[8]==player2)){
		return 1;
	}
	else if((board[0]==player2)&&(board[3]==player2)&&(board[6]==player2)){
		return 1;
	}
	else if((board[1]==player2)&&(board[4]==player2)&&(board[7]==player2)){
		return 1;
	}
	else if((board[2]==player2)&&(board[5]==player2)&&(board[8]==player2)){
		return 1;
	}
	else if((board[0]==player2)&&(board[4]==player2)&&(board[8]==player2)){
		return 1;
	}
	else if((board[2]==player2)&&(board[4]==player2)&&(board[6]==player2)){
		return 1;
	}
	else{
		return 0;
	}
}


    //Non conditional cases are 1 & 2. Since, checking starts from 3,4,5...9.
public static void nonConditionalCheckingCases(char board[],int size,char player1,char player2){
	int position;
	int check_starts=0;
	Scanner sc = new Scanner(System.in);
	if(check_starts==0){
		System.out.printf(playerName1+"(1):-enter the position you want to insert your character:");
		position = sc.nextInt();
		check[z]=position;
		z++;
		//position=nonModificationInBoard(modify,mod_size);
		board[position-1]=player1;
		show(board,size);
		System.out.printf(playerName2+"(2):-enter the position you want to insert your character:");
		position = sc.nextInt();
		position = repeatedOrNot(position);
		check[z]=position;
		z++;
		board[position-1]=player2;
		show(board,size);
	}
}

// Code for players Shuffling 
public static void board_Game(char board[],int size,char player1,char player2){
	int position;
	int special_checking=0;
	Scanner sc = new Scanner(System.in);
	for(int i=3;i<=size;i++){
		if(i%2!=0){
			System.out.printf(playerName1+"(1):-enter the position you want to insert your character:");
			position = sc.nextInt();
			if(position==-1){
			    special_checking=1;
			    break;
			}
			position = repeatedOrNot(position);
			check[z]=position;
			z++;
			board[position-1]=player1;
			show(board,size);
			int returned_value1 = check_board_for_player1(board,size,player1);
			if(returned_value1==1){
				special_checking =1;
				System.out.printf(playerName1+"(1) won the game\n");
				break;
			}		
		}
		else{
			System.out.printf(playerName2+"(2):-enter the position you want to insert your character:");
			position = sc.nextInt();
			if(position==-1){
			    special_checking=1;
			    break;
			}
			position = repeatedOrNot(position);
			check[z]=position;
			z++;
			board[position-1]=player2;
			show(board,size);
			int returned_value2 = check_board_for_player2(board,size,player2);
			if(returned_value2==1){
				special_checking=1;
				System.out.printf(playerName2+"(2) won the game\n");
				break;
			}	
		}
	}
	// Special case to find the tie of a game.
	if(special_checking==0){
		System.out.printf("The game has tie between you!!");
	}
}

}





