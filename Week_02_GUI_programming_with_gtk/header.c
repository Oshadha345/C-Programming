#include <gtk/gtk.h>
#include <stdio.h>


//callback function for the "quit action"
static void quit_callback(GSimpleAction *action,GVariant *parameter, gpointer app) {
    g_application_quit(G_APPLICATION(app));
    printf("Application is quitting...\n");
    g_object_unref(app); // free the application object
}


//call bakc function to be executed when the button is clicked
static void print_hello1(GtkWidget *widget, gpointer data) {
    printf("Hola, You Clicked the Button!\n");
}

static void print_hello2(GtkWidget *widget, gpointer data) {
    printf("You Clicked the next Button too!\n");
}



static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *button1;
    GtkWidget *button2;
    GtkWidget *box;
    GtkWidget *header;
    GtkWidget *menu_button;
    GMenu *menu;

    //create a new window and associate it with the application
    window = gtk_application_window_new(app);

    gtk_window_set_title(GTK_WINDOW(window), "Window with Button+Header Bar");
    gtk_window_set_default_size(GTK_WINDOW(window), 400,300);


    //create a header bar
    header = gtk_header_bar_new();
    gtk_window_set_titlebar(GTK_WINDOW(window),header);

    //create a menu model
    menu = g_menu_new();

    //add a quit action to the menu
    g_menu_append(menu, "Quit", "app.quit");

    //create a menu button and set the menu model
    menu_button = gtk_menu_button_new();
    gtk_menu_button_set_icon_name(GTK_MENU_BUTTON(menu_button),"open-menu-symbolic");
    gtk_menu_button_set_menu_model(GTK_MENU_BUTTON(menu_button),G_MENU_MODEL(menu));

    //add the menu button to the end of the header bar
    gtk_header_bar_pack_end(GTK_HEADER_BAR(header), menu_button);


    //creat a vertical box with 5 pixels of spacing between children
    box = gtk_box_new(GTK_ORIENTATION_VERTICAL,5);

    //set the box as the child of the window
    gtk_window_set_child(GTK_WINDOW(window),box);

    //button 1

    //create a button with a label
    button1 = gtk_button_new_with_label("Click Me");
    //connect the button's clicked signal to the print_hello function
    g_signal_connect(button1, "clicked", G_CALLBACK(print_hello1), NULL);
    //add the first button to the box
    gtk_box_append(GTK_BOX(box),button1);

    //button 2

    button2 = gtk_button_new_with_label("Me too");
    g_signal_connect(button2, "clicked",G_CALLBACK(print_hello2),NULL);
    gtk_box_append(GTK_BOX(box),button2);


    gtk_window_present(GTK_WINDOW(window));
}


int main(int argc, char **argv) {

    GtkApplication *app;
    int status;
    GSimpleAction *quit_action;

    //create a new application instance
    // the application ID should be in reverse-DNS format
    app = gtk_application_new("com.github.gtk", G_APPLICATION_DEFAULT_FLAGS);


    // create a quit action
    quit_action = g_simple_action_new("quit", NULL);
    g_signal_connect(quit_action, "activate", G_CALLBACK(quit_callback), app);
    g_action_map_add_action(G_ACTION_MAP(app), G_ACTION(quit_action));

    // connect the activate signal to the activate function
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

    // run the application
    status = g_application_run(G_APPLICATION(app), argc, argv);

    // clean up and free resources
    g_object_unref(app);

    return status;
}