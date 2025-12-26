import requests,json

API_KEY ="8dbe71211b1f2caa88779ebbb26b2c0f"
city = input("Enter city name: ").strip()

url = f"https://api.openweathermap.org/data/2.5/weather?q={city}&appid={API_KEY}&units=metric"

response = requests.get(url)
data = response.json()

if str(data["cod"]) == "200":
    temp = data["main"]["temp"]
    condition = data["weather"][0]["description"]

    print("\nWeather Details")
    print("----------------")
    print("City:", city)
    print("Temperature:", temp, "°C")
    print("Condition:", condition.capitalize())
else:
    print("City not found or API error!")
  


