// João Lucas Silva de Souza; RA: 2649250

// Classe Byte: métodos - decode(); shortValue();

// O método decode(); retorna o valor em byte de uma string em decimal, hexadecimal ou octal; 
// O método shortValue(); transforma e, retorna o valor de Byte para short  

// Fontes:  https://docs.oracle.com/javase/8/docs/api/
// https://www.tutorialspoint.com/java/lang/byte_decode.htm
// https://www.geeksforgeeks.org/byte-shortvalue-method-in-java-with-examples/


public class TstByte{

	public void teste(String a, Byte b){
		
		Byte decodS= Byte.decode(a);
		System.out.println("\nValor da string "+a+" em byte: "+decodS);

		short valor = b.shortValue();
		System.out.println("\nValor do byte " + b + " em short: " + valor);
	}
}
