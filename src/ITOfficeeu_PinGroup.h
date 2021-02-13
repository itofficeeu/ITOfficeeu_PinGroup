/*


  https://github.com/itofficeeu/sensor_Library

  Development environment specifics:
  Arduino IDE 1.8.3

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "Arduino.h"

#define PINS_AMOUNT 4

class ITO_PinGroup {
  public:

    void begin( uint8_t pinGroup[], uint8_t pinGroupSize );

    uint8_t indexOfPin(uint8_t pinNumber);

    void pinIndexOn( uint8_t indexNumber ); // Turn on the pin on index 'indexNumber'.
    void pinOn(uint8_t pinNumber);          // Turn on the pin number 'pinNumber'.

    void pinIndexOff( uint8_t indexNumber );
    void pinOff(uint8_t pinNumber);


    //uint8_t pinStatus();
    // array pinsAvailable();

  private:
  
   uint8_t _pinGroup[];
   uint8_t pinGroupSize;
};
