import requests

URL = input(": ")
request = requests.get(URL).status_code
print(request)