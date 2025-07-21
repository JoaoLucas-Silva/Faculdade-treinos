// João Lucas Silva de Souza; RA: 2649250

// Classe Boolean: métodos - logicalAnd(); getBoolean;

// O método logicalAnd(); ira retornar o resultado de dois valores booleanos com o operador &&
// o método getBoolean(); irá retornar true se e somente se o valor passado como argumento estiver definido em variavel do sistema como true

// Fontes:  https://docs.oracle.com/javase/8/docs/api/
// https://wldomiciano.com/a-classe-boolean-do-java/
// https://www.geeksforgeeks.org/field-getboolean-method-in-java-with-examples/

public class TstBool{

	public void logicGet(boolean a, boolean b, String c){
		boolean aComB = Boolean.logicalAnd(a, b);
		System.out.println("\nValor de a && b: "+aComB);

		boolean getB = Boolean.getBoolean(c);
		System.out.println("Valor da string "+c+": "+getB);
	}
}