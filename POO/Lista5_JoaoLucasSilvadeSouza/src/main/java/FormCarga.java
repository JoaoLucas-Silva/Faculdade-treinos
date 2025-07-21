// João Lucas Silva de Souza; RA: 2649250

import java.util.Date; 
import javax.swing.JOptionPane;

public class FormCarga extends javax.swing.JFrame {

    private static FormCarga instance;

private FormCarga() {
    initComponents();
    setLocationRelativeTo(null);
}

//MÉTODO SINGLETON
public static FormCarga getInstance() {
    if (instance == null) {
        instance = new FormCarga();
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
    txtTara.setText("");
    txtCargaMax.setText("");

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
        jLabel10 = new javax.swing.JLabel();
        botaoCadastrar = new javax.swing.JButton();
        botaoConsultar = new javax.swing.JButton();
        botaoAlterar = new javax.swing.JButton();
        botaoExcluir = new javax.swing.JButton();
        botaoLimpar = new javax.swing.JButton();
        txtPlaca = new javax.swing.JTextField();
        txtMarca = new javax.swing.JTextField();
        txtModelo = new javax.swing.JTextField();
        txtCor = new javax.swing.JTextField();
        txtQtdRodas = new javax.swing.JTextField();
        txtVelocMax = new javax.swing.JTextField();
        txtQtdPistoes = new javax.swing.JTextField();
        txtPotencia = new javax.swing.JTextField();
        txtTara = new javax.swing.JTextField();
        txtCargaMax = new javax.swing.JTextField();

        setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);

        jLabel1.setText("PLACA:");

        jLabel2.setText("MARCA");

        jLabel3.setText("MODELO:");

        jLabel4.setText("COR:");

        jLabel5.setText("QTD. RODAS:");

        jLabel6.setText("VELOC. MÁXIMA (km/h):");

        jLabel7.setText("QTD. PISTÕES:");

        jLabel8.setText("POTÊNCIA (cv):");

        jLabel9.setText("TARA:");

        jLabel10.setText("CARGA MÁXIMA:");

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

        txtPlaca.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                txtPlacaActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(14, 14, 14)
                        .addComponent(botaoCadastrar)
                        .addGap(18, 18, 18)
                        .addComponent(botaoConsultar))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(65, 65, 65)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(jLabel10)
                            .addComponent(jLabel9)
                            .addComponent(jLabel8)
                            .addComponent(jLabel7)
                            .addComponent(jLabel6)
                            .addComponent(jLabel5)
                            .addComponent(jLabel4)
                            .addComponent(jLabel3)
                            .addComponent(jLabel2)
                            .addComponent(jLabel1))))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                    .addComponent(txtTara, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtPotencia, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtQtdPistoes, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtQtdRodas, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtCor, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtModelo, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtMarca, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtPlaca, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(botaoAlterar, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(txtVelocMax, javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(txtCargaMax))
                .addGap(18, 18, 18)
                .addComponent(botaoExcluir)
                .addGap(18, 18, 18)
                .addComponent(botaoLimpar)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(37, 37, 37)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                    .addComponent(jLabel1)
                    .addComponent(txtPlaca, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel2)
                    .addComponent(txtMarca, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel3)
                    .addComponent(txtModelo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel4)
                    .addComponent(txtCor, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel5, javax.swing.GroupLayout.PREFERRED_SIZE, 16, javax.swing.GroupLayout.PREFERRED_SIZE)
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
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel9)
                    .addComponent(txtTara, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(jLabel10)
                    .addComponent(txtCargaMax, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(botaoCadastrar)
                    .addComponent(botaoConsultar)
                    .addComponent(botaoAlterar)
                    .addComponent(botaoExcluir)
                    .addComponent(botaoLimpar))
                .addContainerGap(14, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void botaoCadastrarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoCadastrarActionPerformed
       try {
        Carga c = new Carga();
        Motor m = new Motor();

        String placa = txtPlaca.getText();

        // Validação: Verifica se um veículo de carga com a mesma placa já existe
        if (BancoVeic.getInstance().consultaCargaPorPlaca(placa) != null) {
            JOptionPane.showMessageDialog(
                this,
                "Já existe um veículo de carga com esta placa cadastrado.",
                "Erro de Duplicidade",
                JOptionPane.ERROR_MESSAGE
            );
            return; // Interrompe o cadastro
        }
        
        // Preenche o Motor
        m.setQtdPistoes(Integer.parseInt(txtQtdPistoes.getText()));
        m.setPotencia(Integer.parseInt(txtPotencia.getText()));
        
        // Preenche o Veiculo Carga
        c.setPlaca(placa);
        c.setMarca(txtMarca.getText());
        c.setModelo(txtModelo.getText());
        c.setCor(txtCor.getText());
        c.setQtdRodas(Integer.parseInt(txtQtdRodas.getText()));
        c.setVelocMax(Integer.parseInt(txtVelocMax.getText()));
        c.setMotor(m);
        
        // Preenche os atributos específicos de Carga
        c.setTara(Integer.parseInt(txtTara.getText()));
        c.setCargaMax(Integer.parseInt(txtCargaMax.getText()));

        // Insere o novo veículo no banco de dados
        BancoVeic.getInstance().insereCarga(c);

        JOptionPane.showMessageDialog(this, "Veículo de Carga cadastrado com sucesso!", "Sucesso", JOptionPane.INFORMATION_MESSAGE);
        limparCampos();

    } catch (NumberFormatException nfe) {
        JOptionPane.showMessageDialog(this, "Todos os campos numéricos (Rodas, Veloc., Pistões, etc.) devem conter apenas números válidos.", "Erro de Formato", JOptionPane.ERROR_MESSAGE);
    }
    }//GEN-LAST:event_botaoCadastrarActionPerformed

    private void botaoConsultarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoConsultarActionPerformed
                                             
    String placa = txtPlaca.getText();
    Carga c = BancoVeic.getInstance().consultaCargaPorPlaca(placa);

    if (c != null) {
        // Preenche todos os campos com os dados do veículo encontrado
        txtPlaca.setText(c.getPlaca());
        txtMarca.setText(c.getMarca());
        txtModelo.setText(c.getModelo());
        txtCor.setText(c.getCor());
        txtQtdRodas.setText(String.valueOf(c.getQtdRodas()));
        txtVelocMax.setText(String.valueOf(c.getVelocMax()));
        txtQtdPistoes.setText(String.valueOf(c.getMotor().getQtdPistoes()));
        txtPotencia.setText(String.valueOf(c.getMotor().getPotencia()));
        txtTara.setText(String.valueOf(c.getTara()));
        txtCargaMax.setText(String.valueOf(c.getCargaMax()));
        
        JOptionPane.showMessageDialog(this, "Veículo de Carga encontrado!", "Sucesso", JOptionPane.INFORMATION_MESSAGE);
    } else {
        JOptionPane.showMessageDialog(this, "Veículo de Carga com a placa '" + placa + "' não foi encontrado.", "Erro", JOptionPane.WARNING_MESSAGE);
        limparCampos();
    }
    }//GEN-LAST:event_botaoConsultarActionPerformed

    private void botaoAlterarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoAlterarActionPerformed
        try {
        String placa = txtPlaca.getText();
        Carga veiculoOriginal = BancoVeic.getInstance().consultaCargaPorPlaca(placa);

        if (veiculoOriginal == null) {
            JOptionPane.showMessageDialog(this, "Veículo com a placa '" + placa + "' não encontrado. Consulte um veículo antes de alterar.", "Erro de Alteração", JOptionPane.ERROR_MESSAGE);
            return;
        }

        // Cria novos objetos para receber os dados atualizados
        Carga c_atualizado = new Carga();
        Motor m_atualizado = new Motor();
        
        // Preenche os objetos com os dados dos campos de texto
        m_atualizado.setQtdPistoes(Integer.parseInt(txtQtdPistoes.getText()));
        m_atualizado.setPotencia(Integer.parseInt(txtPotencia.getText()));
        
        c_atualizado.setPlaca(txtPlaca.getText());
        c_atualizado.setMarca(txtMarca.getText());
        c_atualizado.setModelo(txtModelo.getText());
        c_atualizado.setCor(txtCor.getText());
        c_atualizado.setQtdRodas(Integer.parseInt(txtQtdRodas.getText()));
        c_atualizado.setVelocMax(Integer.parseInt(txtVelocMax.getText()));
        c_atualizado.setMotor(m_atualizado);
        c_atualizado.setTara(Integer.parseInt(txtTara.getText()));
        c_atualizado.setCargaMax(Integer.parseInt(txtCargaMax.getText()));
        
        // Envia o objeto atualizado para o BancoVeic fazer a substituição
        BancoVeic.getInstance().alteraCarga(c_atualizado);
        
        JOptionPane.showMessageDialog(this, "Veículo de Carga alterado com sucesso!", "Sucesso", JOptionPane.INFORMATION_MESSAGE);
        limparCampos();

    } catch (NumberFormatException nfe) {
        JOptionPane.showMessageDialog(this, "Campos numéricos devem conter apenas números válidos!", "Erro de Formato", JOptionPane.ERROR_MESSAGE);
    }
    }//GEN-LAST:event_botaoAlterarActionPerformed

    private void botaoExcluirActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoExcluirActionPerformed
        String placa = txtPlaca.getText();
    Carga veiculoParaExcluir = BancoVeic.getInstance().consultaCargaPorPlaca(placa);

    if (veiculoParaExcluir == null) {
        JOptionPane.showMessageDialog(this, "Veículo com a placa '" + placa + "' não encontrado. Consulte um veículo antes de excluir.", "Erro de Exclusão", JOptionPane.ERROR_MESSAGE);
        return;
    }

    int resposta = JOptionPane.showConfirmDialog(
        this,
        "Tem certeza que deseja excluir o veículo de placa " + placa + "?",
        "Confirmação de Exclusão",
        JOptionPane.YES_NO_OPTION,
        JOptionPane.WARNING_MESSAGE
    );

    if (resposta == JOptionPane.YES_OPTION) {
        BancoVeic.getInstance().excluiCarga(veiculoParaExcluir);
        JOptionPane.showMessageDialog(this, "Veículo de Carga excluído com sucesso.", "Sucesso", JOptionPane.INFORMATION_MESSAGE);
        limparCampos();
    }
    }//GEN-LAST:event_botaoExcluirActionPerformed

    private void botaoLimparActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_botaoLimparActionPerformed
        limparCampos();
    }//GEN-LAST:event_botaoLimparActionPerformed

    private void txtPlacaActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_txtPlacaActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_txtPlacaActionPerformed

   

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton botaoAlterar;
    private javax.swing.JButton botaoCadastrar;
    private javax.swing.JButton botaoConsultar;
    private javax.swing.JButton botaoExcluir;
    private javax.swing.JButton botaoLimpar;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel10;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JLabel jLabel9;
    private javax.swing.JTextField txtCargaMax;
    private javax.swing.JTextField txtCor;
    private javax.swing.JTextField txtMarca;
    private javax.swing.JTextField txtModelo;
    private javax.swing.JTextField txtPlaca;
    private javax.swing.JTextField txtPotencia;
    private javax.swing.JTextField txtQtdPistoes;
    private javax.swing.JTextField txtQtdRodas;
    private javax.swing.JTextField txtTara;
    private javax.swing.JTextField txtVelocMax;
    // End of variables declaration//GEN-END:variables
}
