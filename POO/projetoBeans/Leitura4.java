import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

public class Leitura4 {
	
	private static Leitura4 leitUnic; //1º passo
	
	private Leitura4(){} //2º passo
	
	//Method Singleton:
	
	public static Leitura4 geraLeitura(){ //3º passo
		if(leitUnic == null){
			leitUnic = new Leitura4();
		}
		return leitUnic;
	} 
	
	

	public static String entDados(String rotulo){
		
		System.out.println(rotulo);
		InputStreamReader teclado = new InputStreamReader(System.in);
		BufferedReader bufTec = new BufferedReader(teclado);
		String ret = "";
		try{
			ret = bufTec.readLine();
		}
		catch(IOException ioe){
			System.out.println("ERRO de JVM ou RAM");
		}
		return ret;
	}

}