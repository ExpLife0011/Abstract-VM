/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OperandFactory.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frmarinh <frmarinh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:39:47 by frmarinh          #+#    #+#             */
/*   Updated: 2017/12/12 13:39:57 by frmarinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OperandFactory.hpp"

IOperand const *OperandFactory::createInt8(std::string const &value) const
{
	Operand<int8_t> *operand = new Operand<int8_t>(eOperandType::Int8, value);
	return (operand);
}

IOperand const *OperandFactory::createInt16(std::string const &value) const
{
	Operand<int16_t> *operand = new Operand<int16_t>(eOperandType::Int16, value);
	return (operand);
}

IOperand const *OperandFactory::createInt32(std::string const &value) const
{
	Operand<int32_t> *operand = new Operand<int32_t>(eOperandType::Int32, value);
	return (operand);
}

IOperand const *OperandFactory::createFloat(std::string const &value) const
{
	Operand<float> *operand = new Operand<float>(eOperandType::Float, value);
	return (operand);
}

IOperand const *OperandFactory::createDouble(std::string const &value) const
{
	Operand<double> *operand = new Operand<double>(eOperandType::Double, value);
	return (operand);
}

IOperand const *OperandFactory::createOperand(eOperandType type, std::string const& value) const
{
	switch (type)
	{
		case eOperandType::Int8:
			return (this->createInt8(value));
		break;

		case eOperandType::Int16:
			return (this->createInt16(value));
		break;

		case eOperandType::Int32:
			return (this->createInt32(value));
		break;

		case eOperandType::Float:
			return (this->createFloat(value));
		break;

		case eOperandType::Double:
			return (this->createDouble(value));
		break;
	}
	return (NULL);
}
