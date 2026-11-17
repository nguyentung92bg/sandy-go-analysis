/* IL2CPP: Dino.BusSand.App.DeviceMemory$$TooLowForInterstitial
bool Dino_BusSand_App_DeviceMemory__TooLowForInterstitial (Dino_BusSand_App_DeviceMemory_Snapshot_o s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.DeviceMemory$$TooLowForInterstitial
   bool Dino_BusSand_App_DeviceMemory__TooLowForInterstitial
   (Dino_BusSand_App_DeviceMemory_Snapshot_o s, const MethodInfo* method); */

byte Dino_BusSand_App_DeviceMemory__TooLowForInterstitial_214fa78(ulong *param_1)

{
  byte bVar1;
  
  if (((long)*param_1 < 0) || ((long)param_1[1] < 1)) {
    bVar1 = 0;
  }
  else {
    bVar1 = *param_1 < 0xfa | (byte)param_1[3];
  }
  return bVar1 & 1;
}

