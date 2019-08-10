class Codec:
    d = {}
    def encode(self, longUrl):
        """Encodes a URL to a shortened URL.
        :type longUrl: str
        :rtype: str
        """
        code = ''

        for i in range(10):
            code += chr(97 + random.randint(0,25))

        if code in self.d:
            return self.encode(longUrl)
        else:
            self.d[code] = longUrl
            return code

    def decode(self, shortUrl):
        """Decodes a shortened URL to its original URL.
        :type shortUrl: str
        :rtype: str
        """
        return self.d[shortUrl]


# Your Codec object will be instantiated and called as such:
# codec = Codec()
# codec.decode(codec.encode(url))
