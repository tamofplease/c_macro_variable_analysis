import json
import requests


class HttpClient():
    def __init__(self):
        pass

    def get(self, url: str):
        response = requests.get(url, timeout=None)
        json_response = json.loads(response.text)
        return json_response


class GitClient():
    def __init__(self):
        self.api_client = HttpClient()
        self.base_path = 'https://api.github.com'

    def search(self, target: str, key_word: str):
        url = self.base_path + \
            f'search/{target}?q={key_word}+language:C+stars:>=1000&sort=size&order=desc&page=1&per_page=100'
        print('start search with', url)
        return self.api_client.get(url)
