// João Lucas Silva de Souza; RA: 2649250

import java.util.List;
import java.util.ArrayList;

import javax.swing.JOptionPane;

public class BdSamambaia{
    
    private Samambaia sam;
    // Passos para singleton
    private List<Samambaia> bdSam;
    private static BdSamambaia oprSamU;
    // Passos para singleton
    private BdSamambaia(){
        sam = new Samambaia();
        bdSam = new ArrayList<Samambaia>();
    }
    // Passos para singleton (fim)
    public static BdSamambaia geraOprSam(){
        if(oprSamU == null){
            oprSamU = new BdSamambaia();
        }
        return oprSamU;
    }
    
    public List<Samambaia> getBdSam(){
            return bdSam;
    }
	
        // consSamNome
	public Samambaia consSamNome(Samambaia sam){
		for(int i = 0; i < bdSam.size(); i++){
			if(sam.getNome().equals(bdSam.get(i).getNome())){
				return bdSam.get(i);
			}
		}
		return null;
	}	
        
        // insSam
	public Samambaia insSam(Samambaia sam){
		if(consSamNome(sam)== null){
			bdSam.add(sam);
			return sam;
		}
		else{
			return null;
		}
	}
        
        // removeSamNome
	public Samambaia delSamNome(Samambaia sam){
            Samambaia sam1 = consSamNome(sam);
            if(sam1 != null){
                bdSam.remove(sam1);
                return null;
            }
            else{
                return sam;
            }
	}
        
        // atualizaSamNome
	public Samambaia atualizaSamNome(Samambaia sam){
		for(int i = 0; i < bdSam.size(); i++){
			if(sam.getNome().equalsIgnoreCase(bdSam.get(i).getNome())){
                            sam = bdSam.get(i);

                            String nome = JOptionPane.showInputDialog(
                                    null,
                                    "Informe o novo NOME",
                                    "Atulizar dados",
                                    JOptionPane.INFORMATION_MESSAGE
                            );
                            sam.setNome(nome);
                            bdSam.set(i, sam);  
                            return bdSam.get(i);
			}
		}
                return null;
	}
}