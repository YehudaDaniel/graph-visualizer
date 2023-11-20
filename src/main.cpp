#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Clock.hpp>
#include <SFML/Window/Event.hpp>

#include <imgui-SFML.h>
#include <imgui.h>

#include <iostream>

int main() {
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Graph Visualizer");
    window.setFramerateLimit(60);
    ImGui::SFML::Init(window);
    sf::Clock deltaClock;

    // Setting up a rectangle 100x100
    sf::RectangleShape shape(sf::Vector2f(160, 160));
    // Setting the inside color of the rectangle to transparent and the outline color to green, with thickness 5
    shape.setFillColor(sf::Color::Transparent);
    shape.setOutlineColor(sf::Color::Green);
    shape.setOutlineThickness(5);
    //setting the position of the rectangle to 100, 100
    shape.setPosition(100, 100);

    // Setting up a text with open sans google font
    sf::Font font;
    if(!font.loadFromFile("../include/fonts/OpenSans-VariableFont_wdth,wght.ttf")){
        std::cout << "Error loading font" << std::endl;
    }
    sf::Text text("Hello Kobe", font, 16);
    // Setting the color of the text to green and making it bold
    text.setFillColor(sf::Color::Green);
    text.setStyle(sf::Text::Bold);
    text.setOrigin(text.getLocalBounds().width/2, text.getLocalBounds().height/2);
    text.setPosition(180, 180);


    // Main Loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(event);

            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        ImGui::SFML::Update(window, deltaClock.restart());

        // ImGui::ShowDemoWindow();

        window.clear();
        ImGui::SFML::Render(window);
        //drawing the yellow circle shape
        window.draw(shape);
        window.draw(text);
        window.display();
    }
    // ------------------------------ //

    ImGui::SFML::Shutdown();

    return 0;
}