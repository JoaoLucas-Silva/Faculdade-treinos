// João Lucas Silva de Souza; RA:2649250

public class ParImpar{

	public static void main(String arg[]){
		leitura l = new leitura();
		
		int valor;

		valor = Integer.parseInt(l.entDados("\nInforme um valor para saber se e par ou impar: "));
		
		if(valor % 2 == 0){
			System.out.println("\nO valor "+valor+" e par");
		}else{
			System.out.println("\nO valor "+valor+" e impar");
		}
	}
}