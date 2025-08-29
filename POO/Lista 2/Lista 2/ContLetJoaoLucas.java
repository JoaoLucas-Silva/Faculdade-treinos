// João Lucas Silva de Souza; RA:2649250

public class ContLetJoaoLucas{

	public static void main(String arg[]){

		leitura l = new leitura();
        	String frase, letra;
        	int i, contador = 0;

        	frase = l.entDados("\nDigite a frase: ");
        	letra = l.entDados("\nDigite a letra que deseja encontrar na frase: ");

		System.out.print("\n");

        	frase = frase.toLowerCase();
        	letra = letra.toLowerCase();

        	char letraChar = letra.charAt(0);

        	for (i = 0; i < frase.length(); i++){
        		if (frase.charAt(i) == letraChar){
                		contador++;
                		System.out.print("\nPosicao em que aparece a letra escolhida "+i+" ");
            		}
        	}

        	if (contador > 0){
        		System.out.println("\n\nTotal de ocorrencias: " + contador);
        	}else{
        		System.out.println("\n\nLetra nao encontrada.");
        	}
   	}
}
