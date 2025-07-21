// João Lucas Silva de Souza; RA:2649250

public class VetorInversoJoaoLucas{
	public static void main(String arg[]){
	
		Leitura l = new Leitura();
		int vtr[], i, tam = 5;

		vtr = new int[tam];

		for(i = 0; i < vtr.length; i++){
			vtr[i] = Integer.parseInt(l.entDados("\nDigite o valor da posicao: "+i+" do vetor"));
		}

		for(i = vtr.length - 1; i >= 0 ; i--){
			System.out.println("Vetor pos "+i+" tem valor: "+vtr[i]);
		}
	}
}