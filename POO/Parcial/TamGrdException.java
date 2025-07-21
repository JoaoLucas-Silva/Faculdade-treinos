// João Lucas Silva de Souza; RA: 2649250

public class TamGrdException extends Exception{
	
		Leitura l = new Leitura();
	
		public void grandeTam(){
			System.out.println("\nTamanho deve ser menor de 200cm!");
		}
		
		public Planta rePlantaGrd(Planta plantas){
			
			try{
				plantas.setTamanho(Integer.parseInt(l.entDados("\nTamanho grande demais, digite outro: ")));
			}
		
			catch(TamGrdException tamGrd){
				tamGrd.grandeTam();
				plantas = tamGrd.rePlantaGrd(plantas);
			}
		
			catch(TamNegException tamNeg){
				System.out.println("\nEntrou no catch da TamNegException");
				tamNeg.negativoTam();
				plantas = tamNeg.rePlantaNeg(plantas);
			}
			return plantas;
			
		}
}
