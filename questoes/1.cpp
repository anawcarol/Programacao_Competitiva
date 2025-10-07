#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { //essa funcao retorna um vector contendo os índices da soma de target
        map<int,int>mp; //nesse map a chave é o valor do array e o valor é o índice do array

        for (int i = 0; i < nums.size(); i++)
        {
            //target - nums[i]: calcula o complemento necessário, 
            if (mp.count(target-nums[i]) > 0) //mp.count(): verifica se o complemento já existe no mapa
                return {mp[target-nums[i]], i}; 
            //Se existir: retorna {índice do complemento, índice atual}

            mp[nums[i]] = i;
            //Armazena o número atual com seu índice para consultas futuras.

        }

        return {-1, -1};

    }
};

int main() {
    Solution sol;
    vector<int> nums;
    int target, n;
    
    // Solicita o tamanho do array
    cout << "Digite o tamanho do array: ";
    cin >> n;
    
    // Solicita os elementos do array
    cout << "Digite os " << n << " elementos do array: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    // Solicita o target
    cout << "Digite o valor target: ";
    cin >> target;
    
    // Chama a função twoSum
    vector<int> result = sol.twoSum(nums, target);
    
    // Exibe o resultado
    cout << "\nResultado: ";
    if (result[0] == -1 && result[1] == -1) {
        cout << "Nenhum par encontrado que some " << target << endl;
    } else {
        cout << "[" << result[0] << ", " << result[1] << "]" << endl;
        cout << "Explicacao: nums[" << result[0] << "] = " << nums[result[0]] 
             << " + nums[" << result[1] << "] = " << nums[result[1]] 
             << " = " << nums[result[0]] + nums[result[1]] << endl;
    }
    
    return 0;
}


