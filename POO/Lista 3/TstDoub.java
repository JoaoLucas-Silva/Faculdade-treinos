// João Lucas Silva de Souza; RA: 2649250

// Classe Double: métodos - isFinite(); max();

// O método isFinite(); retorna true se o valor double for finito 
// O método max(); retorna o maior valor entre dois doubles

// Fontes:  https://docs.oracle.com/javase/8/docs/api/
// https://how.dev/answers/what-is-doubleisfinite-in-java

public class TstDoub{

	public void finMax(double a, double b, double c){
		
		boolean doubleT = Double.isFinite(a);
		System.out.println("\nValor "+a+" e finito: "+doubleT);
		
		a = a / 0;
		doubleT = Double.isFinite(a);
		System.out.println("\nValor agora divido por 0 e finito: "+doubleT);
		
		double max = Double.max(b, c);
		System.out.println("\nO maior valor entre os dois e: "+max);
	}
}
