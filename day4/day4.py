import requests,json
from dotenv import load_dotenv

from dotenv import load_dotenv
import os

# Load variables from .env
load_dotenv()

# Get API key
API_KEY = os.getenv("OPENWEATHER_API_KEY")

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
  


