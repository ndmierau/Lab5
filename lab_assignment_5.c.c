#include<stdio.h>
#include<stdlib.h>
	
int main() {
	char* oSign = (char*)calloc(100000, sizeof(char));
	char* dSign = (char*)calloc(100000, sizeof(char));
	int oFreq[26] = { 0 };
	int dFreq[26] = { 0 };
	int alphabet[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

	printf_s("Enter the original sign name: ");
	fgets(oSign, 100002, stdin);

	printf_s("\nEnter the desired sign name: ");
	fgets(dSign, 100002, stdin);

	for (int i = 0; i < alphabet; i++) {
		for (int j = 0; j < sizeof(oSign); j++) {
			if (alphabet[i] == oSign[j]) {
				oFreq[i] += 1;
			}
		}
	}
	for (int x = 0; x < sizeof(alphabet); x++) {
		for (int z = 0; z < sizeof(dSign); z++) {
			if (alphabet[x] == dSign[z]) {
				dFreq[x] += 1;
			}
		}
	}
	int lNeed = 0;
	for (int y = 0; y < sizeof(dFreq); y++) {
		if (dFreq[y] - oFreq[y] > 0) {
			lNeed += (dFreq[y] - oFreq[y]);
		}
	}
	printf_s("%i", lNeed);
}





//I overthought the porgram at first and ended up confusing myself, left it here as a reminder
	/*
	
	int* oFreq = (int*)calloc(26, sizeof(int)); //frequency of letters
	char* oPosL = (char*)calloc(26,sizeof(char)); //possible letters
	
	int* dFreq = (int*)calloc(26,sizeof(int));
	char* dPosL = (char*)calloc(26,sizeof(char));

	
	//getting frequency of each letter in oSign
	int pTrack = 0, oSize = sizeof(oSign);
	int oTrack = oSize;
	while (oTrack >= 0) {
		oPosL[pTrack] = oSign[pTrack];
		for (int i = 0; i < oSize; i++) {
			if (oPosL[pTrack] == oSign[i]) {
				oFreq[pTrack] += 1;
				oTrack--;
			}
		}
		pTrack++;
		if (pTrack > 100002) {
			break; //failsafe
		}
	}

	int dTrack = sizeof(dSign);
	int lNeed = sizeof(dSign);
	pTrack = 0;
	while (dTrack >= 0) {
		for (int i = 0; i < sizeof(dSign); i++) {
			for (int j = 0; j < sizeof(oSign) {
				if (dSign[i] == oSign[j]) {
					lNeed--;
						oSign[j] = ".";
				}
				else {

				}
			}
		}

		pTrack++;
		if (pTrack > 1000002) {
			break;
		}
	}
	//comparing freqs compare dSign to oPosL then find freq of L in dSign then compare freqs (oFreq - dFreq > 0 = need so add to tNeed)
	
	*/
