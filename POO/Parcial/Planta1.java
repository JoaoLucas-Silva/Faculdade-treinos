// João Lucas Silva de Souza; RA: 2649250

public abstract class Planta1 {

	private String nome;
	private String grupoPlanta;
	private Ambiente1 ambiente1;
	private double qntAgua;
	private double tamanho;

	public Planta1() {
		nome = "";
		grupoPlanta = "";
		tamanho = 0;
		ambiente1 = new Ambiente1();
		qntAgua = 0;
	}
  
  // Polimorfismo sobrecarga
	public Planta1(String nome, String grupoPlanta, Ambiente1 ambiente1, double qntAgua, double tamanho) {
		this.nome = nome;
		this.grupoPlanta = grupoPlanta;
		this.ambiente1 = ambiente1;
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

	public Ambiente1 getAmbiente() {
		return ambiente1;
	}

	public void setAmbiente(Ambiente1 ambiente1) {
		this.ambiente1 = ambiente1;
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
