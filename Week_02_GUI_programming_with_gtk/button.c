#include <gtk/gtk.h>


static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *button;

    //create a new window and associate it with the application
    window = gtk_application_window_new(app);

    gtk_window_set_title(GTK_WINDOW(window), "Window with Button");
    gtk_window_set_default_size(GTK_WINDOW(window), 400,300);

    //create a button with a label
    button = gtk_button_new_with_label("Click Me");

    //set the button as the child of the window
    gtk_window_set_child(GTK_WINDOW(window),button);

    //show the window
    gtk_window_present(GTK_WINDOW(window));
}


int main(int argc, char **argv) {

    GtkApplication *app;
    int status;

    //create a new application instance
    // the application ID should be in reverse-DNS format
    app = gtk_application_new("com.github.gtk", G_APPLICATION_DEFAULT_FLAGS);

    // connect the activate signal to the activate function
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

    // run the application
    status = g_application_run(G_APPLICATION(app), argc, argv);

    // clean up and free resources
    g_object_unref(app);

    return status;
}