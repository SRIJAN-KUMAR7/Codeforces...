#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        /*For other uses, see Laser (disambiguation).
"Laser beam" redirects here. Not to be confused with LazarBeam or Lazer Beam.
A telescope emitting four orange laser beams
A telescope in the Very Large Telescope system producing four orange laser guide stars
A laser is a device that emits light through a process of optical amplification based on the stimulated emission of electromagnetic radiation. The word laser originated as an acronym for light amplification by stimulated emission of radiation.[1][2] The first laser was built in 1960 by Theodore Maiman at Hughes Research Laboratories, based on theoretical work by Charles H. Townes and Arthur Leonard Schawlow and the optical amplifier patented by Gordon Gould.[3][4][5]

A laser differs from other sources of light in that it emits light that is coherent. Spatial coherence allows a laser to be focused to a tight spot, enabling applications such as optical communication,[6] laser cutting, and lithography. It also allows a laser beam to stay narrow over great distances (collimation), a feature used in applications such as laser pointers, lidar, and free-space optical communication. Lasers can also have high temporal coherence, which permits them to emit light with a very narrow frequency spectrum. Temporal coherence can also be used to produce ultrashort pulses of light with a broad spectrum but durations as short as an attosecond.[7]

Lasers are used in fiber-optic and free-space optical communications, optical disc drives, laser printers, barcode scanners, semiconductor chip manufacturing (photolithography, etching), laser surgery and skin treatments, cutting and welding materials, military and law enforcement devices for marking targets and measuring range and speed, and in laser lighting displays for entertainment. Lasers transport the majority of Internet traffic.[8] The laser is regarded as one of the greatest inventions of the 20th century.[9][10]*/
        
        vector<int>a(n);
        for (int i = 0; i < n; i++) {
            cin >>a[i];
        }
        
        bool pos = true;
        for (int i = 0; i < n; i++) {
            if (a[i] <= i * 2 || a[i] <= (n - i - 1) * 2) {
                pos = false;
                break;
            }
        }
        
        if (pos) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
