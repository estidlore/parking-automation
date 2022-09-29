import type { FC } from "react";
import React from "react";

import { Section } from "components";

const codeVars =
` carsInside: INT := 0;
	isSystemOn: BOOL := FALSE;
	// Coming in
	carsCameIn: INT;
	hasTicket: BOOL := FALSE;
	isBarrierInOpen: BOOL := FALSE;
	isComingIn: BOOL := FALSE;
	
	CtuIn: CTU;
	TofIn: TOF;
	TofIn_ET: TIME;
	
	// Coming out
	carsCameOut: INT;
	hasPaid: BOOL := FALSE;
	isBarrierOutOpen: BOOL := FALSE;
	isComingOut: BOOL := FALSE;
	
	CtuOut: CTU;
	TofOut: TOF;
	TofOut_ET: TIME;
`;

const codeConsts =
` TofIn_PT: TIME := T#3S;
  TofOut_PT: TIME := T#3S;`;

const Variables: FC = (): JSX.Element => (
  <Section title={"Variables"}>
    <p className={"my2"}>
      {"Inicialmente, se definieron las variables y constantes necesarias "}
      {"para el funcionamiento del sistema."}
    </p>
    <p className={"my2"}>
      {"Se definieron las variables «carsInside», «carsCameIn» y "}
      {"«carsCameOut», para el conteo del número de vehículos que han "}
      {"ingresado, salido y que están en el parqueadero, de tipo numérico "}
      {"(INT) y con un valor inicial de «cero (0)» y la variable «isSystemOn» "}
      {"de tipo booleano (BOOL) para el encendido y apagado del sistema con "}
      {"un valor inicial de «falso»."}
    </p>
    <p className={"my2"}>
      {"Se definieron las variables «isComingIn» y «isComingOut» de tipo "}
      {"booleano para los sensores que detectan el ingreso y salida de los "}
      {"vehículos con valor inicial «falso». De la misma manera, se "}
      {"definieron las variables «isBarrierInOpen» y «isBarrierOutOpen» para "}
      {"la apertura de las barreras de entrada y salida respectivamente. "}
      {"Tambien, del mismo modo se definieron las variables «hasTicket» y "}
      {"«hasPaid» para la toma y pago del ticket, respectivamente."}
    </p>
    <p className={"my2"}>
      {"Finalmente, se definieron las variables «TofIn» de tipo «temporizador "}
      {"con retraso de apagado (TOF)» para la entrada y «TofIn» para la "}
      {"salida. Adicionalmente, las variables «TofIn_ET» y «TofOut_ET» son de "}
      {"tipo tiempo (TIME) y contabilizan el tiempo desde que se dispara el "}
      {"apagado de la señal de entrada. En adición, las variables «CtuIn» y "}
      {"«CtuOut» sirven de instancias para los contadores de entrada y salida "}
      {"de vehículos."}
    </p>
    <p className={"my2"}>
      {"El código empleado para la definición de las variables se encuentra a "}
      {"continuación:"}
    </p>
    <p className={"my2"}>{codeVars}</p>
    <p className={"my2"}>
      {"Solo se definieron las constantes «TofIn_PT» y «TofOut_PT» de tipo "}
      {"tiempo con valor de 3 segundos para el retraso en el cierre de las "}
      {"barreras de entrada y salida."}
    </p>
    <p>
      {"El código empleado para la definición de las constantes se encuentra "}
      {"a continuación:"}
    </p>
    <p className={"my2"}>{codeConsts}</p>
  </Section>
);

export { Variables };
