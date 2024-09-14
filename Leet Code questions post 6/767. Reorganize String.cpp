class Solution
{
public:
    string reorganizeString(string s)
    {
        int hash[26] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            hash[s[i] - 'a']++;
        }

        char max_freq_char;
        int max_freq = INT_MIN;
        for (int i = 0; i < 26; i++)
        {
            if (hash[i] > max_freq)
            {
                max_freq = hash[i];
                max_freq_char = i + 'a';
            }
        }

        if (max_freq > (s.size() + 1) / 2)
        {
            return "";
        }

        int index = 0;
        while (max_freq > 0)
        {
            s[index] = max_freq_char;
            max_freq--;
            index += 2;
        }

        hash[max_freq_char - 'a'] = 0;

        for (int i = 0; i < 26; i++)
        {
            while (hash[i] > 0)
            {
                if (index >= s.size())
                {
                    index = 1;
                }
                s[index] = i + 'a';
                hash[i]--;
                index += 2;
            }
        }

        return s;
    }
};
