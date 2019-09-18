# Importa as libs
import platform  # Lib que reconhece o sistema operacional
import os  # Lib que possui recursos do sistema operacional
import sys
import time
from pyfiglet import Figlet  # Lib para criar interface mais elaborada


class ListaAtividades():
    # Função para limpar console de acordo com sistema operacional
    def clear():
        if platform.system() == 'Windows':
            os.system('cls')
        else:
            os.system('clear')

    while 1:
        clear()
        result = Figlet(font='doom')
        print(result.renderText('Atividades *'))
        print('')

        menuPrincipal = ['Atividades','Lista de Atividades','Sair']
        items = 1
        for mp in menuPrincipal:
            print(str(items) + ' - ' + mp)
            items = items + 1
        print('')
        opcoesPrincipal = int(input('Selecione a operação: '))
        print('')

        if opcoesPrincipal == 1:
            clear()
            ms = Figlet(font='doom')
            print(ms.renderText('# Atividades #'))
            print('# Atividades #')
            print('')
            menuAtividades = ['Criar','Listar','Editar','Excluir','Sair']
            it = 1
            for mAtividades in menuAtividades:
                print(str(it) + ' - ' + mAtividades)
                it = it + 1

            listarOP = int(input('Operação: '))
            print('')
            if listarOP == 1:
                print('Lista de Clientes')
            else:
                print('Finalizando Operação de Listagem.')
                time.sleep(1)
                print('Obrigado por utilizar nossos serviços.')
                time.sleep(0.8)

        elif opcoesPrincipal == 2:
            clear()
            ms = Figlet(font='doom')
            print(ms.renderText('# Lista Atividades #'))
            print('# Lista Atividades #')
            print('')
            menuAtividades = ['Criar', 'Listar', 'Editar', 'Excluir', 'Sair']
            it = 1
            for mAtividades in menuAtividades:
                print(str(it) + ' - ' + mAtividades)
                it = it + 1

            listarOP = int(input('Operação: '))
            print('')
            if listarOP == 1:
                print('Lista de Clientes')
            else:
                print('Finalizando Operação de Listagem.')
                time.sleep(1)
                print('Obrigado por utilizar nossos serviços.')
                time.sleep(0.8)

        elif opcoesPrincipal == 3:
            print('Finalizando Sistema.')
            time.sleep(1)
            print('Obrigado por utilizar nossos serviços.')
            time.sleep(0.8)
            break

        else:
            print('Operação não existe, tente novamente!')
            time.sleep(1.5)
            clear()
