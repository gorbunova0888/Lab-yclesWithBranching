/*******************************
* Автор: Горбунова Настя       *
* Вариант: 5                   *
* Задание: Циклы с ветвлениями *
*******************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  constexpr double g = 9.81;
  int loopCount;
  double tG, tV, viscosity;
  double diametr, Gr, Nu;

  cout << "Enter loopCount: ";
  cin >> loopCount;

  cout << "Enter tG: ";
  cin >> tG;

  cout << "Enter tV: ";
  cin >> tV;

  cout << "Enter viscosity: ";
  cin >> viscosity;

  double theta = viscosity/100000;
  double theta_squared = theta * theta;

  cout << "\nd    Gr    Nu" << endl;

  for (int loopIndex = 0; loopIndex < loopCount; ++loopIndex) {
    cout << "Enter diametr: ";
	cin >> diametr;

	Gr = (g * diametr * diametr * diametr / theta_squared) * ((tG - tV) / (tV + 273.0));

	if (Gr < pow(10.0, 9.0)) {
	  Nu = 0.76 * pow(Gr, 0.22);
	} else {
	  Nu = 0.15 * pow(Gr, 0.35);
	}

	cout << diametr << "    " << Gr << "    " << Nu << "\n";
  }

	return 0;
}