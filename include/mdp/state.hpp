#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "mdp/action.hpp"

using std::cout;
using std::endl;
//using std::string;

namespace mdp 
{
  class Action;

  class State
  {
  private:
	std::string name_;
	std::vector<Action> actions_;
	double reward_;
	
  public:
	double utility;
	
    State(const std::string& name,
		  double reward = 0.0);
	~State();

	void addAction(Action action);

	static bool compare(State state1, State state2);
	
	static void updateUtility(std::vector<State>& old,
							  std::vector<State> update);

	void setReward(double reward);
	
	std::string getName();

	double getReward();

	std::vector<Action>& getActions();
};
	
}

