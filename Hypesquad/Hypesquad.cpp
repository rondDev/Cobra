#include <iostream>
#include <string>
#include <Windows.h>
#include "curl/curl.h"
#include "Colorful.h"

void request();

void Title();

int id = 0;

std::string token = "";

std::string title = "Cobra - Discord Hypesquad Switcher - by rond#7315";


std::string font = "flf2a$ 6 5 16 15 10 0 18319\nSlant by Glenn Chappell 3/93 -- based on Standard\nIncludes ISO Latin-1\nfiglet release 2.1 -- 12 Aug 1994\nPermission is hereby given to modify this font, as long as the\nmodifier's name is placed on a comment line.\n\nModified by Paul Burton <solution@earthlink.net> 12/96 to include new parameter\nsupported by FIGlet and FIGWin.  May also be slightly modified for better use\nof new full-width/kern/smush alternatives, but default output is NOT changed.\n\n     $$@\n    $$ @\n   $$  @\n  $$   @\n $$    @\n$$     @@\n    __@\n   / /@\n  / / @\n /_/  @\n(_)   @\n      @@\n _ _ @\n( | )@\n|/|/ @\n $   @\n$    @\n     @@\n     __ __ @\n  __/ // /_@\n /_  _  __/@\n/_  _  __/ @\n /_//_/    @\n           @@\n     __@\n   _/ /@\n  / __/@\n (_  ) @\n/  _/  @\n/_/    @@\n   _   __@\n  (_)_/_/@\n   _/_/  @\n _/_/_   @\n/_/ (_)  @\n         @@\n   ___   @\n  ( _ )  @\n / __ \/|@\n/ /_/  < @\n\____/\/ @\n         @@\n  _ @\n ( )@\n |/ @\n $  @\n$   @\n    @@\n     __@\n   _/_/@\n  / /  @\n / /   @\n/ /    @\n|_|    @@\n     _ @\n    | |@\n    / /@\n   / / @\n _/_/  @\n/_/    @@\n       @\n  __/|_@\n |    /@\n/_ __| @\n |/    @\n       @@\n       @\n    __ @\n __/ /_@\n/_  __/@\n /_/   @\n       @@\n   @\n   @\n   @\n _ @\n( )@\n|/ @@\n       @\n       @\n ______@\n/_____/@\n  $    @\n       @@\n   @\n   @\n   @\n _ @\n(_)@\n   @@\n       __@\n     _/_/@\n   _/_/  @\n _/_/    @\n/_/      @\n         @@\n   ____ @\n  / __ \@\n / / / /@\n/ /_/ / @\n\____/  @\n        @@\n   ___@\n  <  /@\n  / / @\n / /  @\n/_/   @\n      @@\n   ___ @\n  |__ \@\n  __/ /@\n / __/ @\n/____/ @\n       @@\n   _____@\n  |__  /@\n   /_ < @\n ___/ / @\n/____/  @\n        @@\n   __ __@\n  / // /@\n / // /_@\n/__  __/@\n  /_/   @\n        @@\n    ______@\n   / ____/@\n  /___ \  @\n ____/ /  @\n/_____/   @\n          @@\n   _____@\n  / ___/@\n / __ \ @\n/ /_/ / @\n\____/  @\n        @@\n _____@\n/__  /@\n  / / @\n / /  @\n/_/   @\n      @@\n   ____ @\n  ( __ )@\n / __  |@\n/ /_/ / @\n\____/  @\n        @@\n   ____ @\n  / __ \@\n / /_/ /@\n \__, / @\n/____/  @\n        @@\n     @\n   _ @\n  (_)@\n _   @\n(_)  @\n     @@\n     @\n   _ @\n  (_)@\n _   @\n( )  @\n|/   @@\n  __@\n / /@\n/ / @\n\ \ @\n \_\@\n    @@\n       @\n  _____@\n /____/@\n/____/ @\n  $    @\n       @@\n__  @\n\ \ @\n \ \@\n / /@\n/_/ @\n    @@\n  ___ @\n /__ \@\n  / _/@\n /_/  @\n(_)   @\n      @@\n   ______ @\n  / ____ \@\n / / __ `/@\n/ / /_/ / @\n\ \__,_/  @\n \____/   @@\n    ___ @\n   /   |@\n  / /| |@\n / ___ |@\n/_/  |_|@\n        @@\n    ____ @\n   / __ )@\n  / __  |@\n / /_/ / @\n/_____/  @\n         @@\n   ______@\n  / ____/@\n / /     @\n/ /___   @\n\____/   @\n         @@\n    ____ @\n   / __ \@\n  / / / /@\n / /_/ / @\n/_____/  @\n         @@\n    ______@\n   / ____/@\n  / __/   @\n / /___   @\n/_____/   @\n          @@\n    ______@\n   / ____/@\n  / /_    @\n / __/    @\n/_/       @\n          @@\n   ______@\n  / ____/@\n / / __  @\n/ /_/ /  @\n\____/   @\n         @@\n    __  __@\n   / / / /@\n  / /_/ / @\n / __  /  @\n/_/ /_/   @\n          @@\n    ____@\n   /  _/@\n   / /  @\n _/ /   @\n/___/   @\n        @@\n       __@\n      / /@\n __  / / @\n/ /_/ /  @\n\____/   @\n         @@\n    __ __@\n   / //_/@\n  / ,<   @\n / /| |  @\n/_/ |_|  @\n         @@\n    __ @\n   / / @\n  / /  @\n / /___@\n/_____/@\n       @@\n    __  ___@\n   /  |/  /@\n  / /|_/ / @\n / /  / /  @\n/_/  /_/   @\n           @@\n    _   __@\n   / | / /@\n  /  |/ / @\n / /|  /  @\n/_/ |_/   @\n          @@\n   ____ @\n  / __ \@\n / / / /@\n/ /_/ / @\n\____/  @\n        @@\n    ____ @\n   / __ \@\n  / /_/ /@\n / ____/ @\n/_/      @\n         @@\n   ____ @\n  / __ \@\n / / / /@\n/ /_/ / @\n\___\_\ @\n        @@\n    ____ @\n   / __ \@\n  / /_/ /@\n / _, _/ @\n/_/ |_|  @\n         @@\n   _____@\n  / ___/@\n  \__ \ @\n ___/ / @\n/____/  @\n        @@\n  ______@\n /_  __/@\n  / /   @\n / /    @\n/_/     @\n        @@\n   __  __@\n  / / / /@\n / / / / @\n/ /_/ /  @\n\____/   @\n         @@\n _    __@\n| |  / /@\n| | / / @\n| |/ /  @\n|___/   @\n        @@\n _       __@\n| |     / /@\n| | /| / / @\n| |/ |/ /  @\n|__/|__/   @\n           @@\n   _  __@\n  | |/ /@\n  |   / @\n /   |  @\n/_/|_|  @\n        @@\n__  __@\n\ \/ /@\n \  / @\n / /  @\n/_/   @\n      @@\n _____@\n/__  /@\n  / / @\n / /__@\n/____/@\n      @@\n     ___@\n    / _/@\n   / /  @\n  / /   @\n / /    @\n/__/    @@\n__    @\n\ \   @\n \ \  @\n  \ \ @\n   \_\@\n      @@\n     ___@\n    /  /@\n    / / @\n   / /  @\n _/ /   @\n/__/    @@\n  //|@\n |/||@\n  $  @\n $   @\n$    @\n     @@\n       @\n       @\n       @\n       @\n ______@\n/_____/@@\n  _ @\n ( )@\n  V @\n $  @\n$   @\n    @@\n        @\n  ____ _@\n / __ `/@\n/ /_/ / @\n\__,_/  @\n        @@\n    __  @\n   / /_ @\n  / __ \@\n / /_/ /@\n/_.___/ @\n        @@\n       @\n  _____@\n / ___/@\n/ /__  @\n\___/  @\n       @@\n       __@\n  ____/ /@\n / __  / @\n/ /_/ /  @\n\__,_/   @\n         @@\n      @\n  ___ @\n / _ \@\n/  __/@\n\___/ @\n      @@\n    ____@\n   / __/@\n  / /_  @\n / __/  @\n/_/     @\n        @@\n         @\n   ____ _@\n  / __ `/@\n / /_/ / @\n \__, /  @\n/____/   @@\n    __  @\n   / /_ @\n  / __ \@\n / / / /@\n/_/ /_/ @\n        @@\n    _ @\n   (_)@\n  / / @\n / /  @\n/_/   @\n      @@\n       _ @\n      (_)@\n     / / @\n    / /  @\n __/ /   @\n/___/    @@\n    __  @\n   / /__@\n  / //_/@\n / ,<   @\n/_/|_|  @\n        @@\n    __@\n   / /@\n  / / @\n / /  @\n/_/   @\n      @@\n            @\n   ____ ___ @\n  / __ `__ \@\n / / / / / /@\n/_/ /_/ /_/ @\n            @@\n        @\n   ____ @\n  / __ \@\n / / / /@\n/_/ /_/ @\n        @@\n       @\n  ____ @\n / __ \@\n/ /_/ /@\n\____/ @\n       @@\n         @\n    ____ @\n   / __ \@\n  / /_/ /@\n / .___/ @\n/_/      @@\n        @\n  ____ _@\n / __ `/@\n/ /_/ / @\n\__, /  @\n  /_/   @@\n        @\n   _____@\n  / ___/@\n / /    @\n/_/     @\n        @@\n        @\n   _____@\n  / ___/@\n (__  ) @\n/____/  @\n        @@\n   __ @\n  / /_@\n / __/@\n/ /_  @\n\__/  @\n      @@\n        @\n  __  __@\n / / / /@\n/ /_/ / @\n\__,_/  @\n        @@\n       @\n _   __@\n| | / /@\n| |/ / @\n|___/  @\n       @@\n          @\n _      __@\n| | /| / /@\n| |/ |/ / @\n|__/|__/  @\n          @@\n        @\n   _  __@\n  | |/_/@\n _>  <  @\n/_/|_|  @\n        @@\n         @\n   __  __@\n  / / / /@\n / /_/ / @\n \__, /  @\n/____/   @@\n     @\n ____@\n/_  /@\n / /_@\n/___/@\n     @@\n     __@\n   _/_/@\n _/_/  @\n< <    @\n/ /    @\n\_\    @@\n     __@\n    / /@\n   / / @\n  / /  @\n / /   @\n/_/    @@\n     _ @\n    | |@\n    / /@\n   _>_>@\n _/_/  @\n/_/    @@\n  /\//@\n //\/ @\n  $   @\n $    @\n$     @\n      @@\n    _  _ @\n   (_)(_)@\n  / _ |  @\n / __ |  @\n/_/ |_|  @\n         @@\n   _   _ @\n  (_)_(_)@\n / __ \  @\n/ /_/ /  @\n\____/   @\n         @@\n   _   _ @\n  (_) (_)@\n / / / / @\n/ /_/ /  @\n\____/   @\n         @@\n   _   _ @\n  (_)_(_)@\n / __ `/ @\n/ /_/ /  @\n\__,_/   @\n         @@\n   _   _ @\n  (_)_(_)@\n / __ \  @\n/ /_/ /  @\n\____/   @\n         @@\n   _   _ @\n  (_) (_)@\n / / / / @\n/ /_/ /  @\n\__,_/   @\n         @@\n     ____ @\n    / __ \@\n   / / / /@\n  / /_| | @\n / //__/  @\n/_/       @@\n160  NO-BREAK SPACE\n     $$@\n    $$ @\n   $$  @\n  $$   @\n $$    @\n$$     @@\n161  INVERTED EXCLAMATION MARK\n    _ @\n   (_)@\n  / / @\n / /  @\n/_/   @\n      @@\n162  CENT SIGN\n     __@\n  __/ /@\n / ___/@\n/ /__  @\n\  _/  @\n/_/    @@\n163  POUND SIGN\n     ____ @\n    / ,__\@\n __/ /_   @\n _/ /___  @\n(_,____/  @\n          @@\n164  CURRENCY SIGN\n    /|___/|@\n   | __  / @\n  / /_/ /  @\n /___  |   @\n|/   |/    @\n           @@\n165  YEN SIGN\n    ____@\n  _| / /@\n /_  __/@\n/_  __/ @\n /_/    @\n        @@\n166  BROKEN BAR\n     __@\n    / /@\n   /_/ @\n  __   @\n / /   @\n/_/    @@\n167  SECTION SIGN\n     __ @\n   _/ _)@\n  / | | @\n | || | @\n | |_/  @\n(__/    @@\n168  DIAERESIS\n  _   _ @\n (_) (_)@\n  $   $ @\n $   $  @\n$   $   @\n        @@\n169  COPYRIGHT SIGN\n    ______  @\n   / _____\ @\n  / / ___/ |@\n / / /__  / @\n|  \___/ /  @\n \______/   @@\n170  FEMININE ORDINAL INDICATOR\n   ___ _@\n  / _ `/@\n _\_,_/ @\n/____/  @\n $      @\n        @@\n171  LEFT-POINTING DOUBLE ANGLE QUOTATION MARK\n  ____@\n / / /@\n/ / / @\n\ \ \ @\n \_\_\@\n      @@\n172  NOT SIGN\n       @\n ______@\n/___  /@\n   /_/ @\n $     @\n       @@\n173  SOFT HYPHEN\n      @\n      @\n _____@\n/____/@\n  $   @\n      @@\n174  REGISTERED SIGN\n    ______  @\n   / ___  \ @\n  / / _ \  |@\n / / , _/ / @\n| /_/|_| /  @\n \______/   @@\n175  MACRON\n ______@\n/_____/@\n  $    @\n $     @\n$      @\n       @@\n176  DEGREE SIGN\n  ___ @\n / _ \@\n/ // /@\n\___/ @\n $    @\n      @@\n177  PLUS-MINUS SIGN\n      __ @\n   __/ /_@\n  /_  __/@\n __/_/_  @\n/_____/  @\n         @@\n178  SUPERSCRIPT TWO\n   ___ @\n  |_  |@\n / __/ @\n/____/ @\n $     @\n       @@\n179  SUPERSCRIPT THREE\n   ____@\n  |_  /@\n _/_ < @\n/____/ @\n $     @\n       @@\n180  ACUTE ACCENT\n  __@\n /_/@\n  $ @\n $  @\n$   @\n    @@\n181  MICRO SIGN\n          @\n    __  __@\n   / / / /@\n  / /_/ / @\n / ._,_/  @\n/_/       @@\n182  PILCROW SIGN\n  _______@\n / _    /@\n/ (/ / / @\n\_  / /  @\n /_/_/   @\n         @@\n183  MIDDLE DOT\n   @\n _ @\n(_)@\n $ @\n$  @\n   @@\n184  CEDILLA\n   @\n   @\n   @\n   @\n _ @\n/_)@@\n185  SUPERSCRIPT ONE\n  ___@\n <  /@\n / / @\n/_/  @\n$    @\n     @@\n186  MASCULINE ORDINAL INDICATOR\n   ___ @\n  / _ \@\n _\___/@\n/____/ @\n $     @\n       @@\n187  RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK\n____  @\n\ \ \ @\n \ \ \@\n / / /@\n/_/_/ @\n      @@\n188  VULGAR FRACTION ONE QUARTER\n  ___   __ @\n <  / _/_/ @\n / /_/_/___@\n/_//_// / /@\n /_/ /_  _/@\n      /_/  @@\n189  VULGAR FRACTION ONE HALF\n  ___   __   @\n <  / _/_/__ @\n / /_/_/|_  |@\n/_//_/ / __/ @\n /_/  /____/ @\n             @@\n190  VULGAR FRACTION THREE QUARTERS\n   ____    __ @\n  |_  /  _/_/ @\n _/_ < _/_/___@\n/____//_// / /@\n    /_/ /_  _/@\n         /_/  @@\n191  INVERTED QUESTION MARK\n    _ @\n   (_)@\n _/ / @\n/ _/_ @\n\___/ @\n      @@\n192  LATIN CAPITAL LETTER A WITH GRAVE\n    __ @\n   _\_\@\n  / _ |@\n / __ |@\n/_/ |_|@\n       @@\n193  LATIN CAPITAL LETTER A WITH ACUTE\n     __@\n   _/_/@\n  / _ |@\n / __ |@\n/_/ |_|@\n       @@\n194  LATIN CAPITAL LETTER A WITH CIRCUMFLEX\n     //|@\n   _|/||@\n  / _ | @\n / __ | @\n/_/ |_| @\n        @@\n195  LATIN CAPITAL LETTER A WITH TILDE\n     /\//@\n   _//\/ @\n  / _ |  @\n / __ |  @\n/_/ |_|  @\n         @@\n196  LATIN CAPITAL LETTER A WITH DIAERESIS\n    _  _ @\n   (_)(_)@\n  / _ |  @\n / __ |  @\n/_/ |_|  @\n         @@\n197  LATIN CAPITAL LETTER A WITH RING ABOVE\n    (())@\n   /   |@\n  / /| |@\n / ___ |@\n/_/  |_|@\n        @@\n198  LATIN CAPITAL LETTER AE\n    __________@\n   /     ____/@\n  / /|  __/   @\n / __  /___   @\n/_/ /_____/   @\n              @@\n199  LATIN CAPITAL LETTER C WITH CEDILLA\n   ______@\n  / ____/@\n / /     @\n/ /___   @\n\____/   @\n /_)     @@\n200  LATIN CAPITAL LETTER E WITH GRAVE\n    __ @\n   _\_\@\n  / __/@\n / _/  @\n/___/  @\n       @@\n201  LATIN CAPITAL LETTER E WITH ACUTE\n     __@\n   _/_/@\n  / __/@\n / _/  @\n/___/  @\n       @@\n202  LATIN CAPITAL LETTER E WITH CIRCUMFLEX\n     //|@\n   _|/||@\n  / __/ @\n / _/   @\n/___/   @\n        @@\n203  LATIN CAPITAL LETTER E WITH DIAERESIS\n    _  _ @\n   (_)(_)@\n  / __/  @\n / _/    @\n/___/    @\n         @@\n204  LATIN CAPITAL LETTER I WITH GRAVE\n    __ @\n   _\_\@\n  /  _/@\n _/ /  @\n/___/  @\n       @@\n205  LATIN CAPITAL LETTER I WITH ACUTE\n     __@\n   _/_/@\n  /  _/@\n _/ /  @\n/___/  @\n       @@\n206  LATIN CAPITAL LETTER I WITH CIRCUMFLEX\n     //|@\n   _|/||@\n  /  _/ @\n _/ /   @\n/___/   @\n        @@\n207  LATIN CAPITAL LETTER I WITH DIAERESIS\n    _  _ @\n   (_)(_)@\n  /  _/  @\n _/ /    @\n/___/    @\n         @@\n208  LATIN CAPITAL LETTER ETH\n     ____ @\n    / __ \@\n __/ /_/ /@\n/_  __/ / @\n /_____/  @\n          @@\n209  LATIN CAPITAL LETTER N WITH TILDE\n     /\//@\n   _//\/ @\n  / |/ / @\n /    /  @\n/_/|_/   @\n         @@\n210  LATIN CAPITAL LETTER O WITH GRAVE\n    __ @\n  __\_\@\n / __ \@\n/ /_/ /@\n\____/ @\n       @@\n211  LATIN CAPITAL LETTER O WITH ACUTE\n     __@\n  __/_/@\n / __ \@\n/ /_/ /@\n\____/ @\n       @@\n212  LATIN CAPITAL LETTER O WITH CIRCUMFLEX\n    //|@\n  _|/||@\n / __ \@\n/ /_/ /@\n\____/ @\n       @@\n213  LATIN CAPITAL LETTER O WITH TILDE\n    /\//@\n  _//\/ @\n / __ \ @\n/ /_/ / @\n\____/  @\n        @@\n214  LATIN CAPITAL LETTER O WITH DIAERESIS\n   _   _ @\n  (_)_(_)@\n / __ \  @\n/ /_/ /  @\n\____/   @\n         @@\n215  MULTIPLICATION SIGN\n     @\n     @\n /|/|@\n > < @\n|/|/ @\n     @@\n216  LATIN CAPITAL LETTER O WITH STROKE\n   _____ @\n  / _// \@\n / //// /@\n/ //// / @\n\_//__/  @\n         @@\n217  LATIN CAPITAL LETTER U WITH GRAVE\n    __  @\n  __\_\_@\n / / / /@\n/ /_/ / @\n\____/  @\n        @@\n218  LATIN CAPITAL LETTER U WITH ACUTE\n     __ @\n  __/_/_@\n / / / /@\n/ /_/ / @\n\____/  @\n        @@\n219  LATIN CAPITAL LETTER U WITH CIRCUMFLEX\n    //| @\n  _|/||_@\n / / / /@\n/ /_/ / @\n\____/  @\n        @@\n220  LATIN CAPITAL LETTER U WITH DIAERESIS\n   _   _ @\n  (_) (_)@\n / / / / @\n/ /_/ /  @\n\____/   @\n         @@\n221  LATIN CAPITAL LETTER Y WITH ACUTE\n   __ @\n__/_/_@\n\ \/ /@\n \  / @\n /_/  @\n      @@\n222  LATIN CAPITAL LETTER THORN\n    __  @\n   / /_ @\n  / __ \@\n / ____/@\n/_/     @\n        @@\n223  LATIN SMALL LETTER SHARP S\n     ____ @\n    / __ \@\n   / / / /@\n  / /_| | @\n / //__/  @\n/_/       @@\n224  LATIN SMALL LETTER A WITH GRAVE\n    __  @\n  __\_\_@\n / __ `/@\n/ /_/ / @\n\__,_/  @\n        @@\n225  LATIN SMALL LETTER A WITH ACUTE\n     __ @\n  __/_/_@\n / __ `/@\n/ /_/ / @\n\__,_/  @\n        @@\n226  LATIN SMALL LETTER A WITH CIRCUMFLEX\n    //| @\n  _|/||_@\n / __ `/@\n/ /_/ / @\n\__,_/  @\n        @@\n227  LATIN SMALL LETTER A WITH TILDE\n    /\//@\n  _//\/_@\n / __ `/@\n/ /_/ / @\n\__,_/  @\n        @@\n228  LATIN SMALL LETTER A WITH DIAERESIS\n   _   _ @\n  (_)_(_)@\n / __ `/ @\n/ /_/ /  @\n\__,_/   @\n         @@\n229  LATIN SMALL LETTER A WITH RING ABOVE\n     __ @\n  __(())@\n / __ `/@\n/ /_/ / @\n\__,_/  @\n        @@\n230  LATIN SMALL LETTER AE\n           @\n  ____ ___ @\n / __ ` _ \@\n/ /_/   __/@\n\__,_____/ @\n           @@\n231  LATIN SMALL LETTER C WITH CEDILLA\n       @\n  _____@\n / ___/@\n/ /__  @\n\___/  @\n/_)    @@\n232  LATIN SMALL LETTER E WITH GRAVE\n   __ @\n  _\_\@\n / _ \@\n/  __/@\n\___/ @\n      @@\n233  LATIN SMALL LETTER E WITH ACUTE\n    __@\n  _/_/@\n / _ \@\n/  __/@\n\___/ @\n      @@\n234  LATIN SMALL LETTER E WITH CIRCUMFLEX\n    //|@\n  _|/||@\n / _ \ @\n/  __/ @\n\___/  @\n       @@\n235  LATIN SMALL LETTER E WITH DIAERESIS\n   _  _ @\n  (_)(_)@\n / _ \  @\n/  __/  @\n\___/   @\n        @@\n236  LATIN SMALL LETTER I WITH GRAVE\n   __ @\n   \_\@\n  / / @\n / /  @\n/_/   @\n      @@\n237  LATIN SMALL LETTER I WITH ACUTE\n    __@\n   /_/@\n  / / @\n / /  @\n/_/   @\n      @@\n238  LATIN SMALL LETTER I WITH CIRCUMFLEX\n    //|@\n   |/||@\n  / /  @\n / /   @\n/_/    @\n       @@\n239  LATIN SMALL LETTER I WITH DIAERESIS\n  _   _ @\n (_)_(_)@\n  / /   @\n / /    @\n/_/     @\n        @@\n240  LATIN SMALL LETTER ETH\n     || @\n    =||=@\n ___ || @\n/ __` | @\n\____/  @\n        @@\n241  LATIN SMALL LETTER N WITH TILDE\n     /\//@\n   _//\/ @\n  / __ \ @\n / / / / @\n/_/ /_/  @\n         @@\n242  LATIN SMALL LETTER O WITH GRAVE\n    __ @\n  __\_\@\n / __ \@\n/ /_/ /@\n\____/ @\n       @@\n243  LATIN SMALL LETTER O WITH ACUTE\n     __@\n  __/_/@\n / __ \@\n/ /_/ /@\n\____/ @\n       @@\n244  LATIN SMALL LETTER O WITH CIRCUMFLEX\n    //|@\n  _|/||@\n / __ \@\n/ /_/ /@\n\____/ @\n       @@\n245  LATIN SMALL LETTER O WITH TILDE\n    /\//@\n  _//\/ @\n / __ \ @\n/ /_/ / @\n\____/  @\n        @@\n246  LATIN SMALL LETTER O WITH DIAERESIS\n   _   _ @\n  (_)_(_)@\n / __ \  @\n/ /_/ /  @\n\____/   @\n         @@\n247  DIVISION SIGN\n       @\n    _  @\n __(_)_@\n/_____/@\n (_)   @\n       @@\n248  LATIN SMALL LETTER O WITH STROKE\n        @\n  _____ @\n / _// \@\n/ //// /@\n\_//__/ @\n        @@\n249  LATIN SMALL LETTER U WITH GRAVE\n    __  @\n  __\_\_@\n / / / /@\n/ /_/ / @\n\__,_/  @\n        @@\n250  LATIN SMALL LETTER U WITH ACUTE\n     __ @\n  __/_/_@\n / / / /@\n/ /_/ / @\n\__,_/  @\n        @@\n251  LATIN SMALL LETTER U WITH CIRCUMFLEX\n    //| @\n  _|/||_@\n / / / /@\n/ /_/ / @\n\__,_/  @\n        @@\n252  LATIN SMALL LETTER U WITH DIAERESIS\n   _   _ @\n  (_) (_)@\n / / / / @\n/ /_/ /  @\n\__,_/   @\n         @@\n253  LATIN SMALL LETTER Y WITH ACUTE\n      __ @\n   __/_/_@\n  / / / /@\n / /_/ / @\n \__, /  @\n/____/   @@\n254  LATIN SMALL LETTER THORN\n     __  @\n    / /_ @\n   / __ \@\n  / /_/ /@\n / .___/ @\n/_/      @@\n255  LATIN SMALL LETTER Y WITH DIAERESIS\n    _   _ @\n   (_) (_)@\n  / / / / @\n / /_/ /  @\n \__, /   @\n/____/    @@\n";

size_t write_data(void* buffer, size_t size, size_t nmemb, void* userp)
{
    return size * nmemb;
}

int main()
{
    SetConsoleTitleA(title.c_str());
    Title();
    std::cout << "Token: ";
    std::cin >> token;
    while (true) 
    {
        system("cls");
        Title();
        std::cout << "[1] Hypersquad Bravery\n[2] Hypersquad Brilliance\n[3] Hypersquad Balance\n\nSelect one: ";
        std::cin >> id;
        request();
    }
    std::cin.get();
}

void request()
{
    CURL* hnd = curl_easy_init();

    curl_easy_setopt(hnd, CURLOPT_CUSTOMREQUEST, "POST");
    curl_easy_setopt(hnd, CURLOPT_URL, "https://discord.com/api/v6/hypesquad/online");

    std::string auth = "authorization: " + token;
    

    struct curl_slist* headers = NULL;
    headers = curl_slist_append(headers, "content-type: application/json");
    headers = curl_slist_append(headers, auth.c_str());
    curl_easy_setopt(hnd, CURLOPT_HTTPHEADER, headers);
    curl_easy_setopt(hnd, CURLOPT_WRITEFUNCTION, write_data);

    std::string post = "{\"house_id\":" + std::to_string(id) + "}";
    
    curl_easy_setopt(hnd, CURLOPT_POSTFIELDS, post.c_str());

    CURLcode ret = curl_easy_perform(hnd);

    long http_code = 0;
    curl_easy_getinfo(hnd, CURLINFO_RESPONSE_CODE, &http_code);

    if (http_code == 204)
    {
        std::cout << "Success! Changed your hypesquad house!";
        Sleep(3000);
    }
    else if(http_code == 429)
    {
        std::cout << "You are rate-limited. Try again in a few minutes.";
        Sleep(3000);
    }
    else if(http_code == 401)
    {
        std::cout << "Invalid token.";
        Sleep(3000);
    }
    else
    {
        std::cout << "I'm gonna be honest chief, idk wtf happened there, some error by the code of" << http_code;
        Sleep(3000);
    }
}

void Title() 
{
    colorful::WriteTitle("Cobra", font, RGB(50, 168, 102), colorful::Alignment::Middle, true);
    std::string a = "[Coded by rond - @rondDev]";
    std::string b = "[https://discord.gg/adfZkQ9]";
    COLORREF color = RGB(245, 66, 66);
    colorful::Write(a, color, colorful::Alignment::Middle);
    std::cout << "\n";
    colorful::Write(b, color, colorful::Alignment::Middle);
    std::cout << "\n";
}



