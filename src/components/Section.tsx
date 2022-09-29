import type { FC, ReactNode } from "react";
import React, { useCallback, useState } from "react";

import { Icon } from "./Icon";

interface ISectionProps {
  children: ReactNode;
  title: string;
}

const Section: FC<ISectionProps> = ({
  children,
  title,
}: Readonly<ISectionProps>): JSX.Element => {
  const [show, setShow] = useState(true);

  const toggleShow = useCallback(() => {
    setShow(!show);
  }, [show, setShow]);

  return (
    <section className={"w10"}>
      <p className={"f6 fw7 mb3 mt5"}>
        <Icon
          className={`mr3 ${show ? "rot90" : ""}`}
          icon={"right"}
          onClick={toggleShow}
        />
        {title}
      </p>
      <div className={`bg-light2 p4 rnd trn3 ws-pl ${show ? "show" : "hide"}`}>
        {children}
      </div>
    </section>
  );
};

export type { ISectionProps };
export { Section };
