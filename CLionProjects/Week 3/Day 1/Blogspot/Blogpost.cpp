//
// Created by Gáspár Máté on 2019-01-29.
//

#include <string>
#include "BlogPost.h"

BlogPost::BlogPost(std::string aName, std::string cTitle, std::string cText, std::string pDate) {

    authorName = aName;
    title = cTitle;
    text = cText;
    publicationDate = pDate;
}