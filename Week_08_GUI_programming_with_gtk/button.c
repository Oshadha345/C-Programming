#include <gtk/gtk.h>
#include <stdio.h>

//call bakc function to be executed when the button is clicked

static void print_hello(GtkWidget *widget, gpointer data) {
    printf("Hola, You Clicked the Button!\n");
}


static void activate(GtkApplication *app, gpointer user_data) {
    GtkWidget *window;
    GtkWidget *button1;
    GtkWidget *button2;
    GtkWidget *box;

    //create a new window and associate it with the application
    window = gtk_application_window_new(app);

    gtk_window_set_title(GTK_WINDOW(window), "Window with Button");
    gtk_window_set_default_size(GTK_WINDOW(window), 400,300);

    //creat a vertical box with 5 pixels of spacing between children
    box = gtk_box_new(GTK_ORIENTATION_VERTICAL,5);

    //set the box as the child of the window
    gtk_window_set_child(GTK_WINDOW(window),box);

    //button 1

    //create a button with a label
    button1 = gtk_button_new_with_label("Click Me");
    //connect the button's clicked signal to the print_hello function
    g_signal_connect(button1, "clicked", G_CALLBACK(print_hello), NULL);
    //add the first button to the box
    gtk_box_append(GTK_BOX(box),button1);

    //button 2

    button2 = gtk_button_new_with_label("Me too");
    g_signal_connect(button2, "clicked",G_CALLBACK(print_hello),NULL);
    gtk_box_append(GTK_BOX(box),button2);


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