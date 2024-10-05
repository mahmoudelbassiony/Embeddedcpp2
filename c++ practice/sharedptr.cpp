#include <iostream>
#include <memory>
void Engine(std::shared_ptr<int> step_size)
{
  std::cout<< "step size is " <<step_size << "use_count" <<  step_size.use_count() << std::endl;


}
int main()
{
  std::shared_ptr<int> ptr(new int(12));
  Engine(ptr);
  
  return 0;
}