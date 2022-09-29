import type { FC } from "react";
import React from "react";

import { Section } from "components";
import { sequenceDiagram } from "imgs";


const Design: FC = (): JSX.Element => (
  <Section title={"Diseño"}>
    <p className={"my2"}>
      {"Se identificó la secuencia de actividades que ocurren en el paso de "}
      {"un vehículo por el sistema y se plamó en un diagrama de secuencias."}
    </p>
    <img className={"my2 wp100"} src={sequenceDiagram} />
  </Section>
);

export { Design };
