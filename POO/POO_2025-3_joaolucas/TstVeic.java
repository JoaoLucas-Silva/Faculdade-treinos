// João Lucas Silva de Souza - RA:2649250

public class TstVeic{

	public static void main(String arg[]){
		
		leitura l = new leitura();
		
		System.out.println("========================================");
		System.out.println("Cadastro dos veiculos: passeio e carga");
		System.out.println("========================================");
		
		Carga carga = new Carga();
		System.out.println("\n--------------------------------------");
		System.out.println("VEICULO DE CARGA");
		System.out.println("--------------------------------------");
		carga.setPlaca(l.entDados("\nInserir Placa do Veiculo: "));
		carga.setMarca(l.entDados("\nInserir Marca do Veiculo: "));
		carga.setModelo(l.entDados("\nInserir Modelo do Veiculo: "));
		carga.setCor(l.entDados("\nInserir Cor do Veiculo: "));
		carga.setQtdRodas(Integer.parseInt(l.entDados("\nInserir Qtd de Rodas do Veiculo: ")));
		carga.setVelocMax(Integer.parseInt(l.entDados("\nInserir Velocidade Max do Veiculo: ")));
		System.out.println("\nMOTOR");
		carga.getMotor().setQtdPistoes(Integer.parseInt(l.entDados("\nInserir Qtd de Pistoes do Motor do Veiculo: ")));
		carga.getMotor().setPotencia(Integer.parseInt(l.entDados("\nInserir Potencia do Motor do Veiculo: ")));
		carga.setDataCadastro(l.entDados("\nInserir de Data do Cadastro do Veiculo: "));
		carga.setTara(Integer.parseInt(l.entDados("\nInserir Tara do Veiculo: ")));
		carga.setCargaMax(Integer.parseInt(l.entDados("\nInserir Carga Max do Veiculo: ")));

		Passeio passeio = new Passeio();
	
		System.out.println("\n----------------------------------------");
		System.out.println("VEICULO DE PASSEIO");
		System.out.println("----------------------------------------");
		passeio.setPlaca(l.entDados("\nInserir Placa do Veiculo: "));
		passeio.setMarca(l.entDados("\nInserir Marca do Veiculo: "));
		passeio.setModelo(l.entDados("\nInserir Modelo do Veiculo: "));
		passeio.setCor(l.entDados("\nInserir Cor do Veiculo: "));
		passeio.setQtdRodas(Integer.parseInt(l.entDados("\nInserir Qtd de Rodas do Veiculo: ")));
		passeio.setVelocMax(Integer.parseInt(l.entDados("\nInserir Velocidade Max do Veiculo: ")));
		System.out.println("\nMOTOR");
		passeio.getMotor().setQtdPistoes(Integer.parseInt(l.entDados("\nInserir Qtd de Pistoes do Motor do Veiculo: ")));
		passeio.getMotor().setPotencia(Integer.parseInt(l.entDados("\nInserir Potencia do Motor do Veiculo: ")));
		passeio.setDataCadastro(l.entDados("\nInserir Data de Cadastro do Veiculo: "));
		passeio.setQtdePassageiro(Integer.parseInt(l.entDados("\nInserir Qtd de Passageiros Veiculo: ")));
		
		System.out.println("\nVEICULO DE CARGA");
		System.out.println("PLACA: "+carga.getPlaca()+"\nMarca: "+carga.getMarca()+"\nModelo: "+carga.getModelo()+"\nCor: "+carga.getCor());
		System.out.println("Quantidade de Rodas: "+carga.getQtdRodas());
		System.out.println("Velocidade em Cm/h: "+carga.calcVel());
		System.out.println("MOTOR");
		System.out.println("Quantidade de Pistoes: "+carga.getMotor().getQtdPistoes()+"\nPotencia: "+carga.getMotor().getPotencia());	
		System.out.println("Tara: "+carga.getTara()+"\nCarga Max: "+carga.getCargaMax());
		System.out.println("Quantidade de Inteiros: "+carga.calcular());
		System.out.println("Data de Cadastro: "+carga.getDataCadastro());
		
		System.out.println("\n---------------------------------------");
		
		System.out.println("\nVEICULO DE PASSEIO");
		System.out.println("PLACA: "+passeio.getPlaca()+"\nMarca: "+passeio.getMarca()+"\nModelo: "+passeio.getModelo()+"\nCor: "+passeio.getCor());
		System.out.println("Quantidade de Rodas: "+passeio.getQtdRodas());
		System.out.println("Velocidade em M/h: "+passeio.calcVel());
		System.out.println("MOTOR");
		System.out.println("Quantidade de Pistoes: "+passeio.getMotor().getQtdPistoes()+"\nPotencia: "+passeio.getMotor().getPotencia());	
		System.out.println("Quantidade de Letras das Strings: "+passeio.calcular());
		System.out.println("Qtd de Passageiros: "+passeio.getQtdePassageiro());
		System.out.println("Data de Cadastro: "+passeio.getDataCadastro());
	}
}
