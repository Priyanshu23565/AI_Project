import urllib.request
import urllib.parse
import re
import webbrowser as wb

query_string = urllib.parse.urlencode({"search_query" : 'play music'})
html_content = urllib.request.urlopen("https://www.youtube.com.hk/results?"+query_string)
search_results = re.findall(r'url\"\:\"\/watch\?v\=(.*?(?=\"))', html_content.read().decode())
if search_results:
 print("http://www.youtube.com/watch?v=" + search_results[0])
 wb.open_new("http://www.youtube.com/watch?v={}".format(search_results[0]))