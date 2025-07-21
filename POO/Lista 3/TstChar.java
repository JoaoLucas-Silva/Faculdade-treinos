// João Lucas Silva de Souza; RA: 2649250

// Classe Character: métodos - compare(); digit();

// O método compare(); compara dois valores char numéricos Unicode
// o método digit(); retorna o valor de um caractere em uma determinada base

// Fontes:  https://docs.oracle.com/javase/8/docs/api/
// https://www.baeldung.com/java-compare-characters
// https://learn.microsoft.com/pt-br/dotnet/api/java.lang.character.compare?view=net-android-34.0&viewFallbackFrom=xamarin-android-sdk-12
// https://www.scaler.com/topics/how-to-compare-character-in-java/

public class TstChar{

	public void compBase(char a, char b, char c, int bs){
		
		int comparacao = Character.compare(a,b);
		System.out.println("\nValor da comparacao entre o caractere: '"+a+"', e o caractere: '"+b+"', e de: "+comparacao);
		
		int valorBase = Character.digit(c, bs);
		System.out.println("Valor do caractere "+c+" na base "+bs+" e: "+valorBase);
	}
}
