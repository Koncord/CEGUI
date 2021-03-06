// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "WidgetLookFeel.pypp.hpp"

namespace bp = boost::python;

void register_WidgetLookFeel_class(){

    { //::CEGUI::WidgetLookFeel
        typedef bp::class_< CEGUI::WidgetLookFeel > WidgetLookFeel_exposer_t;
        WidgetLookFeel_exposer_t WidgetLookFeel_exposer = WidgetLookFeel_exposer_t( "WidgetLookFeel", "*!\n\
        \n\
            Class that encapsulates look & feel information for a particular widget type.\n\
        *\n", bp::init< CEGUI::String const & >(( bp::arg("name") )) );
        bp::scope WidgetLookFeel_scope( WidgetLookFeel_exposer );
        bp::implicitly_convertible< CEGUI::String const &, CEGUI::WidgetLookFeel >();
        WidgetLookFeel_exposer.def( bp::init< >() );
        { //::CEGUI::WidgetLookFeel::addAnimationName
        
            typedef void ( ::CEGUI::WidgetLookFeel::*addAnimationName_function_type )( ::CEGUI::String const & ) ;
            
            WidgetLookFeel_exposer.def( 
                "addAnimationName"
                , addAnimationName_function_type( &::CEGUI::WidgetLookFeel::addAnimationName )
                , ( bp::arg("anim_name") )
                , "*!\n\
                    \n\
                        Add the name of an animation that is associated with the\n\
                        WidgetLookFeel.\n\
            \n\
                    @param anim_name\n\
                        Reference to a String object that contains the name of the animation\n\
                        to be associated with this WidgetLookFeel.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::addImagerySection
        
            typedef void ( ::CEGUI::WidgetLookFeel::*addImagerySection_function_type )( ::CEGUI::ImagerySection const & ) ;
            
            WidgetLookFeel_exposer.def( 
                "addImagerySection"
                , addImagerySection_function_type( &::CEGUI::WidgetLookFeel::addImagerySection )
                , ( bp::arg("section") )
                , "*!\n\
                    \n\
                        Add an ImagerySection to the WidgetLookFeel.\n\
            \n\
                    @param section\n\
                        ImagerySection object to be added.\n\
            \n\
                    @return Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::addNamedArea
        
            typedef void ( ::CEGUI::WidgetLookFeel::*addNamedArea_function_type )( ::CEGUI::NamedArea const & ) ;
            
            WidgetLookFeel_exposer.def( 
                "addNamedArea"
                , addNamedArea_function_type( &::CEGUI::WidgetLookFeel::addNamedArea )
                , ( bp::arg("area") )
                , "*!\n\
                    \n\
                        Adds a named area to the WidgetLookFeel.\n\
            \n\
                    @param area\n\
                        NamedArea to be added.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::addPropertyDefinition
        
            typedef void ( ::CEGUI::WidgetLookFeel::*addPropertyDefinition_function_type )( ::CEGUI::PropertyDefinition const & ) ;
            
            WidgetLookFeel_exposer.def( 
                "addPropertyDefinition"
                , addPropertyDefinition_function_type( &::CEGUI::WidgetLookFeel::addPropertyDefinition )
                , ( bp::arg("propdef") )
                , "*!\n\
                    \n\
                        Adds a property definition to the WidgetLookFeel.\n\
            \n\
                    @param propdef\n\
                        PropertyDefinition object to be added.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::addPropertyInitialiser
        
            typedef void ( ::CEGUI::WidgetLookFeel::*addPropertyInitialiser_function_type )( ::CEGUI::PropertyInitialiser const & ) ;
            
            WidgetLookFeel_exposer.def( 
                "addPropertyInitialiser"
                , addPropertyInitialiser_function_type( &::CEGUI::WidgetLookFeel::addPropertyInitialiser )
                , ( bp::arg("initialiser") )
                , "*!\n\
                    \n\
                        Add a property initialiser to the WidgetLookFeel.\n\
            \n\
                    @param initialiser\n\
                        PropertyInitialiser object to be added.\n\
            \n\
                    @return Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::addPropertyLinkDefinition
        
            typedef void ( ::CEGUI::WidgetLookFeel::*addPropertyLinkDefinition_function_type )( ::CEGUI::PropertyLinkDefinition const & ) ;
            
            WidgetLookFeel_exposer.def( 
                "addPropertyLinkDefinition"
                , addPropertyLinkDefinition_function_type( &::CEGUI::WidgetLookFeel::addPropertyLinkDefinition )
                , ( bp::arg("propdef") )
                , "*!\n\
                    \n\
                        Adds a property link definition to the WidgetLookFeel.\n\
            \n\
                    @param propdef\n\
                        PropertyLinkDefinition object to be added.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::addStateSpecification
        
            typedef void ( ::CEGUI::WidgetLookFeel::*addStateSpecification_function_type )( ::CEGUI::StateImagery const & ) ;
            
            WidgetLookFeel_exposer.def( 
                "addStateSpecification"
                , addStateSpecification_function_type( &::CEGUI::WidgetLookFeel::addStateSpecification )
                , ( bp::arg("state") )
                , "*!\n\
                    \n\
                        Add a state specification (StateImagery object) to the WidgetLookFeel.\n\
            \n\
                    @param section\n\
                        StateImagery object to be added.\n\
            \n\
                    @return Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::addWidgetComponent
        
            typedef void ( ::CEGUI::WidgetLookFeel::*addWidgetComponent_function_type )( ::CEGUI::WidgetComponent const & ) ;
            
            WidgetLookFeel_exposer.def( 
                "addWidgetComponent"
                , addWidgetComponent_function_type( &::CEGUI::WidgetLookFeel::addWidgetComponent )
                , ( bp::arg("widget") )
                , "*!\n\
                    \n\
                        Add a WidgetComponent to the WidgetLookFeel.\n\
            \n\
                    @param widget\n\
                        WidgetComponent object to be added.\n\
            \n\
                    @return Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::cleanUpWidget
        
            typedef void ( ::CEGUI::WidgetLookFeel::*cleanUpWidget_function_type )( ::CEGUI::Window & ) const;
            
            WidgetLookFeel_exposer.def( 
                "cleanUpWidget"
                , cleanUpWidget_function_type( &::CEGUI::WidgetLookFeel::cleanUpWidget )
                , ( bp::arg("widget") )
                , "*!\n\
                    \n\
                        Clean up the given window from all properties and component widgets created by this\
                        WidgetLookFeel\n\
            \n\
                    @param widget\n\
                        Window based object to be cleaned up.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::clearImagerySections
        
            typedef void ( ::CEGUI::WidgetLookFeel::*clearImagerySections_function_type )(  ) ;
            
            WidgetLookFeel_exposer.def( 
                "clearImagerySections"
                , clearImagerySections_function_type( &::CEGUI::WidgetLookFeel::clearImagerySections )
                , "*!\n\
                    \n\
                        Clear all ImagerySections from the WidgetLookFeel.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::clearNamedAreas
        
            typedef void ( ::CEGUI::WidgetLookFeel::*clearNamedAreas_function_type )(  ) ;
            
            WidgetLookFeel_exposer.def( 
                "clearNamedAreas"
                , clearNamedAreas_function_type( &::CEGUI::WidgetLookFeel::clearNamedAreas )
                , "*!\n\
                    \n\
                        Clear all defined named areas from the WidgetLookFeel\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::clearPropertyDefinitions
        
            typedef void ( ::CEGUI::WidgetLookFeel::*clearPropertyDefinitions_function_type )(  ) ;
            
            WidgetLookFeel_exposer.def( 
                "clearPropertyDefinitions"
                , clearPropertyDefinitions_function_type( &::CEGUI::WidgetLookFeel::clearPropertyDefinitions )
                , "*!\n\
                    \n\
                        Clear all defined property definitions from the WidgetLookFeel\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::clearPropertyInitialisers
        
            typedef void ( ::CEGUI::WidgetLookFeel::*clearPropertyInitialisers_function_type )(  ) ;
            
            WidgetLookFeel_exposer.def( 
                "clearPropertyInitialisers"
                , clearPropertyInitialisers_function_type( &::CEGUI::WidgetLookFeel::clearPropertyInitialisers )
                , "*!\n\
                    \n\
                        Clear all PropertyInitialiser objects from the WidgetLookFeel.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::clearPropertyLinkDefinitions
        
            typedef void ( ::CEGUI::WidgetLookFeel::*clearPropertyLinkDefinitions_function_type )(  ) ;
            
            WidgetLookFeel_exposer.def( 
                "clearPropertyLinkDefinitions"
                , clearPropertyLinkDefinitions_function_type( &::CEGUI::WidgetLookFeel::clearPropertyLinkDefinitions )
                , "*!\n\
                    \n\
                        Clear all defined property link definitions from the WidgetLookFeel\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::clearStateSpecifications
        
            typedef void ( ::CEGUI::WidgetLookFeel::*clearStateSpecifications_function_type )(  ) ;
            
            WidgetLookFeel_exposer.def( 
                "clearStateSpecifications"
                , clearStateSpecifications_function_type( &::CEGUI::WidgetLookFeel::clearStateSpecifications )
                , "*!\n\
                    \n\
                        Clear all StateImagery objects from the WidgetLookFeel.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::clearWidgetComponents
        
            typedef void ( ::CEGUI::WidgetLookFeel::*clearWidgetComponents_function_type )(  ) ;
            
            WidgetLookFeel_exposer.def( 
                "clearWidgetComponents"
                , clearWidgetComponents_function_type( &::CEGUI::WidgetLookFeel::clearWidgetComponents )
                , "*!\n\
                    \n\
                        Clear all WidgetComponents from the WidgetLookFeel.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::findPropertyInitialiser
        
            typedef ::CEGUI::PropertyInitialiser const * ( ::CEGUI::WidgetLookFeel::*findPropertyInitialiser_function_type )( ::CEGUI::String const & ) const;
            
            WidgetLookFeel_exposer.def( 
                "findPropertyInitialiser"
                , findPropertyInitialiser_function_type( &::CEGUI::WidgetLookFeel::findPropertyInitialiser )
                , ( bp::arg("propertyName") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                    \n\
                        Takes the name of a property and returns a pointer to the last\n\
                        PropertyInitialiser for this property or 0 if the is no\n\
                        PropertyInitialiser for this property in the WidgetLookFeel\n\
            \n\
                    @param propertyName\n\
                        The name of the property to look for.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::findWidgetComponent
        
            typedef ::CEGUI::WidgetComponent const * ( ::CEGUI::WidgetLookFeel::*findWidgetComponent_function_type )( ::CEGUI::String const & ) const;
            
            WidgetLookFeel_exposer.def( 
                "findWidgetComponent"
                , findWidgetComponent_function_type( &::CEGUI::WidgetLookFeel::findWidgetComponent )
                , ( bp::arg("nameSuffix") )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*!\n\
                    \n\
                        Takes the namesuffix for a widget component and returns a pointer to\n\
                        it if it exists or 0 if it does'nt.\n\
            \n\
                    @param nameSuffix\n\
                        The name suffix of the Child component to look for.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::getImagerySection
        
            typedef ::CEGUI::ImagerySection const & ( ::CEGUI::WidgetLookFeel::*getImagerySection_function_type )( ::CEGUI::String const & ) const;
            
            WidgetLookFeel_exposer.def( 
                "getImagerySection"
                , getImagerySection_function_type( &::CEGUI::WidgetLookFeel::getImagerySection )
                , ( bp::arg("section") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                    \n\
                        Return a const reference to the ImagerySection object with the specified name.\n\
            \n\
                    @return\n\
                        ImagerySection object with the specified name.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::getName
        
            typedef ::CEGUI::String const & ( ::CEGUI::WidgetLookFeel::*getName_function_type )(  ) const;
            
            WidgetLookFeel_exposer.def( 
                "getName"
                , getName_function_type( &::CEGUI::WidgetLookFeel::getName )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                    \n\
                        Return the name of the widget look.\n\
            \n\
                    @return\n\
                        String object holding the name of the WidgetLookFeel.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::getNamedArea
        
            typedef ::CEGUI::NamedArea const & ( ::CEGUI::WidgetLookFeel::*getNamedArea_function_type )( ::CEGUI::String const & ) const;
            
            WidgetLookFeel_exposer.def( 
                "getNamedArea"
                , getNamedArea_function_type( &::CEGUI::WidgetLookFeel::getNamedArea )
                , ( bp::arg("name") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                    \n\
                        Return the NamedArea with the specified name.\n\
            \n\
                    @param name\n\
                        String object holding the name of the NamedArea to be returned.\n\
            \n\
                    @return\n\
                        The requested NamedArea object.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::getProperties
        
            typedef ::std::vector< CEGUI::PropertyInitialiser > const & ( ::CEGUI::WidgetLookFeel::*getProperties_function_type )(  ) const;
            
            WidgetLookFeel_exposer.def( 
                "getProperties"
                , getProperties_function_type( &::CEGUI::WidgetLookFeel::getProperties )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "** Obtains list of properties.\n\
             * @access public \n\
             * @return CEGUI.WidgetLookFeel.PropertyList List of properties\n\
             *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::getPropertyDefinitions
        
            typedef ::std::vector< CEGUI::PropertyDefinition > const & ( ::CEGUI::WidgetLookFeel::*getPropertyDefinitions_function_type )(  ) const;
            
            WidgetLookFeel_exposer.def( 
                "getPropertyDefinitions"
                , getPropertyDefinitions_function_type( &::CEGUI::WidgetLookFeel::getPropertyDefinitions )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "** Obtains list of properties definitions.\n\
             * @access public \n\
             * @return CEGUI.WidgetLookFeel.PropertyDefinitionList List of properties definitions\n\
             *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::getPropertyLinkDefinitions
        
            typedef ::std::vector< CEGUI::PropertyLinkDefinition > const & ( ::CEGUI::WidgetLookFeel::*getPropertyLinkDefinitions_function_type )(  ) const;
            
            WidgetLookFeel_exposer.def( 
                "getPropertyLinkDefinitions"
                , getPropertyLinkDefinitions_function_type( &::CEGUI::WidgetLookFeel::getPropertyLinkDefinitions )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "** Obtains list of properties link definitions.\n\
             * @access public \n\
             * @return CEGUI.WidgetLookFeel.PropertyLinkDefinitionList List of properties link definitions\n\
             *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::getStateImagery
        
            typedef ::CEGUI::StateImagery const & ( ::CEGUI::WidgetLookFeel::*getStateImagery_function_type )( ::CEGUI::String const & ) const;
            
            WidgetLookFeel_exposer.def( 
                "getStateImagery"
                , getStateImagery_function_type( &::CEGUI::WidgetLookFeel::getStateImagery )
                , ( bp::arg("state") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                    \n\
                        Return a const reference to the StateImagery object for the specified state.\n\
            \n\
                    @return\n\
                        StateImagery object for the requested state.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::initialiseWidget
        
            typedef void ( ::CEGUI::WidgetLookFeel::*initialiseWidget_function_type )( ::CEGUI::Window & ) const;
            
            WidgetLookFeel_exposer.def( 
                "initialiseWidget"
                , initialiseWidget_function_type( &::CEGUI::WidgetLookFeel::initialiseWidget )
                , ( bp::arg("widget") )
                , "*!\n\
                    \n\
                        Initialise the given window using PropertyInitialsers and component widgets\n\
                        specified for this WidgetLookFeel.\n\
            \n\
                    @param widget\n\
                        Window based object to be initialised.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::isNamedAreaDefined
        
            typedef bool ( ::CEGUI::WidgetLookFeel::*isNamedAreaDefined_function_type )( ::CEGUI::String const & ) const;
            
            WidgetLookFeel_exposer.def( 
                "isNamedAreaDefined"
                , isNamedAreaDefined_function_type( &::CEGUI::WidgetLookFeel::isNamedAreaDefined )
                , ( bp::arg("name") )
                , "*!\n\
                    \n\
                        return whether a NamedArea object with the specified name exists for this\
                        WidgetLookFeel.\n\
            \n\
                    @param name\n\
                        String holding the name of the NamedArea to check for.\n\
            \n\
                    @return\n\
                        - true if a named area with the requested name is defined for this WidgetLookFeel.\n\
                        - false if no such named area is defined for this WidgetLookFeel.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::isStateImageryPresent
        
            typedef bool ( ::CEGUI::WidgetLookFeel::*isStateImageryPresent_function_type )( ::CEGUI::String const & ) const;
            
            WidgetLookFeel_exposer.def( 
                "isStateImageryPresent"
                , isStateImageryPresent_function_type( &::CEGUI::WidgetLookFeel::isStateImageryPresent )
                , ( bp::arg("state") )
                , "*!\n\
                    \n\
                        Return whether imagery is defined for the given state.\n\
            \n\
                    @param state\n\
                        String object containing name of state to look for.\n\
            \n\
                    @return\n\
                        - true if imagery exists for the specified state,\n\
                        - false if no imagery exists for the specified state.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::layoutChildWidgets
        
            typedef void ( ::CEGUI::WidgetLookFeel::*layoutChildWidgets_function_type )( ::CEGUI::Window const & ) const;
            
            WidgetLookFeel_exposer.def( 
                "layoutChildWidgets"
                , layoutChildWidgets_function_type( &::CEGUI::WidgetLookFeel::layoutChildWidgets )
                , ( bp::arg("owner") )
                , "*!\n\
                    \n\
                        Layout the child widgets defined for this WidgetLookFeel which are attached to the given\
                        window.\n\
            \n\
                    @param owner\n\
                        Window object that has the child widgets that require laying out.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::renameChildren
        
            typedef void ( ::CEGUI::WidgetLookFeel::*renameChildren_function_type )( ::CEGUI::Window const &,::CEGUI::String const & ) const;
            
            WidgetLookFeel_exposer.def( 
                "renameChildren"
                , renameChildren_function_type( &::CEGUI::WidgetLookFeel::renameChildren )
                , ( bp::arg("widget"), bp::arg("newBaseName") )
                , "*!\n\
                    \n\
                        Uses the WindowManager to rename the child windows that are\n\
                        created for this WidgetLookFeel.\n\
            \n\
                    @param widget\n\
                        The target Window containing the child windows that are to be\n\
                        renamed.\n\
            \n\
                    @param newBaseName\n\
                        String object holding the new base name that will be used when\n\
                        constructing new names for the child windows.\n\
                    *\n" );
        
        }
        { //::CEGUI::WidgetLookFeel::writeXMLToStream
        
            typedef void ( ::CEGUI::WidgetLookFeel::*writeXMLToStream_function_type )( ::CEGUI::XMLSerializer & ) const;
            
            WidgetLookFeel_exposer.def( 
                "writeXMLToStream"
                , writeXMLToStream_function_type( &::CEGUI::WidgetLookFeel::writeXMLToStream )
                , ( bp::arg("xml_stream") )
                , "*!\n\
                    \n\
                        Writes an xml representation of this WidgetLookFeel to  out_stream.\n\
            \n\
                    @param xml_stream\n\
                        Stream where xml data should be output.\n\
            \n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n" );
        
        }
    }

}
