INSERT INTO client VALUES (1 , 'Jerbi Slim' , 'Tunisie' , 'Gabes');
INSERT INTO client VALUES (2 , 'Ayed Sami' , 'Tunisie' , 'Gabes');
INSERT INTO client VALUES (3 , 'Med Ghribi' , 'France' , 'Paris');

INSERT INTO frs VALUES (1 , 'Tounsi Ali' , 'Sousse');
INSERT INTO frs VALUES (2 , 'Sfaxi Hedi' , 'Sousse');
INSERT INTO frs VALUES (3 , 'Gabsi Amin' , 'Gabes');

INSERT INTO article VALUES (1 , 'des1' , 200 , 'Vert' , 100.5 , 3 );
INSERT INTO article VALUES (2 , 'des2' , 300 , 'Vert' , 150.3 , 2);
INSERT INTO article VALUES (3 , 'des3' , 300 , 'Bleu' , 200.5 , 2);
INSERT INTO article VALUES (4 , 'des4' , 500 , 'Bleu' , 130 , 2);
INSERT INTO article VALUES (5 , 'des5' , 550 , 'Violet' , 70 , 1);

INSERT INTO magasin VALUES (1 , 'Chnenni');
INSERT INTO magasin VALUES (2 , 'ALin Slam');
INSERT INTO magasin VALUES (3 , 'Elmanzei');

INSERT INTO vente VALUES (1 , 2, 1 , 20.250 , 330 , TO_DATE('12-10-2010' , 'DD-MM-YY'));
INSERT INTO vente VALUES (2 , 4, 1 , 100 , 300 , TO_DATE('4-2-2008' , 'DD-MM-YY'));
INSERT INTO vente VALUES (3 , 2, 3 , 500 , 380.5 , TO_DATE('25-2-2009' , 'DD-MM-YY'));
INSERT INTO vente VALUES (1 , 3, 2 , 120.2, 195.5 , TO_DATE('15-6-2011' , 'DD-MM-YY'));
INSERT INTO vente VALUES (2 , 1, 3 , 30 , 150.750, TO_DATE('30-8-2012' , 'DD-MM-YY'));
INSERT INTO vente VALUES (1 , 5, 1 , 750.5 , 210, TO_DATE('14-12-2011' , 'DD-MM-YY'));
INSERT INTO vente VALUES (1 , 1, 1 , 600.7 , 200 , TO_DATE('23-3-2007' , 'DD-MM-YY'));
INSERT INTO vente VALUES (3 , 4, 3 , 300 , 430.5, TO_DATE('17-6-2009' , 'DD-MM-YY'));
INSERT INTO vente VALUES (1 , 1, 2 , 20 , 220, TO_DATE('22-3-2008' , 'DD-MM-YY'));
INSERT INTO vente VALUES (3 , 5, 2 , 100 , 130.3 , TO_DATE('3-10-2007' , 'DD-MM-YY'));

commit ;