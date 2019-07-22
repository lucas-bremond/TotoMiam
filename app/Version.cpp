////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/// @project                    Toto|Miam
/// @file                       TotoMiam/Version.cpp
/// @author                     Lucas Brémond <lucas.bremond@gmail.com>
/// @license                    MIT License

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <TotoMiam/Version.hpp>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace totomiam
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

uint                            Version::getMajor                           ( ) const
{
    return major_ ;
}

uint                            Version::getMinor                           ( ) const
{
    return minor_ ;
}

uint                            Version::getPatch                           ( ) const
{
    return patch_ ;
}

String                          Version::toString                           ( ) const
{

    char buffer[10] ;

    sprintf(buffer, "%d.%d.%d", major_, minor_, patch_) ;

    return String(buffer) ;

}

Version                         Version::Current                            ( )
{
    return { 1, 2, 0 } ;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

                                Version::Version                            (   const   uint                        aMajorNumber,
                                                                                const   uint                        aMinorNumber,
                                                                                const   uint                        aPatchNumber                                )
                                :   major_(aMajorNumber),
                                    minor_(aMinorNumber),
                                    patch_(aPatchNumber)
{

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////