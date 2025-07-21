public class LetraFrase{

	public static void main(String arg[]){

		Leitura l = new Leitura();
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
                		System.out.print(i + " ");
            		}
        	}

        	if (contador > 0){
        		System.out.println("\n\nTotal de ocorrencias: " + contador);
        	}else{
        		System.out.println("\n\nLetra nao encontrada.");
        	}
   	}
}
