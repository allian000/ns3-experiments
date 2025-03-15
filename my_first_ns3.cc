#include "ns3/core-module.h"

using namespace ns3;

int main(){
    // 設定 ns3 時間解析度
    Time::SetResolution(Time::NS);

    // 打印 LOG
    NS_LOG_UNCOND("Hello NS3!!!");

    // 執行模擬器: 1秒
    Simulator::Stop(Seconds(1.0));
    Simulator::Run();
    Simulator::Stop();

    return 0;
}