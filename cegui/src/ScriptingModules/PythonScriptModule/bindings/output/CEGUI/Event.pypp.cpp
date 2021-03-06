// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "Event.pypp.hpp"

namespace bp = boost::python;

void register_Event_class(){

    { //::CEGUI::Event
        typedef bp::class_< CEGUI::Event, boost::noncopyable > Event_exposer_t;
        Event_exposer_t Event_exposer = Event_exposer_t( "Event", "*!\n\
        \n\
            Defines an 'event' which can be subscribed to by interested parties.\n\
        \n\
            An Event can be subscribed by a function, a member function, or a function\n\
            object.  Whichever option is taken, the function signature needs to be as\n\
            follows:\n\
            \n\
            <em>bool function_name(const EventArgs& args);<em>\n\
            \note\n\
                An Event object may not be copied.\n\
        *\n", bp::init< CEGUI::String const & >(( bp::arg("name") ), "*!\n\
        \n\
            Constructs a new Event object with the specified name\n\
        *\n") );
        bp::scope Event_scope( Event_exposer );
        { //::CEGUI::Event::ScopedConnection
            typedef bp::class_< CEGUI::Event::ScopedConnection, bp::bases< CEGUI::RefCounted< CEGUI::BoundSlot > > > ScopedConnection_exposer_t;
            ScopedConnection_exposer_t ScopedConnection_exposer = ScopedConnection_exposer_t( "ScopedConnection", "*!\n\
            \n\
                Event.Connection wrapper that automatically disconnects the connection\n\
                when the object is deleted (or goes out of scope).\n\
            *\n", bp::init< >() );
            bp::scope ScopedConnection_scope( ScopedConnection_exposer );
            ScopedConnection_exposer.def( bp::init< CEGUI::RefCounted< CEGUI::BoundSlot > const & >(( bp::arg("connection") )) );
            bp::implicitly_convertible< CEGUI::RefCounted< CEGUI::BoundSlot > const &, CEGUI::Event::ScopedConnection >();
            { //::CEGUI::Event::ScopedConnection::connected
            
                typedef bool ( ::CEGUI::Event::ScopedConnection::*connected_function_type )(  ) const;
                
                ScopedConnection_exposer.def( 
                    "connected"
                    , connected_function_type( &::CEGUI::Event::ScopedConnection::connected ) );
            
            }
            { //::CEGUI::Event::ScopedConnection::disconnect
            
                typedef void ( ::CEGUI::Event::ScopedConnection::*disconnect_function_type )(  ) ;
                
                ScopedConnection_exposer.def( 
                    "disconnect"
                    , disconnect_function_type( &::CEGUI::Event::ScopedConnection::disconnect ) );
            
            }
            { //::CEGUI::Event::ScopedConnection::operator=
            
                typedef ::CEGUI::Event::ScopedConnection & ( ::CEGUI::Event::ScopedConnection::*assign_function_type )( ::CEGUI::RefCounted< CEGUI::BoundSlot > const & ) ;
                
                ScopedConnection_exposer.def( 
                    "assign"
                    , assign_function_type( &::CEGUI::Event::ScopedConnection::operator= )
                    , ( bp::arg("connection") )
                    , bp::return_self< >() );
            
            }
        }
        bp::implicitly_convertible< CEGUI::String const &, CEGUI::Event >();
        { //::CEGUI::Event::getName
        
            typedef ::CEGUI::String const & ( ::CEGUI::Event::*getName_function_type )(  ) const;
            
            Event_exposer.def( 
                "getName"
                , getName_function_type( &::CEGUI::Event::getName )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "*!\n\
                \n\
                    Return the name given to this Event object when it was created.\n\
            \n\
                @return\n\
                    String object containing the name of the Event object.\n\
                *\n" );
        
        }
        { //::CEGUI::Event::operator()
        
            typedef void ( ::CEGUI::Event::*__call___function_type )( ::CEGUI::EventArgs & ) ;
            
            Event_exposer.def( 
                "__call__"
                , __call___function_type( &::CEGUI::Event::operator() )
                , ( bp::arg("args") )
                , "*!\n\
                \n\
                    Fires the event.  All event subscribers get called in the appropriate\n\
                    sequence.\n\
            \n\
                @param args\n\
                    An object derived from EventArgs to be passed to each event subscriber.\n\
                    The 'handled' field will be set to true if any of the called subscribers\n\
                    return that they handled the event.\n\
            \n\
                @return\n\
                    Nothing.\n\
                *\n" );
        
        }
        { //::CEGUI::Event::subscribe
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::Event::*subscribe_function_type )( ::CEGUI::SubscriberSlot const & ) ;
            
            Event_exposer.def( 
                "subscribe"
                , subscribe_function_type( &::CEGUI::Event::subscribe )
                , ( bp::arg("slot") )
                , "*!\n\
                \n\
                    Subscribes some function or object to the Event\n\
            \n\
                @param subscriber\n\
                    A function, static member function, or function object, with the\n\
                    signature void function_name(const EventArgs& args).  To subscribe a\n\
                    member function you should explicitly create an Event.Subscriber as\n\
                    this parameter.\n\
            \n\
                @return\n\
                    A Connection object which can be used to disconnect (unsubscribe) from\n\
                    the Event, and also to check the connection state.\n\
                *\n" );
        
        }
        { //::CEGUI::Event::subscribe
        
            typedef ::CEGUI::RefCounted< CEGUI::BoundSlot > ( ::CEGUI::Event::*subscribe_function_type )( unsigned int,::CEGUI::SubscriberSlot const & ) ;
            
            Event_exposer.def( 
                "subscribe"
                , subscribe_function_type( &::CEGUI::Event::subscribe )
                , ( bp::arg("group"), bp::arg("slot") )
                , "*!\n\
                \n\
                    Subscribes some function or object to the Event\n\
            \n\
                @param group\n\
                    The Event group to subscribe to, subscription groups are called in\n\
                    ascending order, followed by subscriptions with no group.\n\
                    Note that calling order of connections to the same group is unspecified.\n\
            \n\
                @param subscriber\n\
                    A function, static member function, or function object, with the\n\
                    signature void function_name(const EventArgs& args).  To subscribe a\n\
                    member function you should explicitly create an Event.Subscriber as\n\
                    this parameter.\n\
            \n\
                @return\n\
                    A Connection object which can be used to disconnect (unsubscribe) from\n\
                    the Event, and also to check the connection state.\n\
                *\n" );
        
        }
    }

}
