  std::string ans;
        for(char c : s)
        {
            if(c=='i') {
               std::reverse(ans.begin(),ans.end()); 
               std::cout<<ans<<'\n';
            } 
            else ans+=c;
        }
        return ans;