// João Lucas Silva de Souza; RA: 2649250

public abstract class Planta {

	private String nome;
	private String grupoPlanta;
	private Ambiente ambiente;
	private double qntAgua;
	private double tamanho;

	public Planta() {
		nome = "";
		grupoPlanta = "";
		tamanho = 0;
		ambiente = new Ambiente();
		qntAgua = 0;
	}
  
  // Polimorfismo sobrecarga
	public Planta(String nome, String grupoPlanta, Ambiente ambiente, double qntAgua, double tamanho) {
		this.nome = nome;
		this.grupoPlanta = grupoPlanta;
		this.ambiente = ambiente;
		this.qntAgua = qntAgua;
		this.tamanho = tamanho;
	}

	public String getNome() {
		return nome;
	}

	public void setNome(String nome) {
		this.nome = nome;
	}

	public String getGrupoPlanta() {
		return grupoPlanta;
	}

	public void setGrupoPlanta(String grupoPlanta) {
		this.grupoPlanta = grupoPlanta;
	}

	public Ambiente getAmbiente() {
		return ambiente;
	}

	public void setAmbiente(Ambiente ambiente) {
		this.ambiente = ambiente;
	}
	
	public void setTamanho(int tamanho) throws TamNegException, TamGrdException{
		if(tamanho <= 0){
			throw new TamNegException();
		}
	
		if(tamanho > 200){
			throw new TamGrdException();
		}
		
	  this.tamanho = tamanho;
	}
	
	public double getTamanho(){
    return tamanho;
  }

	public double getQntAgua() {
		return qntAgua;
	}

	public void setQntAgua(double qntAgua) {
		this.qntAgua += qntAgua;
	}
  
}
