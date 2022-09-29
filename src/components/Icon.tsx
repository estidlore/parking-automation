import type { IconProp } from "@fortawesome/fontawesome-svg-core";
import { faAngleRight } from "@fortawesome/free-solid-svg-icons";
import type { FontAwesomeIconProps } from "@fortawesome/react-fontawesome";
import { FontAwesomeIcon } from "@fortawesome/react-fontawesome";
import type { FC } from "react";
import React from "react";

type TIcon = "right";

interface IIconProps
  extends Pick<FontAwesomeIconProps, "className" | "onClick"> {
  icon: TIcon;
}

const icons: Record<TIcon, IconProp> = {
  right: faAngleRight,
};

const Icon: FC<IIconProps> = ({
  className,
  icon,
  onClick,
}: Readonly<IIconProps>): JSX.Element => (
  <FontAwesomeIcon className={className} icon={icons[icon]} onClick={onClick} />
);

export type { IIconProps };
export { Icon };
