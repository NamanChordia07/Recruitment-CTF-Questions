#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main (int argc, char** argv) {
	if (argc == 2) {
		char* s = argv[1];
		if (strlen(s) == 28) {
			bool var0;
			bool var1;
			bool var2;
			bool var3;
			bool var4;
			bool var5;
			bool var6;
			bool var7;
			bool var8;
			bool var9;
			bool var10;
			bool var11;
			bool var12;
			var2 = s[5] + s[10] - s[14] - s[16] - s[17] + s[8] + s[4] - s[11] - s[12] + s[9] + s[2] - s[15] - s[7] - s[3] + s[13] * s[6] == 0x2471;
			var6 = s[7] + s[14] * s[6] * s[18] - s[16] - s[19] - s[10] + s[11] - s[15] * s[21] + s[17] + s[12] * s[20] - s[9] - s[8] + s[13] == 0xb1aab;
			var4 = s[15] + s[8] - s[16] * s[7] - s[19] + s[9] - s[5] * s[4] - s[6] * s[14] * s[18] * s[11] + s[13] * s[12] + s[10] - s[17] == -0x48b88cb;
			var1 = s[4] + s[16] + s[10] - s[7] - s[5] + s[13] + s[9] - s[3] + s[8] * s[1] * s[12] * s[15] + s[2] - s[11] + s[14] * s[6] == 0x588e853;
			var5 = s[17] - s[19] - s[15] - s[8] + s[18] + s[13] * s[7] - s[12] * s[16] * s[6] + s[10] + s[9] - s[14] - s[20] + s[5] - s[11] == -0x75f01;
			var11 = s[18] * s[20] - s[25] * s[15] * s[12] - s[13] - s[17] * s[23] + s[14] * s[16] - s[19] + s[26] - s[11] - s[24] - s[22] - s[21] == -0x72abe;
			var8 = s[18] - s[16] * s[23] - s[17] * s[14] + s[9] + s[21] * s[10] + s[22] * s[15] - s[20] * s[8] - s[12] + s[19] + s[11] + s[13] == -0x1306;
			var9 = s[13] + s[23] - s[12] + s[21] + s[20] - s[24] + s[11] - s[22] + s[15] * s[10] * s[17] + s[18] * s[14] * s[16] * s[9] - s[19] == 0x32c9bf5;
			var10 = s[14] - s[17] - s[16] + s[24] * s[11] * s[10] + s[19] - s[20] + s[12] + s[18] - s[23] + s[25] + s[22] * s[15] + s[21] + s[13] == 0x9dd6c;
			var3 = s[3] - s[18] - s[4] * s[5] - s[15] + s[16] + s[6] - s[13] + s[10] * s[7] - s[8] * s[14] + s[11] - s[17] * s[12] - s[9] == -0x54b2;
			var0 = s[1] + s[3] - s[11] * s[7] * s[14] - s[8] + s[10] * s[0] + s[6] - s[4] - s[5] + s[12] - s[9] - s[2] * s[15] * s[13] == -0x2349fc;
			var12 = s[18] + s[19] - s[17] + s[21] + s[23] - s[16] - s[14] - s[20] + s[25] + s[12] + s[24] + s[22] * s[27] * s[15] + s[13] + s[26] == 0xdf55d;
			var7 = s[18] * s[13] * s[7] - s[14] - s[15] - s[19] * s[21] * s[10] - s[12] * s[8] + s[17] * s[22] * s[9] + s[11] + s[20] * s[16] == 0x1183e2;
			if (var1 && 
				var1 &&
				var2 &&
				var3 &&
				var4 &&
				var5 &&
				var6 &&
				var7 &&
				var8 &&
				var9 &&
				var10 &&
				var11 &&
				var12) {
				printf("CORRECT :)");
			} else {
				printf("INCORRECT :(");
			}
		} else {
			printf("INCORRECT :(");
		}
	} else {
		printf("Usage: %s <FLAG>", argv[0]);
		return 1;
	}
	return 0;
}

