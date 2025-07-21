// João Lucas Silva de Souza; RA: 2649250

import java.util.Date; 
import javax.swing.JOptionPane;

public class FormPasseio extends javax.swing.JFrame {

    private static FormPasseio instance;

    // Torne o construtor PRIVADO
    private FormPasseio() {
        initComponents();
        setLocationRelativeTo(null); // Centraliza a janela
    }

    //MÉTODO SINGLETON
    public static FormPasseio getInstance() {
        if (instance == null) {
            instance = new FormPasseio();
        }
        return instance;
    }
    
    private void limparCampos() {
    txtPlaca.setText("");
    txtMarca.setText("");
    txtModelo.setText("");
    txtCor.setText("");
    txtQtdRodas.setText("");
    txtVelocMax.setText("");
    txtQtdPistoes.setText("");
    txtPotencia.setText("");
    txtQtdePassageiro.setText("");

    txtPlaca.requestFocus(); // Move o cursor de volta para o campo da placa
}
    
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        jLabel8 = new javax.swing.JLabel();
        jLabel9 = new javax.swing.JLabel();
        txtPlaca = new javax.swing.JTextField();
        txtMarca = new javax.swing.JTextField();
        txtModelo = new javax.swing.JTextField();
        txtCor = new javax.swing.JTextField();
        txtQtdRodas = new javax.swing.JTextField();
        txtVelocMax = new javax.swing.JTextField();
        txtQtdPistoes = new javax.swing.JTextField();
        txtPotencia = new javax.swing.JTextField();
        txtQtdePassageiro = new javax.swing.JTextField();
        botaoCadastrar = new javax.swing.JButton();
        botaoConsultar = new javax.swing.JButton();
        botaoAlterar = new javax.swing.JButton();
        botaoExcluir = new javax.swing.JButton();
        botaoLimpar = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        jLabel1.setText("PLACA:");

        jLabel2.setText("MARCA:");

        jLabel3.setText("MODELO");

        jLabel4.setText("COR:");

        jLabel5.setText("QTD. RODAS:");

        jLabel6.setText("VELOC. MÁXIMA (km/h):");

        jLabel7.setText("QTD. PISTÕES:");

        jLabel8.setText("POTÊNCIA: (cv)");

        jLabel9.setText("QTD. PASSAGEIROS:");

        txtPlaca.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtPlacaActionPerformed(evt);
            }
        });

        txtModelo.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtModeloActionPerformed(evt);
            }
        });

        txtQtdRodas.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtQtdRodasActionPerformed(evt);
            }
        });

        botaoCadastrar.setText("CADASTRAR");
        botaoCadastrar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                botaoCadastrarActionPerformed(evt);
            }
        });

        botaoConsultar.setText("CONSULTAR");
        botaoConsultar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                botaoConsultarActionPerformed(evt);
            }
        });

        botaoAlterar.setText("ALTERAR");
        botaoAlterar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                botaoAlterarActionPerformed(evt);
            }
        });

        botaoExcluir.setText("EXCLUIR");
        botaoExcluir.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                botaoExcluirActionPerformed(evt);
            }
        });

        botaoLimpar.setText("LIMPAR");
        botaoLimpar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                botaoLimparActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(55, 55, 55)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jLabel1)
                    .addComponent(jLabel2)
                    .addComponent(jLabel3)
                    .addComponent(jLabel4)
                    .addComponent(jLabel5)
                    .addComponent(jLabel6)
                    .addComponent(jLabel7)
                    .addComponent(jLabel8)
                    .addComponent(jLabel9))
                .addGap(34, 34, 34)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(txtPotencia, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtQtdPistoes, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtVelocMax, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtQtdRodas, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtCor, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtModelo, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtMarca, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtPlaca)
                    .addComponent(txtQtdePassageiro))
                .addGap(213, 213, 213))
            .addGroup(layout.createSequentialGroup()
                .addGap(17, 17, 17)
                .addComponent(botaoCadastrar)
                .addGap(18, 18, 18)
                .addComponent(botaoConsultar)
                .addGap(18, 18, 18)
                .addComponent(botaoAlterar)
                .addGap(18, 18, 18)
                .addComponent(botaoExcluir)
                .addGap(18, 18, 18)
                .addComponent(botaoLimpar)
                .addGap(30, 30, 30))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(35, 35, 35)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(jLabel1)
                            .addComponent(txtPlaca, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                        .addComponent(jLabel2))
                    .addComponent(txtMarca, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(9, 9, 9)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(txtModelo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(txtCor, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel5)
                    .addComponent(txtQtdRodas, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel6)
                    .addComponent(txtVelocMax, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel7)
                    .addComponent(txtQtdPistoes, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel8)
                    .addComponent(txtPotencia, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(6, 6, 6)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel9)
                    .addComponent(txtQtdePassageiro, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(botaoCadastrar)
                    .addComponent(botaoConsultar)
                    .addComponent(botaoAlterar)
                    .addComponent(botaoExcluir)
                    .addComponent(botaoLimpar))
                .addContainerGap(65, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void txtPlacaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtPlacaActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txtPlacaActionPerformed

    private void botaoCadastrarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoCadastrarActionPerformed
         try {
        Passeio p = new Passeio();
        Motor m = new Motor();
        
        p.setPlaca(txtPlaca.getText());

        // Verifica se a placa já existe antes de cadastrar
        if(BancoVeic.getInstance().consultaPasseioPorPlaca(p.getPlaca()) != null){
            JOptionPane.showMessageDialog(null, "Já existe um veículo de passeio com esta placa!", "Erro", JOptionPane.ERROR_MESSAGE);
            return; // Interrompe a execução
        }
        
        p.setMarca(txtMarca.getText());
        p.setModelo(txtModelo.getText());
        p.setCor(txtCor.getText());
        p.setQtdRodas(Integer.parseInt(txtQtdRodas.getText()));
        p.setVelocMax(Integer.parseInt(txtVelocMax.getText()));
        
        m.setQtdPistoes(Integer.parseInt(txtQtdPistoes.getText()));
        m.setPotencia(Integer.parseInt(txtPotencia.getText()));
        p.setMotor(m);
        
        p.setQtdePassageiro(Integer.parseInt(txtQtdePassageiro.getText()));
        
        BancoVeic.getInstance().inserePasseio(p);
        
        JOptionPane.showMessageDialog(this, "Veículo de Passeio cadastrado com sucesso!", "Sucesso", JOptionPane.INFORMATION_MESSAGE);
        limparCampos();

    } catch (NumberFormatException nfe) {
        JOptionPane.showMessageDialog(this, "Campos numéricos devem conter apenas números!", "Erro de Formato", JOptionPane.ERROR_MESSAGE);
    }
    }//GEN-LAST:event_botaoCadastrarActionPerformed

    private void botaoConsultarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoConsultarActionPerformed
        Passeio p = BancoVeic.getInstance().consultaPasseioPorPlaca(txtPlaca.getText());

    if (p != null) {
        txtPlaca.setText(p.getPlaca());
        txtMarca.setText(p.getMarca());
        txtModelo.setText(p.getModelo());
        txtCor.setText(p.getCor());
        txtQtdRodas.setText(String.valueOf(p.getQtdRodas()));
        txtVelocMax.setText(String.valueOf(p.getVelocMax()));
        txtQtdPistoes.setText(String.valueOf(p.getMotor().getQtdPistoes()));
        txtPotencia.setText(String.valueOf(p.getMotor().getPotencia()));
        txtQtdePassageiro.setText(String.valueOf(p.getQtdePassageiro()));
        
        JOptionPane.showMessageDialog(this, "Veículo encontrado!", "Sucesso", JOptionPane.INFORMATION_MESSAGE);
    } else {
        JOptionPane.showMessageDialog(this, "Veículo de Passeio com esta placa não foi encontrado.", "Erro", JOptionPane.WARNING_MESSAGE);
        limparCampos();
    }
    }//GEN-LAST:event_botaoConsultarActionPerformed

    private void botaoAlterarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoAlterarActionPerformed
        try {
        // 1. Pega a placa do campo de texto para saber qual veículo alterar.
        String placa = txtPlaca.getText();

        // 2. Busca o veículo no BD para garantir que ele existe antes de tentar alterar.
        Passeio veiculoOriginal = BancoVeic.getInstance().consultaPasseioPorPlaca(placa);

        // 3. Validação: Se não encontrou, exibe um erro e para a execução.
        if (veiculoOriginal == null) {
            JOptionPane.showMessageDialog(
                this, 
                "Veículo com a placa '" + placa + "' não encontrado. Consulte um veículo antes de alterar.", 
                "Erro de Alteração", 
                JOptionPane.ERROR_MESSAGE
            );
            return; // Interrompe o método
        }

        // 4. Se encontrou, cria novos objetos para receber os dados atualizados da tela.
        Passeio p_atualizado = new Passeio();
        Motor m_atualizado = new Motor();

        // 5. Preenche os objetos com os dados dos campos de texto
        m_atualizado.setQtdPistoes(Integer.parseInt(txtQtdPistoes.getText()));
        m_atualizado.setPotencia(Integer.parseInt(txtPotencia.getText()));

        p_atualizado.setPlaca(txtPlaca.getText());
        p_atualizado.setMarca(txtMarca.getText());
        p_atualizado.setModelo(txtModelo.getText());
        p_atualizado.setCor(txtCor.getText());
        p_atualizado.setQtdRodas(Integer.parseInt(txtQtdRodas.getText()));
        p_atualizado.setVelocMax(Integer.parseInt(txtVelocMax.getText()));
        p_atualizado.setMotor(m_atualizado);
        p_atualizado.setQtdePassageiro(Integer.parseInt(txtQtdePassageiro.getText()));
        
        // 6. Envia o objeto atualizado para o BancoVeic fazer a substituição.
        BancoVeic.getInstance().alteraPasseio(p_atualizado);

        // 7. Feedback para o usuário e limpeza da tela.
        JOptionPane.showMessageDialog(this, "Veículo de Passeio alterado com sucesso!", "Sucesso", JOptionPane.INFORMATION_MESSAGE);
        limparCampos();

    } catch (NumberFormatException nfe) {
        JOptionPane.showMessageDialog(this, "Campos numéricos devem conter apenas números válidos!", "Erro de Formato", JOptionPane.ERROR_MESSAGE);
    }
    }//GEN-LAST:event_botaoAlterarActionPerformed

    private void botaoExcluirActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoExcluirActionPerformed
        // 1. Pega a placa do campo de texto para saber qual veículo excluir.
    String placa = txtPlaca.getText();

    // 2. Busca o veículo no BD para garantir que ele existe.
    Passeio veiculoParaExcluir = BancoVeic.getInstance().consultaPasseioPorPlaca(placa);

    // 3. Validação: Se não encontrou, exibe um erro e para a execução.
    if (veiculoParaExcluir == null) {
        JOptionPane.showMessageDialog(
            this, 
            "Veículo com a placa '" + placa + "' não encontrado. Consulte um veículo antes de excluir.", 
            "Erro de Exclusão", 
            JOptionPane.ERROR_MESSAGE
        );
        return; // Interrompe o método
    }

    // 4. Pede confirmação ao usuário. Este é um passo crucial para evitar exclusões acidentais.
    int resposta = JOptionPane.showConfirmDialog(
        this,
        "Tem certeza que deseja excluir o veículo de placa " + placa + "?\nEsta ação não pode ser desfeita.",
        "Confirmação de Exclusão",
        JOptionPane.YES_NO_OPTION,
        JOptionPane.WARNING_MESSAGE
    );

    // 5. Verifica a resposta do usuário.
    if (resposta == JOptionPane.YES_OPTION) {
        // Se o usuário clicou em "Sim", chama o método de exclusão do BD.
        BancoVeic.getInstance().excluiPasseio(veiculoParaExcluir);
        
        // Dá o feedback e limpa a tela.
        JOptionPane.showMessageDialog(this, "Veículo de Passeio excluído com sucesso.", "Sucesso", JOptionPane.INFORMATION_MESSAGE);
        limparCampos();
    } else {
        // Se o usuário clicou em "Não", apenas informa que a ação foi cancelada.
        JOptionPane.showMessageDialog(this, "A exclusão foi cancelada.", "Cancelado", JOptionPane.INFORMATION_MESSAGE);
    }
    }//GEN-LAST:event_botaoExcluirActionPerformed

    private void botaoLimparActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoLimparActionPerformed
        limparCampos();
    }//GEN-LAST:event_botaoLimparActionPerformed

    private void txtModeloActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtModeloActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txtModeloActionPerformed

    private void txtQtdRodasActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtQtdRodasActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txtQtdRodasActionPerformed

 

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton botaoAlterar;
    private javax.swing.JButton botaoCadastrar;
    private javax.swing.JButton botaoConsultar;
    private javax.swing.JButton botaoExcluir;
    private javax.swing.JButton botaoLimpar;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JTextField txtCor;
    private javax.swing.JTextField txtMarca;
    private javax.swing.JTextField txtModelo;
    private javax.swing.JTextField txtPlaca;
    private javax.swing.JTextField txtPotencia;
    private javax.swing.JTextField txtQtdPistoes;
    private javax.swing.JTextField txtQtdRodas;
    private javax.swing.JTextField txtQtdePassageiro;
    private javax.swing.JTextField txtVelocMax;
    // End of variables declaration//GEN-END:variables
}
