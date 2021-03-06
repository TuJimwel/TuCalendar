﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class SplitView;
                ref class ListBox;
                ref class ListBoxItem;
                ref class DatePicker;
                ref class Frame;
                ref class Button;
            }
        }
    }
}

namespace TuCalendar
{
    [::Windows::Foundation::Metadata::WebHostHidden]
    partial ref class MainPage : public ::Windows::UI::Xaml::Controls::Page, 
        public ::Windows::UI::Xaml::Markup::IComponentConnector,
        public ::Windows::UI::Xaml::Markup::IComponentConnector2
    {
    public:
        void InitializeComponent();
        virtual void Connect(int connectionId, ::Platform::Object^ target);
        virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
    
    private:
        void UnloadObject(::Windows::UI::Xaml::DependencyObject^ dependencyObject);
        void DisconnectUnloadedObject(int connectionId);
    
    private:
        bool _contentLoaded;
    
    
        private: ::Windows::UI::Xaml::Controls::SplitView^ MySplitView;
        private: ::Windows::UI::Xaml::Controls::ListBox^ IconListbox;
        private: ::Windows::UI::Xaml::Controls::ListBoxItem^ WelcomeTab;
        private: ::Windows::UI::Xaml::Controls::ListBoxItem^ MonthViewTab;
        private: ::Windows::UI::Xaml::Controls::ListBoxItem^ WeekViewTab;
        private: ::Windows::UI::Xaml::Controls::ListBoxItem^ ScheduleTab;
        private: ::Windows::UI::Xaml::Controls::DatePicker^ tst;
        private: ::Windows::UI::Xaml::Controls::Frame^ main;
        private: ::Windows::UI::Xaml::Controls::Frame^ schedule;
        private: ::Windows::UI::Xaml::Controls::Button^ MyButton;
    };
}

