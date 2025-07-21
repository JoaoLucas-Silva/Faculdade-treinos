// João Lucas Silva de Souza; RA: 2649250

// Classe Integer: métodos - floatValue(); hashCode();

// O método floatValue(); transforma e, retorna o valor de um Integer para float
// O método hashCode(); irá retornar o hashCode do Integer

// Fontes:  https://docs.oracle.com/javase/8/docs/api/
// https://www.geeksforgeeks.org/integer-floatvalue-method-in-java/
// https://codegym.cc/groups/posts/java-hashcode


public class TstInt{

	public void floatHash(Integer a, Character b){

		float valor = a.floatValue();
		System.out.println("\nValor do Integer "+a+" em float: "+valor);

		int valorHash = b.hashCode();
		System.out.println("Valor da letra "+b+" em hashcode: "+valorHash);
	}
}
