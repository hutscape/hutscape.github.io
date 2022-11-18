#include <math.h>
#define R 6371
#define TO_RAD (3.1415926536 / 180)

struct LatLong {
  double latitude;
  double longitude;
};

// 765.77 m
LatLong MBS_Singapore = {1.286547443769761, 103.85941128937007};
LatLong RedDot_Singapore = {1.2803457334388353, 103.85639607918331};

// 295.79 m
LatLong ChampdeMars1_Paris = {48.85485864275493, 2.2963853412614554};
LatLong ChampdeMars2_Paris = {48.856795150819195, 2.2991678376405504};

// 270.22 m
LatLong BrandenburgeGate_Berlin = {52.51643669022059, 13.37765656285026};
LatLong Reichstag_Berlin = {52.518721321304746, 13.376181612747407};

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Distance in Singapore:  ");
  Serial.print(distance(MBS_Singapore.latitude, MBS_Singapore.longitude, RedDot_Singapore.latitude, RedDot_Singapore.longitude), 3);
  Serial.println("m");

  Serial.print("Distance in Paris:  ");
  Serial.print(distance(ChampdeMars1_Paris.latitude, ChampdeMars1_Paris.longitude, ChampdeMars2_Paris.latitude, ChampdeMars2_Paris.longitude), 3);
  Serial.println("m");

  Serial.print("Distance in Berlin:  ");
  Serial.print(distance(BrandenburgeGate_Berlin.latitude, BrandenburgeGate_Berlin.longitude, Reichstag_Berlin.latitude, Reichstag_Berlin.longitude), 3);
  Serial.println("m");

  delay(2000);
}

// https://rosettacode.org/wiki/Haversine_formula#C
double distance(double lat1, double lng1, double lat2, double lng2) {
  double dx, dy, dz;
	lng1 -= lng2;
	lng1 *= TO_RAD, lat1 *= TO_RAD, lat2 *= TO_RAD;

	dz = sin(lat1) - sin(lat2);
	dx = cos(lng1) * cos(lat1) - cos(lat2);
	dy = sin(lng1) * cos(lat1);
	return asin(sqrt(dx * dx + dy * dy + dz * dz) / 2) * 2 * R * 1000; // *1000 for metres
}
