// João Lucas Silva de Souza; RA:2649250

public class MatrizInt{
	public static void main(String arg[]){

		leitura l = new leitura();
		int mat[][], i, j, lin = 3, col = 3;

		mat = new int[lin][col];

		for(i = 0; i < mat.length; i++){
			for(j = 0; j < mat.length; j++){
				mat[i][j] = Integer.parseInt(l.entDados("\nDigite o valor da linha: "+i+" coluna "+j+" da matriz"));
			}
		}


		for(i = mat.length - 1; i >= 0; i--){
			for(j = mat.length - 1; j >= 0; j--){
				System.out.println("Matriz lin "+i+" coluna "+j+" tem valor: "+mat[i][j]);
			}
		}
	}
}