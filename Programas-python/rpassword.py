import random
import string
#primer intento de password aleatorio
def Password(longitud = 6):
    caracteres = 'AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz0123456789'
    comprobacion_entero = isinstance(longitud, int)
    if comprobacion_entero == False: 
       mensaje_error = 'No es un valor valido, intenta con un numero entre el 6 y 9'
       return mensaje_error 
    if longitud >= 6 and longitud <= 9:
        lista_caracteres = []
        contador = 0
        while contador <= 9:
            semilla_aleatoria = random.randint(0,62)
            caracter_selecionado = caracteres[semilla_aleatoria]
            lista_caracteres.insert(contador,caracter_selecionado)
            contador += 1
        password_aleatorio = f"{lista_caracteres[0]}{lista_caracteres[1]}{lista_caracteres[2]}{lista_caracteres[3]}{lista_caracteres[4]}{lista_caracteres[5]}{lista_caracteres[6]}{lista_caracteres[7]}{lista_caracteres[8]}"
        password_aleatorio_limitado = password_aleatorio[:longitud]
        return password_aleatorio_limitado
    elif longitud < 6 or longitud > 9:
        mensaje_error = 'Longitud incorrecta. Establece una entre 6 y el 9.'
        return mensaje_error 
    
#segundo intento de passsword aleatorio   
def password_aleatorio(longitud = 6):
    caracteres = 'AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz0123456789'
    password = ""
    contador = 0
    comprobacion_entero = isinstance(longitud, int)
    if comprobacion_entero == False: 
       mensaje_error = 'No es un valor valido, intenta con un numero entero'
       return mensaje_error  
    if longitud >= 6:
        while contador <= longitud:
            posicion_aleatoria = random.randint(0,62)
            caracter_selecionado = caracteres[posicion_aleatoria]
            password += f"{caracter_selecionado}"
            contador += 1
        password_limitado = password[:longitud]
        return password_limitado
    elif longitud < 6:
        mensaje_error = 'Longitud incorrecta. Establece una de 6 o mas caracteres.'
        return mensaje_error 
  
  #tercer intento de password aleatorio 
def password_for(longitud = 6):
    caracteres = 'AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz0123456789'
    password = ""
    contador = 0
    comprobacion_entero = isinstance(longitud, int)
    if comprobacion_entero == False: 
       mensaje_error = 'No es un valor valido, intenta con un numero entero'
       return mensaje_error  
    if longitud >= 6:
        for contador in range(longitud):
            posicion_aleatoria = random.randint(0,62)
            caracter_selecionado = caracteres[posicion_aleatoria]
            password += f"{caracter_selecionado}"
            contador += 1
        password_limitado = password[:longitud]
        return password_limitado
    elif longitud < 6:
        mensaje_error = 'Longitud incorrecta. Establece una de 6 o mas caracteres.'
        return mensaje_error         

#programa hecho por IA
def generar_contrasena(longitud):
    caracteres = string.ascii_letters + string.digits
    contrasena = ''.join(random.choice(caracteres) for _ in range(longitud))
    return contrasena


#longitud = int(input("Ingresa la longitud deseada para la contraseña: "))
#contrasena_aleatoria = generar_contrasena(longitud)
#print("Contraseña generada:", contrasena_aleatoria)

#Intento de mejora del de la IA
def contrasena_ia(longitud = 6):
    if longitud >= 6 and longitud <= 16:
        caracteres = string.ascii_letters + string.digits
        contrasena = ''.join(random.choice(caracteres) for _ in range(longitud))
        return contrasena
    #elif longitud < 6 or longitud > 16:
    while longitud < 6 or longitud > 16:
        mensaje_error = 'Longitud incorrecta. Establece una longitud entre 6 y 16.'
        print(mensaje_error)
        longitud = int(input('Longitud nueva: '))
    caracteres = string.ascii_letters + string.digits
    contrasena = ''.join(random.choice(caracteres) for _ in range(longitud))
    return contrasena
            
              
        

