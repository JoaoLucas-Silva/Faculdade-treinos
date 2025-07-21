// João Lucas Silva de Souza; RA: 2649250

public class TamNegException extends Exception{
	
		Leitura l = new Leitura();
	
		public void negativoTam(){
			System.out.println("\nTamanho deve ser positivo e maior que 0!");
		}
		
		public Planta rePlantaNeg(Planta plantas){
			
			try{
				plantas.setTamanho(Integer.parseInt(l.entDados("\nTamanho negativo ou zero, digite outro: ")));
			}
		
			catch(TamNegException tamNeg){
				tamNeg.negativoTam();
				plantas = tamNeg.rePlantaNeg(plantas);
			}
		
			catch(TamGrdException tamGrd){
				System.out.println("\nEntrou no catch da TamGrdException");
				tamGrd.grandeTam();
				plantas = tamGrd.rePlantaGrd(plantas);
			}
			return plantas;
			
		}
}
