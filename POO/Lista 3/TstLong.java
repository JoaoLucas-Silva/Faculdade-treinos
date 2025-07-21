// João Lucas Silva de Souza; RA: 2649250

// Classe Long: métodos - bitCount(); toBinaryString();

// O método bitCount(); retorna o número de bits '1' na representação binária de um valor long
// O método toBinaryString(); converte o valor long em binário

// Fontes:  https://docs.oracle.com/javase/8/docs/api/
// https://www.tutorialspoint.com/java/lang/long_bitcount.htm

public class TstLong{

	public void test(long a, long b){
		
        	int cont = Long.bitCount(a);
        	System.out.println("\nNumero de bits 1 em "+a+": "+cont);

        	String binS = Long.toBinaryString(b);
        	System.out.println("\nRepresentacao binaria de "+b+": "+binS);	
	}
}
