// João Lucas Silva de Souza; RA: 2649250

import java.util.List;
import java.util.ArrayList;

import javax.swing.JOptionPane;

public class BdCacto{
   private Cacto cac;
    // Passos para singleton
    private List<Cacto> bdCac;
    private static BdCacto oprCacU;
    
    // Passos para singleton
    private BdCacto(){
        cac = new Cacto();
        bdCac = new ArrayList<Cacto>();
    }
    // Passos para singleton (fim)
    public static BdCacto geraOprCac(){
        if(oprCacU == null){
            oprCacU = new BdCacto();
        }
        return oprCacU;
    }
    
    public List<Cacto> getBdCac(){
            return bdCac;
    }
	
        // consCacNome
	public Cacto consCacNome(Cacto cac){
		for(int i = 0; i < bdCac.size(); i++){
			if(cac.getNome().equals(bdCac.get(i).getNome())){
				return bdCac.get(i);
			}
		}
		return null;
	}	
        
        // insCac
	public Cacto insCac(Cacto cac){
		if(consCacNome(cac)== null){
			bdCac.add(cac);
			return cac;
		}
		else{
			return null;
		}
	}
        
        // removeCacNome
	public Cacto delCacNome(Cacto cac){
            Cacto cac1 = consCacNome(cac);
            if(cac1 != null){
                bdCac.remove(cac1);
                return null;
            }
            else{
                return cac;
            }
	}
        
        // atualizaCacNome
	public Cacto atualizaCacNome(Cacto cac){
		for(int i = 0; i < bdCac.size(); i++){
			if(cac.getNome().equalsIgnoreCase(bdCac.get(i).getNome())){
                            cac = bdCac.get(i);

                            String nome = JOptionPane.showInputDialog(
                                    null,
                                    "Informe o novo NOME",
                                    "Atulizar dados",
                                    JOptionPane.INFORMATION_MESSAGE
                            );
                            cac.setNome(nome);
                            bdCac.set(i, cac);  
                            return bdCac.get(i);
			}
		}
                return null;
	}
}