//basic window creation with gtk

#include <gtk/gtk.h>

// this function is called when the window is activated
static void activate(GtkApplication* app, gpointer user_data) {

    GtkWidget *window;

    //create a new window and associate it with the application

    window = gtk_application_window_new(app);
    gtk_window_set_title(GTK_WINDOW(window),"Hello GTK");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);

    //show the window
    gtk_window_present(GTK_WINDOW(window));
}


int main(int argc, char **argv) {

    GtkApplication *app;
    int status;

    //create a new application instance
    // the application ID should be in reverse-DNS format
    app = gtk_application_new("com.github.gtk", G_APPLICATION_FLAGS_NONE);

    // connect the activate signal to the activate function
    g_signal_connect(app, "activate", G_CALLBACK(activate), NULL);

    // run the application
    status = g_application_run(G_APPLICATION(app), argc, argv);

    // clean up and free resources
    g_object_unref(app);

    return status;
}