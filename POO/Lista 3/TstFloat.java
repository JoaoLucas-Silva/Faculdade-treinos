// João Lucas Silva de Souza; RA: 2649250

// Classe Float: métodos - toHexString(); intBitsToFloat();

// O método toHexString(); retorna a representação hexadecimal de um valor float.
// O método intBitsToFloat(); converte um valor inteiro que representa os bits de um float em seu valor float equivalente.

// Fontes:  https://docs.oracle.com/javase/8/docs/api/
// https://www.tutorialspoint.com/java/lang/float_tohexstring.htm
// https://labex.io/tutorials/java-java-float-intbitstofloat-method-117660


public class TstFloat{

	public void hexBit(float a, int vBit){

		String hexaF = Float.toHexString(a);
		System.out.println("\nHexadecimal da string "+a+": "+hexaF);

		float valorB = Float.intBitsToFloat(vBit);
		System.out.println("\nValor float gerado a partir dos bits "+vBit+": "+valorB);
	}
}
