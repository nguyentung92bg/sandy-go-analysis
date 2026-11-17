/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$get_HaveData
bool Dino_BusSand_App_Meta_YachtRacingData__get_HaveData (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingData$$get_HaveData
   bool Dino_BusSand_App_Meta_YachtRacingData__get_HaveData
   (Dino_BusSand_App_Meta_YachtRacingData_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_Meta_YachtRacingData__get_HaveData_22547a8(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(param_1 + 0x58),0);
  if (((uVar2 & 1) == 0) && (*(long *)(param_1 + 0x68) != 0)) {
    bVar1 = *(long *)(param_1 + 0x70) != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

