// João Lucas Silva de Souza - RA:2649250

import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

public class Leitura{

	public String entDados(String rotulo){
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
