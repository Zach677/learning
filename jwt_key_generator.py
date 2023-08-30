import secrets
import string

def generate_jwt_secret_key(length):
    alphabet = string.ascii_letters + string.digits + "!@#$%^&*()-_=+[]{}|;:,.<>?~"
    jwt_secret_key = ''.join(secrets.choice(alphabet) for _ in range(length))
    return jwt_secret_key

jwt_secret = generate_jwt_secret_key(32)  # 生成32字符的密钥
print(jwt_secret)
