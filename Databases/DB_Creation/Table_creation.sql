create table client (
   num_c number(4) primary key,
   nom   varchar2(100),
   pays  varchar2(100),
   ville varchar2(100)
);

create table article (
   num_a      number(4) primary key,
   des        varchar2(100),
   poids      number(5,2),
   couleur    varchar(100),
   prix_achat number(10,2),
   num_f      number(4)
);

create table frs (
   num_f number(4) primary key,
   nom   varchar2(100),
   ville varchar(100)
);

create table vente (
   num_c      number(4),
   num_a      number(4),
   num_m      number(4),
   qte        number(5,2),
   prix_vente number(10,2),
   dat        date
);

create table magasin (
   num_m number(4) primary key,
   loc   varchar2(100)
);

