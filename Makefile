.PHONY: clean All

All:
	@echo "----------Building project:[ game - Windows ]----------"
	@"$(MAKE)" -f  "game.mk"
clean:
	@echo "----------Cleaning project:[ game - Windows ]----------"
	@"$(MAKE)" -f  "game.mk" clean
