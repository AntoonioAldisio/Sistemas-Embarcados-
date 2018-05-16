Para todas as questões, escreva os comandos correspondentes no terminal.

1. Escreva o texto "Ola mundo cruel!" em um arquivo denominado "Ola_mundo.txt". Apresente o conteúdo deste arquivo no terminal.

	nano Ola_mundo.txt
	Ola mundo cruel  
	cat Ola_mundo.txt

2. Apresente o nome de todos os arquivos e pastas na pasta 'root'.
	 
	cd ..  
	cd .. 
	sudo su  
	cd root/
	ls

3. Apresente o tipo de todos os arquivos e pastas na pasta 'root'.

	cd ..  
	cd .. 
	sudo su 
	cd root/
	ls -l  
	

4. Apresente somente as pastas dentro da pasta 'root'.

5. Descubra em que dia da semana caiu o seu aniversário nos últimos dez anos.
	
	cal Janeiro 2008

Para as questões a seguir, use a pasta no endereço https://github.com/DiogoCaetanoGarcia/Sistemas_Embarcados/raw/master/Questoes/02_Intro_Linux_arqs.zip

6. Liste somente os arquivos com extensão .txt.

	ls -l |grep .txt

7. Liste somente os arquivos com extensão .png.
	
	ls -l |grep .png

8. Liste somente os arquivos com extensão .jpg.
	
	ls -l |grep .jpg

9. Liste somente os arquivos com extensão .gif.
	
	ls -l |grep .gif

10. Liste somente os arquivos que contenham o nome 'cal'.

	ls -l |grep cal


11. Liste somente os arquivos que contenham o nome 'tux'.
	
	ls -l |grep tux


12. Liste somente os arquivos que comecem com o nome 'tux'.

	ls -l |grep tux
