/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MimeType.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohilali <mohilali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:22:10 by mohilali          #+#    #+#             */
/*   Updated: 2025/02/26 16:43:58 by mohilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Response.hpp"

std::string Response::getMimeType(std::string &_key){
    std::map<std::string, std::string>::iterator it = this->mimeTypes.find(_key);
    if (it != this->mimeTypes.end()){
        return (this->mimeTypes[_key]);
    }
    else
        return ("");
}