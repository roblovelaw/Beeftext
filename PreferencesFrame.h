/// \file
/// \author Xavier Michelon
///
/// \brief Declaration of preferences frame
///  
/// Copyright (c) Xavier Michelon. All rights reserved.  
/// Licensed under the MIT License. See LICENSE file in the project root for full license information.  


#ifndef BEEFTEXT__PREFERENCES_FRAME
#define BEEFTEXT__PREFERENCES_FRAME


#include "ui_PreferencesFrame.h"
#include "PreferencesManager.h"
#include "LatestVersionInfo.h"


//**********************************************************************************************************************
/// \brief A frame class for the application preferences
//**********************************************************************************************************************
class PreferencesFrame: public QFrame
{
   Q_OBJECT
public: // member functions
	PreferencesFrame(QWidget* parent = nullptr); ///< Default constructor
	~PreferencesFrame() = default; ///< Default destructor
	
private: // member functions
	PreferencesFrame(PreferencesFrame const&) = delete; ///< Disabled copy constructor
	PreferencesFrame(PreferencesFrame&&) = delete; ///< Disabled move constructor
	PreferencesFrame& operator=(PreferencesFrame const&) = delete; ///< Disabled assignment operator
	PreferencesFrame& operator=(PreferencesFrame&&) = delete; ///< Disabled move assignment operator

private slots:
   static void onActionOpenLogFile(); ///< Slot for the 'Open log file' action

private: // data members
   Ui::PreferencesFrame ui_; ///< The GUI for the frame
};


#endif // #ifndef BEEFTEXT__PREFERENCES_FRAME