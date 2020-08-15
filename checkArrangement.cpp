#include <iostream>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>

using namespace std;

bool checkArrangement(vector<int> my_vec)
{
    for (int i = 0; i < my_vec.size() - 1; i++)
    {
        if (my_vec[i + 1] - my_vec[i] == -1)
            swap(my_vec[i + 1], my_vec[i]);
    }

    if (std::is_sorted(my_vec.begin(), my_vec.end()))
        return true;
    else
        return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("xinput.txt", "r", stdin);
    freopen("xoutput.txt", "w", stdout);
#endif

    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int n;
        cin >> n;
        vector<int> my_vec(n);

        for (int i = 0; i < n; i++)
            cin >> my_vec[i];

        if (checkArrangement(my_vec))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        my_vec.clear();
    }
}

// 10
// 100
// 1 0 3 2 5 4 7 6 9 8 11 10 13 12 15 14 17 16 19 18 21 20 23 22 25 24 27 26 29 28 31 30 33 32 35 34 37 36 39 38 41 40 43 42 45 44 47 46 49 48 51 50 53 52 55 54 57 56 59 58 61 60 63 62 65 64 67 66 69 68 71 70 73 72 75 74 77 76 79 78 81 80 83 82 85 84 87 86 89 88 91 90 93 92 95 94 97 96 99 98
// 138
// 96 99 122 18 39 118 19 134 100 121 31 128 10 119 4 72 12 62 54 105 30 133 88 59 131 95 101 126 75 113 37 85 15 117 79 28 56 63 5 80 32 109 48 91 120 111 44 16 1 43 57 123 2 137 65 93 46 47 61 11 104 73 71 84 129 42 108 70 58 14 90 41 26 20 52 36 103 115 74 9 13 35 49 24 136 29 94 97 51 40 33 55 81 45 69 22 34 89 92 102 64 77 125 86 25 6 50 132 135 114 53 76 27 127 82 112 130 110 83 66 8 106 98 68 107 38 116 21 67 23 0 17 78 87 3 60 124 7
// 98
// 1 0 2 4 3 5 6 8 7 9 10 11 13 12 14 15 17 16 18 19 20 21 23 22 25 24 26 28 27 30 29 31 33 32 35 34 36 38 37 40 39 41 43 42 44 46 45 47 48 50 49 52 51 53 54 55 56 58 57 60 59 61 62 64 63 66 65 67 69 68 70 71 72 74 73 76 75 78 77 79 80 82 81 83 84 86 85 88 87 90 89 91 92 94 93 95 97 96
// 317
// 0 1 3 2 5 4 7 6 9 8 10 12 11 13 14 16 15 18 17 20 19 21 22 24 23 26 25 27 29 28 31 30 33 32 35 34 36 37 38 40 39 42 41 44 43 46 45 48 47 49 51 50 53 52 54 55 57 56 58 59 60 62 61 63 65 64 67 66 69 68 71 70 73 72 74 76 75 77 78 79 81 80 82 84 83 86 85 88 87 90 89 91 92 93 94 96 95 98 97 100 99 101 102 103 104 105 106 108 107 110 109 111 113 112 115 114 116 118 117 120 119 121 123 122 124 125 126 127 128 129 130 131 132 134 133 135 136 138 137 140 139 141 143 142 144 146 145 148 147 150 149 151 153 152 155 154 157 156 159 158 160 161 162 164 163 165 167 166 169 168 170 171 172 173 175 174 177 176 179 178 181 180 182 184 183 185 187 186 189 188 190 192 191 194 193 195 197 196 198 200 199 202 201 203 205 204 206 208 207 210 209 212 211 213 214 215 216 218 217 220 219 222 221 223 224 225 226 227 228 230 229 232 231 234 233 236 235 238 237 240 239 241 243 242 244 245 246 248 247 250 249 252 251 254 253 255 256 257 259 258 260 262 261 263 265 264 267 266 269 268 271 270 273 272 274 275 276 278 277 280 279 282 281 283 285 284 287 286 288 289 290 291 292 293 294 295 296 298 297 299 301 300 303 302 305 304 307 306 308 309 310 311 312 313 314 316 315
// 20
// 17 18 5 12 4 0 19 8 9 2 3 6 10 7 1 13 11 16 14 15
// 84
// 0 1 2 4 3 6 5 8 7 10 9 12 11 14 13 15 17 16 18 20 19 22 21 23 25 24 27 26 28 30 29 31 32 33 34 36 35 38 37 40 39 42 41 43 45 44 47 46 49 48 50 51 52 53 55 54 57 56 59 58 60 76 64 75 68 72 61 66 71 78 80 77 70 67 83 62 63 81 82 74 65 69 79 73
// 90
// 89 88 87 86 85 84 83 82 81 80 79 78 77 76 75 74 73 72 71 70 69 68 67 66 65 64 63 62 61 60 59 58 57 56 55 54 53 52 51 50 49 48 47 46 45 44 43 42 41 40 39 38 37 36 35 34 33 32 31 30 29 28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0
// 77
// 1 0 3 2 4 6 5 7 8 9 11 10 12 23 52 68 43 41 31 69 34 24 48 61 54 51 58 44 45 73 57 39 32 56 16 67 70 30 40 75 63 49 37 65 22 27 71 14 18 25 59 29 46 47 38 60 72 17 20 55 13 35 50 36 26 15 53 64 76 28 74 62 19 66 21 33 42
// 63
// 44 4 35 30 0 55 49 17 54 32 8 23 19 57 3 59 60 27 29 51 62 40 56 38 31 7 53 14 61 11 34 22 1 25 50 21 15 10 46 6 28 9 16 58 42 41 24 2 47 26 45 37 52 36 48 20 33 43 13 5 39 18 12
// 13
// 1 0 3 2 5 4 7 6 9 8 11 10 12

// // output
// yes
// no
// yes
// yes
// no
// no
// no
// no
// no
// yes
