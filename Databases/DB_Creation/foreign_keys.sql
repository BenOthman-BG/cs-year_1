alter table article
   add constraint num_f foreign key ( num_f )
      references frs ( num_f );alter table vente
   add constraint num_c foreign key ( num_c )
      references client ( num_c );alter table vente
   add constraint num_a foreign key ( num_a )
      references article ( num_a );alter table vente
   add constraint num_m foreign key ( num_m )
      references magasin ( num_m )