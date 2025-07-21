// João Lucas Silva de Souza; RA:2649250

public class G1JoaoLucas{

	public static void main(String arg[]){
		
		Leitura l = new Leitura();
		
		int a, b, result, op;

		a = Integer.parseInt(l.entDados("\nInforme o valor de a: "));
		b = Integer.parseInt(l.entDados("\nInforme o valor de b: "));

		System.out.println("\nMenu de opcoes:\n1 - Somar\n2 - Multiplicar\n3 - Subtrair\n4 - Dividir");
		op = Integer.parseInt(l.entDados("\nOpcao: "));
		
		switch(op){

		case 1:
			result = a + b;
			System.out.println("\nO valor da soma e: "+result);
			break;
		
		case 2:
			result = a * b;
			System.out.println("\nO valor da multiplicacao e: "+result);
			break;
		
		case 3:
			result = a - b;
			System.out.println("\nO valor da subtracao e: "+result);
			break;
		
		case 4:
			result = a / b;
			System.out.println("\nO valor da divisao e: "+result);
			break;
		default:
			System.out.println("Opcao invalida");
			break;
		}
	}
}