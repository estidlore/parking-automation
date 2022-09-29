import type { FC } from "react";
import React from "react";

import { Section } from "components";
import {
  carsInside,
  ctu,
  systemOnRestriction,
  ticketRestriction,
  tof,
} from "imgs";

const Development: FC = (): JSX.Element => (
  <Section title={"Desarrollo"}>
    <p className={"my2"}>
      {"El desarrollo en ladder se describe a continuación:"}
    </p>
    <p className={"my2"}>
      {"Se empleó una restricción (condición) de que el sistema debe estar en "}
      {"funcionamiento para que los sensores detecten la entrada y salida "}
      {"de vehículos."}
    </p>
    <img className={"wp100 my2"} src={systemOnRestriction} />
    <p className={"my2"}>
      {"Similarmente, se habilitan las barreras de entrada y salida de "}
      {"vehículos una vez se toma y paga el tiquete, respectivamente."}
    </p>
    <img className={"wp100 my2"} src={ticketRestriction} />
    <p className={"my2"}>
      {"Para el cierre automático de las barreras de entrada y salida de un "}
      {"vehículo, se usan temporizadores de apagado con retraso después de "}
      {" la toma y pago del tiquete, respectivamente."}
    </p>
    <img className={"wp100 my2"} src={tof} />
    <p className={"my2"}>
      {"Para el conteo de la entrada y salida de vehículos, se cuenta una "}
      {"entrada una vez que se usa el tiquete para que un vehículo entre y "}
      {"se cuenta una salida una vez que el pago «se usa» para que un "}
      {"salga."}
    </p>
    <img className={"wp100 my2"} src={ctu} />
    <p className={"my2"}>
      {"Como adicional, se agregó una resta entre los vehículos que han "}
      {"entrado y salido para conocer la cantidad que se encuentra dentro del "}
      {"parqueadero."}
    </p>
    <img className={"wp100 my2"} src={carsInside} />
  </Section>
);

export { Development };
