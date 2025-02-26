/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ListNode.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohilali <mohilali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:09:18 by wbelfatm          #+#    #+#             */
/*   Updated: 2025/02/26 16:44:38 by mohilali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_NODE_HPP
# define LIST_NODE_HPP

#include <map>
#include <iostream>
#include <vector>

class ListNode {
    private:
        std::vector<std::string> fields;
        std::string content;
        ListNode *next;
        ListNode *child;

    public:
        ListNode( void );
        ListNode( std::string );
        ListNode( ListNode& );
        ListNode& operator=( ListNode& );
        ~ListNode( void );
        
        void addNext( ListNode* );
        void addChild( ListNode* );
        void addField( std::string );
        std::string getContent( void );
        void setContent( std::string );
        ListNode *getNext( void );
        ListNode *getChild( void );
        bool hasNext( void );
        bool hasChild( void );
        std::vector<std::string> getFields( void );
        
        static void freeListNode( ListNode* );
};

#endif