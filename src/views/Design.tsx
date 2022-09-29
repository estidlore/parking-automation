import type { FC } from "react";
import React from "react";

import { Section } from "components";
import { hmi, sequenceDiagram } from "imgs";


const Design: FC = (): JSX.Element => (
  <Section title={"Diseño"}>
    <p className={"my2"}>
      {"Se identificó la secuencia de actividades que ocurren en el paso de "}
      {"un vehículo por el sistema y se plamó en un diagrama de secuencias."}
    </p>
    <img className={"my2 wp100"} src={sequenceDiagram} />
    <p className={"my2"}>
      {"Para el diseño del HMI, el encendido y apagado del sistema se usa "}
      {"mediante un botón, al igual que el retiro y pago del tiquete. Los "}
      {"sensores se simulan mediante un par de botones y el conteo de autos "}
      {"se muestra mediante cuadros con texto variable."}
    </p>
    <img className={"my2 wp100"} src={hmi} />
  </Section>
);

export { Design };
