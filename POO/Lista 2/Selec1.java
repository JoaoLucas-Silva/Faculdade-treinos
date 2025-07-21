// João Lucas Silva de Souza; RA:2649250

public class Selec1{

	public static void main(String arg[]){
		int a = Integer.parseInt(arg[0]), b = Integer.parseInt(arg[1]);

		if(a > b){
			System.out.println("O valor de a e maior que o de b");
		}else if(a < b){
			System.out.println("O valor de a e menor que o de b");
		}else{
			System.out.println("O valor de a e igual que o de b");
		}
	}
}