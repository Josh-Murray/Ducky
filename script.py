import time
import json
import subprocess
import requests
import websocket
def getProcess():
    process = subprocess.Popen("google-chrome --headless --user-data-dir=$HOME/.config/google-chrome/ https://gmail.com --remote-debugging-port=9223", shell = True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    time.sleep(5)
    return process

def getWebSocket():
    response = requests.get("http://localhost:9223/json")
    websocket = response.json()[0].get("webSocketDebuggerUrl")
    print (websocket)
    return websocket

def getCookies(Socket):
    ws = websocket.create_connection(Socket)
    ws.send(json.dumps({"id": 1, "method": "Network.getAllCookies"}))
    result = ws.recv()
    ws.close()
    results = json.loads(result)
    cookies =results["result"]["cookies"]
    return cookies

if __name__ == "__main__":
    p = getProcess()
    s = getWebSocket()
    c = getCookies(s)
    print(c)
    #print(json.dumps(c, indent=4, separators=(',', ': '), sort_keys=True))
