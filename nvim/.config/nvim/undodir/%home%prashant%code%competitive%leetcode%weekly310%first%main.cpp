Vim�UnDo� �!�������tWhZ�nbY��
�a�OŢ(��                       '       '   '   '    cK�    _�                             ����                                                                                                                                                                                                                                                                                                                                                             cI!    �         &          }�         $       �         $    �         #    5��                                               �                                       8       �                        :                     �                          ;                     5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        cI+     �                5vector<int> intersection(vector<vector<int>>& nums) {           map <int, int> mp;           vector <int> res;   '        for(int i=0;i<nums.size();i++){   !            for(auto &j:nums[i]){                   mp[j]++;               }   	        }   5        for(auto itr=mp.begin();itr!=mp.end();itr++){   )            if(itr->second==nums.size()){   *                res.push_back(itr->first);               }               }               return res;       }5��                          V       �              5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        cI+     �                 5��                          V                      5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  V        cIt     �               A   vector<vector<int>> nums = {{3,1,2,4,5},{1,2,3,4},{3,4,5,6}}; 5��                         #                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  V        cIv     �               *   vector<int> result =intersection(nums);5��                         f                    5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  V        cI}    �               +    vector<int> result =intersection(nums);5��                        ~                    �                        ~                    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  V        cI�     �               B    vector<vector<int>> nums = {{3,1,2,4,5},{1,2,3,4},{3,4,5,6}}; �             5��                         C                    5�_�      	                      ����                                                                                                                                                                                                                                                                                                                                                  V        cI�     �                �             5��                          ?                      �                          ?                      5�_�      
           	   	       ����                                                                                                                                                                                                                                                                                                                                                  V        cI�     �      
                 5��                         �                      �                         �                      5�_�   	              
          ����                                                                                                                                                                                                                                                                                                                                                  V        cI�     �                �             5��                          X                      �                          X                      5�_�   
                 
       ����                                                                                                                                                                                                                                                                                                                            	           	           V        cI�     �   	                    5��    	                     �                      �    	           	          �       	              5�_�                    
       ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ
     �   	                    for () 5��    	                     �                      5�_�                    	       ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ     �   	                �   	          5��    	                      �                      �    	                      �                      �    	                    �                     �    	                    �                     �    	                    �                     5�_�                           ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ"     �   
                    for (auto a: nums) 5��    
                     �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ+     �   
                for (auto a: nums) 5��    
                     �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ8     �   
                for (auto a: nums) m[a]++;5��    
                     �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJB     �   
            #    for (auto a: nums) if() m[a]++;5��    
                     �                      5�_�                    
       ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ�     �   	                unordered_map m;5��    	          
           �       
               5�_�                       
    ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ�    �               #include <unordered_map>5��       
       
           I       
               5�_�                       
    ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ�     �                   �             5��                          �                      �                         �                      5�_�                       	    ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ�     �               
    for ()5��       	               	   �               	       5�_�                           ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ�     �                   for (suto b: m)5��                         �                      5�_�                    
       ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ�     �   	            
    map m;5��    	                  	   �               	       5�_�                    
       ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ�     �   	                map<int,int> m;5��    	                    �                      �    
                  
   �               
       5�_�                           ����                                                                                                                                                                                                                                                                                                                            	           	           V        cJ�     �                   for (suto b: m) 5��                         �                      5�_�                           ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK
     �                   for (suto b: m) if() 5��                                              5�_�                       &    ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK     �               '    for (suto b: m) if(b.second > max) 5��       &                                       5�_�                       '    ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK     �               )    for (suto b: m) if(b.second > max){} 5��       '                                      �                                               �                                              5�_�                            ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK     �                5��                                               �                        #                    �                        #                    �                        #                    �                        #                    �                        *              	       �                          +                     5�_�                           ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK7     �   
                int max=0;5��    
                     �                      5�_�                             ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK?     �                5��                          7                     �                        ?                    5�_�      !                      ����                                                                                                                                                                                                                                                                                                                            	           	           V        cKN    �                    �             5��                          X                     �                         \                     �                     	   \             	       �                        c                    �                        c                    �                        c                    5�_�       "           !      	    ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK�    �                '    for (suto b: m) if(b.second > max){5��       	                                      5�_�   !   #           "          ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK�    �                        result = a.first;5��                        H                    5�_�   "   $           #          ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK�     �                0    vector<vector<int>> nums = {0,1,2,2,4,4,1}; 5��                                              5�_�   #   %           $          ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK�    �                /    vector<vector<int> nums = {0,1,2,2,4,4,1}; 5��                                              5�_�   $   &           %          ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK�     �                /    vector<int> result =mostFrequentEven(nums);5��                        2                    5�_�   %   '           &          ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK�     �                    print(result);5��                          V                     5�_�   &               '          ����                                                                                                                                                                                                                                                                                                                            	           	           V        cK�    �                    �             5��                          V                     �                      
   Z              
       �                        b                    �                        b                    5��