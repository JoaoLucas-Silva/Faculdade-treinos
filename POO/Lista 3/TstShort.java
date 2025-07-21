// João Lucas Silva de Souza; RA: 2649250

// Classe Short: métodos - toUnsignedInt(); reverseBytes();

// O método toUnsignedInt(); converte um valor short para um int sem sinal 
// O método reverseBytes(); inverte os bytes de um valor short o retornando com os bytes trocados 

// Fontes:  https://docs.oracle.com/javase/8/docs/api/
// https://www.tutorialspoint.com/java/lang/short_tounsignedint.htm
// https://www.tutorialspoint.com/java/lang/short_reversebytes.htm

public class TstShort{

	public void unsRev(short a, short b){

		 int vSin = Short.toUnsignedInt(a);
       		 System.out.println("\nValor unsigned de "+a+" e: "+vSin);

		 short vRev = Short.reverseBytes(b);
        	 System.out.println("\nValor de " +b+ " com bytes invertidos e: "+vRev);
	}
}
