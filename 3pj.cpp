#include <bits/stdc++.h>
using namespace std;
vector<int> ds(const vector<int>& a) {
    vector<int> res;
    for (int i = 1; i < a.size(); i++) {
        res.push_back(a[i] - a[i - 1]);
    }
    return res;
}
/*For other uses, see Laser (disambiguation).
"Laser beam" redirects here. Not to be confused with LazarBeam or Lazer Beam.
A telescope emitting four orange laser beams
A telescope in the Very Large Telescope system producing four orange laser guide stars
A laser is a device that emits light through a process of optical amplification based on the stimulated emission of electromagnetic radiation. The word laser originated as an acronym for light amplification by stimulated emission of radiation.[1][2] The first laser was built in 1960 by Theodore Maiman at Hughes Research Laboratories, based on theoretical work by Charles H. Townes and Arthur Leonard Schawlow and the optical amplifier patented by Gordon Gould.[3][4][5]

A laser differs from other sources of light in that it emits light that is coherent. Spatial coherence allows a laser to be focused to a tight spot, enabling applications such as optical communication,[6] laser cutting, and lithography. It also allows a laser beam to stay narrow over great distances (collimation), a feature used in applications such as laser pointers, lidar, and free-space optical communication. Lasers can also have high temporal coherence, which permits them to emit light with a very narrow frequency spectrum. Temporal coherence can also be used to produce ultrashort pulses of light with a broad spectrum but durations as short as an attosecond.[7]

Lasers are used in fiber-optic and free-space optical communications, optical disc drives, laser printers, barcode scanners, semiconductor chip manufacturing (photolithography, etching), laser surgery and skin treatments, cutting and welding materials, military and law enforcement devices for marking targets and measuring range and speed, and in laser lighting displays for entertainment. Lasers transport the majority of Internet traffic.[8] The laser is regarded as one of the greatest inventions of the 20th century.[9][10]

Terminology
The first device using amplification by stimulated emission operated at microwave frequencies, and was called a maser, for "microwave amplification by stimulated emission of radiation".[11] When similar optical devices were developed they were first called optical masers, until "microwave" was replaced by "light" in the acronym, to become laser.[12][13][14]

Today, all such devices operating at frequencies higher than microwaves (approximately above 300 GHz) are called lasers (e.g. infrared lasers, ultraviolet lasers, X-ray lasers, gamma-ray lasers), whereas devices operating at microwave or lower radio frequencies are called masers.[15][16]

The back-formed verb "to lase" is frequently used in the field, meaning "to give off coherent light," especially about the gain medium of a laser;[17] when a laser is operating, it is said to be "lasing".[18] The terms laser and maser are also used for naturally occurring coherent emissions, as in astrophysical maser and atom laser.[19][20]

A laser that produces light by itself is technically an optical oscillator rather than an optical amplifier as suggested by the acronym.[21] It has been humorously noted that the acronym LOSER, for "light oscillation by stimulated emission of radiation", would have been more correct.[20][22] Some sources[23][24] refer to the word laser as an anacronym, meaning an acronym so widely used as a noun that it is no longer considered an abbreviation.[25]*/

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
int t;
cin >> t;
    
while (t--) {
int n;
cin >> n;
vector<int> arr(n);
        
for (int i = 0; i < n; i++) {
 cin >> arr[i];
}
if (n == 1) {
cout << arr[0] << endl;
 continue; 
    }
vector<long long> ans;
long long sum = 0;

for (int i = 0; i < arr.size(); i++) {
 sum += arr[i];
 }
/*For other uses, see Laser (disambiguation).
"Laser beam" redirects here. Not to be confused with LazarBeam or Lazer Beam.
A telescope emitting four orange laser beams
A telescope in the Very Large Telescope system producing four orange laser guide stars
A laser is a device that emits light through a process of optical amplification based on the stimulated emission of electromagnetic radiation. The word laser originated as an acronym for light amplification by stimulated emission of radiation.[1][2] The first laser was built in 1960 by Theodore Maiman at Hughes Research Laboratories, based on theoretical work by Charles H. Townes and Arthur Leonard Schawlow and the optical amplifier patented by Gordon Gould.[3][4][5]

A laser differs from other sources of light in that it emits light that is coherent. Spatial coherence allows a laser to be focused to a tight spot, enabling applications such as optical communication,[6] laser cutting, and lithography. It also allows a laser beam to stay narrow over great distances (collimation), a feature used in applications such as laser pointers, lidar, and free-space optical communication. Lasers can also have high temporal coherence, which permits them to emit light with a very narrow frequency spectrum. Temporal coherence can also be used to produce ultrashort pulses of light with a broad spectrum but durations as short as an attosecond.[7]

Lasers are used in fiber-optic and free-space optical communications, optical disc drives, laser printers, barcode scanners, semiconductor chip manufacturing (photolithography, etching), laser surgery and skin treatments, cutting and welding materials, military and law enforcement devices for marking targets and measuring range and speed, and in laser lighting displays for entertainment. Lasers transport the majority of Internet traffic.[8] The laser is regarded as one of the greatest inventions of the 20th century.[9][10]

Terminology
The first device using amplification by stimulated emission operated at microwave frequencies, and was called a maser, for "microwave amplification by stimulated emission of radiation".[11] When similar optical devices were developed they were first called optical masers, until "microwave" was replaced by "light" in the acronym, to become laser.[12][13][14]

Today, all such devices operating at frequencies higher than microwaves (approximately above 300 GHz) are called lasers (e.g. infrared lasers, ultraviolet lasers, X-ray lasers, gamma-ray lasers), whereas devices operating at microwave or lower radio frequencies are called masers.[15][16]

The back-formed verb "to lase" is frequently used in the field, meaning "to give off coherent light," especially about the gain medium of a laser;[17] when a laser is operating, it is said to be "lasing".[18] The terms laser and maser are also used for naturally occurring coherent emissions, as in astrophysical maser and atom laser.[19][20]

A laser that produces light by itself is technically an optical oscillator rather than an optical amplifier as suggested by the acronym.[21] It has been humorously noted that the acronym LOSER, for "light oscillation by stimulated emission of radiation", would have been more correct.[20][22] Some sources[23][24] refer to the word laser as an anacronym, meaning an acronym so widely used as a noun that it is no longer considered an abbreviation.[25]*/
ans.push_back(sum);
for (int i = 0; i < n - 1; i++) {
arr = ds(arr);  
long long nsum = accumulate(arr.begin(), arr.end(), 0LL);
ans.push_back(nsum);
ans.push_back(-nsum);  
}
cout << *max_element(ans.begin(),ans.end()) << endl;
}
return 0;
}
