





def check_username(username: str) -> bool:
    if username == 'quera' or username == 'codecup':
        return False

    if len(username) < 4:
        return False

    return True




def check_password(password: str) -> bool:
    if len(password) < 6:
        return False

    try: 
        int(password)
        return False
    except Exception:
        return True





def check_registration_rules(**keywords) -> list[str]:
    out = []
    for username, password in keywords.items():
        if check_username(username) and check_password(password):
            out.append(username)

    return out
        





if __name__ == '__main__':
    print(check_registration_rules(username='password', sadegh='He3@lsa', quera='kLS45@l$'))
    print(check_registration_rules(saeed='1234567', ab='afj$L12'))


